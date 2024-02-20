#include <iostream>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

// Function to decompress a run-length encoded string
string decompress(const string& compressed) {
    stringstream ss(compressed);
    string result;
    char ch;
    int count;
    while (ss >> ch >> count) {
        result += string(count, ch);
    }
    return result;
}

// Function to execute query type 1: append f copies of string S to the list B
void executeQueryType1(vector<string>& B, const string& S, int f) {
    string decompressed = decompress(S);
    for (int i = 0; i < f; ++i) {
        B.push_back(decompressed);
    }
}

// Function to execute query type 2: remove f occurrences of string S from B
void executeQueryType2(vector<string>& B, const string& S, int f) {
    string decompressed = decompress(S);
    int removed = 0;
    for (auto it = B.begin(); it != B.end();) {
        if (*it == decompressed) {
            it = B.erase(it);
            removed++;
            if (removed == f) break;
        } else {
            ++it;
        }
    }
}

// Function to execute query type 3: determine the number of strings between S1 and S2
int executeQueryType3(const vector<string>& B, const string& S1, const string& S2) {
    string decompressedS1 = decompress(S1);
    string decompressedS2 = decompress(S2);
    int count = 0;
    bool countFlag = false;
    for (const string& str : B) {
        if (str == decompressedS1) {
            countFlag = true;
        } else if (str == decompressedS2) {
            break;
        } else if (countFlag) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int Q;
        cin >> Q;

        vector<string> B;
        int X = 0; // Initialize X to 0

        cout << "Case " << t << ":" << endl;
        for (int q = 0; q < Q; ++q) {
            int queryType;
            string S1, S2;
            int f;
            cin >> queryType;

            if (queryType == 1 || queryType == 2) {
                string S;
                cin >> S >> f;
                // Update each alphabet with (S[i] + X) mod 26
                for (char& ch : S) {
                    ch = ((ch - 'a' + X) % 26) + 'a';
                }
                if (queryType == 1) {
                    executeQueryType1(B, S, f);
                } else {
                    executeQueryType2(B, S, f);
                }
            } else if (queryType == 3) {
                cin >> S1 >> S2;
                int result = executeQueryType3(B, S1, S2);
                cout << result << endl;
                // Update X based on the result
                X = result % 26;
            }
        }
    }

    return 0;
}

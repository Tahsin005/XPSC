/*
        Author: tahsin_ferdous
        Email: tahsin.ferdous3546@gmail.com

        Qué mirás, bobo? Qué mirás, bobo?…
*/          
#include<bits/stdc++.h>
#define OJ
using namespace std;
#define ll long long
#define cyes cout << "YES" << '\n';
#define yes cout << "Yes" << '\n';
#define cno cout << "NO"<< '\n';
#define no cout << "No"<< '\n';
#define minus cout << -1 << '\n';
#define nl cout << '\n';
#define el '\n'
#define all(x) x.begin(), x.end()
#define fr(x, s, e, b) for (ll x = s; x <= e; x = x + b)
#define rfr(x, s, e, b) for (ll x = s; x >= e; x = x - b)
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define pii pair<int,int>
#define mii map<int,int>
#define imax INT_MAX
#define imin INT_MIN
#define F first
#define S second
#define pb push_back
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define messi cout << "Qué mirás, bobo?" << '\n';
#define e4 int main()
#define Tahsin ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef OJ
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#define HERE cerr<<"here - "<<__LINE__<<"\n";
#else
#define debug(x...)
#define HERE cerr<<"here - "<<__LINE__<<"\n";
#endif
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// @Problem Link: 

string day(int month, int year) {
    tm timeinfo = {};
    timeinfo.tm_year = year - 1900; // Years since 1900
    timeinfo.tm_mon = month - 1;     // Month index (0-11)
    timeinfo.tm_mday = 1;            // Day of the month (1-31)

    mktime(&timeinfo);

    // Sunday = 0, Monday = 1, ..., Saturday = 6
    int day_of_week = timeinfo.tm_wday;

    switch (day_of_week) {
        case 0: return "Sunday";
        case 1: return "Monday"; 
        case 2: return "Tuesday"; 
        case 3: return "Wednesday"; 
        case 4: return "Thursday"; 
        case 5: return "Friday"; 
        case 6: return "Saturday"; 
        default: return "Invalid day"; 
    }
}
bool isLeapYear(int year) {
    // Leap year conditions:
    // 1. If the year is divisible by 4 and not divisible by 100, it's a leap year.
    // 2. If the year is divisible by 400, it's a leap year.
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int daysInMonth(int year, int month) {
    // Array to store the number of days in each month (0-indexed)
    int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return daysInMonth[month - 1]; // Return the number of days for the given month
}
map<string, int> weekday;
void gen_day() {
    weekday["Sun"] = 0;
    weekday["Mon"] = 1;
    weekday["Tue"] = 2;
    weekday["Wed"] = 3;
    weekday["Thu"] = 4;
    weekday["Fri"] = 5;
    weekday["Sat"] = 6;
}
void TEST_CASE(){
    string s;
    getline(cin, s);

    string yr = "";
    string mt = "";

    for (int i = 6; i <= 9; i++) {
        yr += s[i];
    }
    for (int i = 3; i <= 4; i++) {
        mt += s[i];
    }

    int m = stoi(mt);
    int y = stoi(yr);
    // cout << mt << " " << yr << el;
    // cout << m << " " << y << el;
    string d = day(m, y);

    string start = "";
    for (int i = 0; i <= 2; i++) start += d[i];

    // cout << weekday[start] << el;

    // cout << daysInMonth(y, ) << el;
    int dim = daysInMonth(y, m);
    // cout << dim << el;
    int remday = 35 - weekday[start];

    // cout << remday << el;

    if (dim <= remday) {
        vii ans;
        for (int i = 1; i <= dim; i++) {
            ans.push_back(i);
        }
        vii prev;
        for (int i = 1; i <= weekday[start]; i++) {
            prev.push_back(0);
        }

        vii res;
        for (auto val : prev) {
            res.push_back(val);
        }
        for (auto val : ans) {
            res.push_back(val);
        }

        // cout << res.size() << el;
        while (res.size() != 35) {
            res.push_back(0);
        }
        // for (auto val : res) {
        //     // res.push_back(val);
        //     cout << val << el;
        // }
                // paisi
        
        cout << "|---------------------------|" << el;
        cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << el;
        cout << "|---------------------------|" << el;
        // cout << res.size() << el;

        int idx = 0;
        for (int i = 0; i < res.size(); i++) {
            string temp = to_string(res[i]);
            if (idx == 0) {
                // cout << "| "; 
                if (temp.size() == 1 and res[i] != 0) {
                    cout << "|  "; 
                }
                else if (temp.size() == 2 and res[i] != 0) {
                    cout << "| "; 
                }
            } else if (idx != 0 and idx != 7) {
                if (temp.size() == 1 and res[i] != 0) {
                    cout << " "; 
                }
                else if (temp.size() == 2 and res[i] != 0) {
                    cout << ""; 
                }

            }
            idx++;


            if (res[i] != 0) {
                cout << res[i] << "| ";
            } else {
                if (idx == 1) {
                    cout << "| ";
                }
                cout << "-" << " | ";
            }
            
            if (idx == 7){
                // cout << " |"; 
                nl
                cout << "|---------------------------|" << el;

                idx = 0;
            }
        }
        nl

        nl









    } else {
        int baki = abs (remday - dim);
        // cout << baki << el;
        int jabo = abs(baki - dim);
        // cout << jabo << el;
        vii ans;
        int i = 1;
        for (; i <= jabo; i++) {
            ans.push_back(i);
        }
        vii prev;
        for (int j = jabo + 1; j <= dim; j++) {
            prev.push_back(j);
        }
        // for (int i = 1; i <= weekday[start]; i++) {
        //     prev.push_back(0);
        // }
        while (prev.size() + ans.size() != 35) {
            prev.push_back(0);
        }


        vii res;
        for (auto val : prev) {
            res.push_back(val);
        }
        for (auto val : ans) {
            res.push_back(val);
        }

        // for (auto val : res) {
        //     // res.push_back(val);
        //     cout << val << el;
        // }





        // // paisi
        cout << "|---------------------------|" << el;
        cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << el;
        cout << "|---------------------------|" << el;
        // cout << res.size() << el;

        int idx = 0;
        for (int i = 0; i < res.size(); i++) {
            string temp = to_string(res[i]);
            if (idx == 0) {
                // cout << "| "; 
                if (temp.size() == 1 and res[i] != 0) {
                    cout << "|  "; 
                }
                else if (temp.size() == 2 and res[i] != 0) {
                    cout << "| "; 
                }
            } else if (idx != 0 and idx != 7) {
                if (temp.size() == 1 and res[i] != 0) {
                    cout << " "; 
                }
                else if (temp.size() == 2 and res[i] != 0) {
                    cout << ""; 
                }

            }
            idx++;


            if (res[i] != 0) {
                cout << res[i] << "| ";
            } else {
                if (idx == 1) {
                    cout << "| ";
                }
                cout << "-" << " | ";
            }
            
            if (idx == 7){
                // cout << " |"; 
                nl
                cout << "|---------------------------|" << el;

                idx = 0;
            }
        }
        nl
        nl

    }
}
e4{
    #ifndef OJ
        freopen("error.txt", "w", stderr);
    #endif
    #ifdef OJ 
        Tahsin
    #endif
    gen_day();
    ll tc = 1;
    cin >> tc;
    cin.ignore();
    
    for(ll cs = 1; cs <= tc; cs++){
        // cout << "Case #" << cs << ": ";
        TEST_CASE();
    }
    return 0;
}
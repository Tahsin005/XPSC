#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

class Hashing{
    vector<list<int>> hashTable;
    int buckets;
    public:
        Hashing(int size){
            buckets = size;
            hashTable.resize(size);
        }

        int hashValue(int key){
            return key % buckets; // Division method
        }
        void addKey(int key){
            int idx = hashValue(key);
            hashTable[idx].push_back(key);
        }

        list<int>::iterator searchKey(int key){
            int idx = hashValue(key);
            return find(hashTable[idx].begin(), hashTable[idx].end(),key);
        }

        void deleteKey(int key){
            int idx = hashValue(key);
            if(searchKey(key) != hashTable[idx].end()){ // Element present in the table
                hashTable[idx].erase(searchKey(key));
                cout<<key<<" is deleted"<<endl;
            }
            else{
                cout<<"Key is not present inside the hash table"<<endl;
            }
        }
};
int main(){
    Tahsin
    Hashing h(3);
    /*
        In add and delete, the time complexity
        would be O(1)
        In search operation, the time complexity 
        is also O(1)
        BUT, in the worst case the time complexity
        would be O(n) (if all element is in the same
        bucket)
    */
    h.addKey(5);
    h.addKey(9);
    h.addKey(3);

    h.deleteKey(3);
    h.deleteKey(3);

    return 0;
}
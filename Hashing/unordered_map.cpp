#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    unordered_map<string,int> mp;
    /*  In average case:
        Search = O(1)
        delete = O(1)
        retrieval = O(1)

        In worst case:
            all = O(n)
    */
    mp["niloy"] = 1065;
    mp["tahsin"] = 1068;
    mp["rean"] = 1059;
    mp["mahin"] = 1073;
    // mp["ferdous"] = 1068;
    // mp.insert({"ferdous",7777});
    mp.insert(make_pair("ferdous",1111));

    for(auto& element: mp){
        cout<<"Name - "<<element.first<<" ||  ID No. - "<<element.second<<endl;
    }cout<<endl;

    mp.insert(make_pair("ferdous",9999));// this will not update the map, 
    // it will not simply insert if there is already element present in it.
    // mp["ferdous"] = 9999;// this will update it.


    auto st = mp.find("mahin");
    auto ed = mp.find("rean");
    advance(st,1);
    mp.erase(st,ed);
    for(auto& element: mp){
        cout<<"Name - "<<element.first<<" ||  ID No. - "<<element.second<<endl;
    }cout<<endl;

    cout<<mp.empty()<<endl;
    // returns 1 if empty
    cout<<mp.count("ferdous")<<endl;
    for(auto& element: mp){
        cout<<"Name - "<<element.first<<" ||  ID No. - "<<element.second<<endl;
    }cout<<endl;
    return 0;
}
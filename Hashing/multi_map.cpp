#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    // multimap<string,int> mp;
    multimap<string,int,greater<string>> mp;
   // We cannot use [] to insert an element to the multmap, have to use .insert function
    mp.insert({"tahsin",1068});
    mp.insert({"niloy",1065});
    mp.insert({"rean",1059});
    mp.insert({"mahin",1073});
    // mp["ferdous"] = 1068;
    // mp.insert({"ferdous",7777});
    mp.insert(make_pair("ferdous",1111));

    mp.insert(make_pair("ferdous",9999));// this will not update the map, 
    for(auto& element: mp){
        cout<<"Name - "<<element.first<<" ||  ID No. - "<<element.second<<endl;
    }cout<<endl;

    // auto st = mp.find("mahin");
    // auto ed = mp.find("rean");
    // advance(st,1);
    // mp.erase(st,ed);
    // for(auto& element: mp){
    //     cout<<"Name - "<<element.first<<" ||  ID No. - "<<element.second<<endl;
    // }cout<<endl;

    // cout<<mp.empty()<<endl;
    // // returns 1 if empty
    cout<<mp.count("ferdous")<<endl;
    cout<<mp.count("mahin")<<endl;
    // for(auto& element: mp){
    //     cout<<"Name - "<<element.first<<" ||  ID No. - "<<element.second<<endl;
    // }cout<<endl;
    return 0;
}
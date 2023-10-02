#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Tahsin ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Tahsin
    map<string,int> mp;
    // map<string,int,greater<string>> mp;

    mp["tahsin"] = 1068;
    mp["niloy"] = 1065;
    mp["mahin"] = 1073;
    mp["rean"] = 1059;
    // mp["ferdous"] = 1068;
    // mp.insert({"ferdous",7777});
    mp.insert(make_pair("ferdous",1111));

    for(auto& element: mp){
        cout<<"Name - "<<element.first<<" ||  ID No. - "<<element.second<<endl;
    }cout<<endl;

    mp["ferdous"] = 9999;

    // for(auto& element: mp){
    //     cout<<"Name - "<<element.first<<" ||  ID No. - "<<element.second<<endl;
    // }


    // Iterators

    // map<string,int>::iterator it;
    // for(it = mp.begin(); it != mp.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // map<string,int>::reverse_iterator it;
    // for(it = mp.rbegin(); it != mp.rend(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }


    //Erase function;

    // mp.erase("ferdous");
    auto st = mp.find("mahin");
    auto ed = mp.find("rean");
    advance(st,1);
    mp.erase(st,ed);
    for(auto& element: mp){
        cout<<"Name - "<<element.first<<" ||  ID No. - "<<element.second<<endl;
    }cout<<endl;

    cout<<mp.empty()<<endl;
    // returns 1 if empty
    cout<<mp.count("ferdous");


    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Info{
public:
    string name;
    int num;
    Info(string name,int num){
        this->name=name;
        this->num=num;
    }
};
class cmp{
public:
    bool operator()(Info a,Info b){
        if(a.name>b.name){
            return true;
        }
        else if(a.name<b.name){
            return false;
        }
        else{
            if (a.num<b.num) {
                return true;
            }
            else {
                return false;
            }
        }
    }
};
bool compare(Info a, Info b) {
    if (a.name < b.name) {
        return true;
    } 
    else if (a.name > b.name) {
        return false;
    }
    else {
        return a.num > b.num;
    }
}
int main(){
    int n;
    cin>>n;
    vector<Info> vec;
    for (int i = 0; i < n; i++){
        string nm;
        cin>>nm;
        int ui;
        cin>>ui;
        Info obj(nm,ui);
        vec.push_back(obj);
    }

    sort(vec.begin(), vec.end(), compare);
    for (int i = 0; i < n; i++) {
        cout<<vec[i].name<<" "<<vec[i].num<<endl;
    }
    return 0;
}
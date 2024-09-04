#include <bits/stdc++.h>

using namespace std;
class student{
    public:
    string name;
    int roll;
    int marks;
    student(string name,int roll,int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
int max_index(vector<student>s){
    if(s.empty()){
        return -1;
    }
    int maxIndex=0;
    for(int i=1;i<(int)s.size();i++){
        if(s[i].marks>s[maxIndex].marks||(s[i].marks==s[maxIndex].marks&&s[i].roll<s[maxIndex].roll)){
            maxIndex=i;
        }
    }
    return maxIndex;
}
int main(){
    int n,q;
    cin>>n;
    vector<student>s;
    for(int i=0;i<n;i++){
        string name;
        int roll;
        int marks;
        cin>>name>>roll>>marks;
        s.push_back(student(name,roll,marks));
    }
    cin>>q;
    for(int i=0;i<q;i++){
        int cmd;
        cin>>cmd;
        if(cmd==0){
            string name;
            int roll;
            int marks;
            cin>>name>>roll>>marks;
            s.push_back(student(name,roll,marks));
            int maxIndex=max_index(s);
            cout<<s[maxIndex].name<<" "<<s[maxIndex].roll<<" "<<s[maxIndex].marks<<endl;
        }
        else if(cmd==1){
            if(s.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                int maxIndex=max_index(s);
                cout<<s[maxIndex].name<<" "<<s[maxIndex].roll<<" "<<s[maxIndex].marks<<endl;
            }
        }
        else if(cmd==2){
            if(s.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                int maxIndex=max_index(s);
                s.erase(s.begin()+maxIndex);
                if(s.empty()){
                    cout<<"Empty"<<endl;
                }
                else{
                    int findIndex=max_index(s);
                    cout<<s[findIndex].name<<" "<<s[findIndex].roll<<" "<<s[findIndex].marks<<endl;
                }
            }
        }
    }

    return 0;
}
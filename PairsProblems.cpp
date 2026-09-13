#include<bits/stdc++.h>
using namespace std;

// Different data type
void print1(){
    pair<string,int> student;
    cout<<"Enter name:";
    cin>>student.first;
    cout<<"roll number: ";
    cin>>student.second;

    cout<<"name is :"<<student.first<<endl;
    cout<<"roll number:"<<student.second<<endl;
}

// vector of pairs
void print2(){
    vector<pair<int,int>> v;
    cout<<"Enter 5 pairs:";
    for(int i=0;i<5;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    cout<<"pairs are:";
    for(auto p: v){
      cout<<p.first<<" "<<p.second<<endl;
    }
    
}
// list of 5 students
void print3(){
    vector<pair<string,int>> st;
    cout<<"Enter list of 5 students:";
    for(int i=0;i<5;i++){
        string x;
        int y;
        cin>>x>>y;
        st.push_back({x,y});
    }
    cout<<"list are:";
    for(auto p: st){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
int main()
{

// print1();
// print2();
print3();


    return 0;
}
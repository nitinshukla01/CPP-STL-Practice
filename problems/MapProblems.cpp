#include<bits/stdc++.h>
using namespace std;
// store and print 5 students using map.
 void print1(){
   map<string,int> m;
   cout<<"Enter Name and roll no.:";
   for(int i=0;i<5;i++){
    int x;
    string name;
    cin>>name>>x;
    m[name] = x;
   }
   cout<<"Details:";
   for(auto d : m){
    cout<<d.first<<" "<<d.second<<endl;
   }
 }
 // search a student by roll number.
void print2(){
   map<int,string> m;
   cout<<"Enter roll no. and  name:";
   for(int i=0;i<5;i++){
    int x;
    string name;
    cin>>x>>name;
    m[x] = name; 
   }
   int key;
   cout<<"Enter roll number: ";
   cin>>key;
   if(m.find(key) != m.end()){
    cout<<"Found."<<endl;
   }
   else{
    cout<<"Not found."<<endl;
   }
}
// search marks by student name.
void print3(){
    map<string,int> m;
    cout<<"Enter roll no. and name:";
    for(int i=0;i<5;i++){
        int x;
        string name;
        cin>>name>>x;
        m[name] = x;
    }
    string name;
    cout<<"Enter name:";
    cin>>name;
    if(m.find(name) != m.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}
// delete a student using roll number.
void print4(){
    map<int,string> m;
    cout<<"Enter roll no. and name:";
    for(int i=0;i<5;i++){
        int x;
        string name;
        cin>>x>>name;
        m[x] = name;
    }
    int key;
    cout<<"Enter roll number:";
    cin>>key;
    m.erase(key);
    for(auto n : m){
       cout<<n.first<<" "<<n.second<<endl;
    }   
}
// find the student with highest marks.
void print5(){
    map<string,int> m;
     int highest = 0;
     string topper;
    cout<<"Enter name and marks:";
    for(int i=0;i<5;i++){
        int marks;
        string name;
        cin>>name>>marks;
        m[name] = marks;
    }
    cout<<"All students data:";
    for(auto all : m){
        cout<<all.first<<" "<<all.second<<endl;
    }
    for(auto all : m)
    if(all.second > highest){
       highest = all.second;
       topper = all.first;
    }
    cout<<"Highest marks: ";
    cout<<highest<<endl;
    cout<<"Topper:";
    cout<<topper<<endl;
}
int main(){

// print1();
// print2();
// print3();
// print4();
print5();



    return 0;
}
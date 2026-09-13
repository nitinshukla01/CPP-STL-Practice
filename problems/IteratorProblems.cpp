#include<bits/stdc++.h>
using namespace std;

// Q1 :- problem 1
void print1(){
    vector<int> v;
    cout<<"Enter elements :";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"elements are:";
    vector<int>::iterator it;
    for(it=v.begin();it!= v.end();it++){
        cout<<*(it)<<" ";

    }
}

// Q2:- print even elements
void print2(){
    vector<int> v;
    cout<<"Enter elements :";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Even elements :";
    for(auto i =v.begin();i != v.end();i++){
        if(*i % 2 == 0){
        cout<<*(i)<<" ";
        }
    }
}

// Q3:- print vector in reverse order
void print3(){
    vector<int> v;
    cout<<"Enter elements :";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<" vector in revrese order: ";
    for(auto i = v.rbegin();i!= v.rend();i++){
        cout<<*(i)<<" ";
    }
}

// Q4:- double value print
void print4(){
    vector<int> v;
    cout<<"Enter elements :";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(auto it=v.begin();it != v.end();it++){
        cout<<*(it)*2<<" ";
    }
}

// Q5:- 
void print5(){
    vector<int> v;
    cout<<"Enter elements :";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
     cout<< " sum of Even elements :";
     int sum = 0;
    for(auto i =v.begin();i != v.end();i++){
        if(*i % 2 == 0){ 
            sum = sum + *i;
        }
    }
     cout<<sum <<" ";
} 
int main()
{

//print1();
//print2();
 //print3();
 //print4();
 print5();
    return  0;
}

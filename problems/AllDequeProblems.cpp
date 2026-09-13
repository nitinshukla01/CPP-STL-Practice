#include<bits/stdc++.h>
using namespace std;
// Q1:- print deque
void print1(){
    deque<int> d;
cout<<"Enter elements:";
for(int i=0;i<5;i++){
    int x;
    cin>>x;
    d.push_back(x);
}
cout<<"elements are: ";
for(int i=0;i<d.size();i++){
   cout<<d[i]<<" ";
}

}

// Q2:- basic + front & back
void print2(){
    deque<int> d;
    cout<<"Enter elements :";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        d.push_back(x);
    }
    d.push_front(9);
    d.push_back(0);
    for(auto it = d.begin(); it != d.end();it++){
        cout<<*(it)<<" ";
    }
}

//Q3:- 
void print3(){
    deque<int> d;
    cout<<"Enter elements :";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        d.push_back(x);
    }
    d.pop_front();
    d.pop_front();
    d.pop_back();
    d.push_front(100);
    d.push_back(200);
    
    cout<<" final elements are:";
    for(auto it = d.begin();it!= d.end();it++){
        cout<<*(it)<<" ";
    }
}
//Q4:- medium+
void print4(){
    deque<int> d;
    cout<<"Enter elements :";
    for(int i=0;i<8;i++){
        int x;
        cin>>x;
        d.push_back(x);
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

    int a = d.front();
    d.pop_front();
    cout<<"removed element from front:"<<a<<endl;
    int b = d.back();
    d.pop_back();
    cout<<"removed element from back:"<<b<<endl;
    int sum = a+b;
    cout<<"sum = "<<sum<<endl;

    
    for(auto it = d.begin(); it != d.end();it++){
        cout<<*(it)<<" "<<endl;
    }
}
// Q5:- found & not found
void print5(){
    deque<int> d;
    cout<<"Enter elements :";
    for(int i=0;i<8;i++){
        int x;
        cin>>x;
        d.push_back(x);
    }
    int y;
    
    cout<<"Enter element which is found :";
    cin>>y;
    bool found = false;
     for(auto it = d.begin();it != d.end();it++){
        if(*(it) == y){
            found = true;
            break;
        }
     }

     if(found){
        cout<<"found";
     }
     else{
        cout<<"not found";
     }
}

// Q6:- remove all duplicate elements 
void print6(){
    deque<int> d;
    cout<<"Enter elements :";
    for(int i=0;i<8;i++){
        int x;
        cin>>x;
        d.push_back(x);
    }
    for(auto it = d.begin();it != d.end();it++){
        auto jt = it;
        jt++;

        while(jt != d.end()){
            if(*it == *jt){
                jt = d.erase(jt);
            }
            else{
                jt++;
            }
        }

    }
    cout<<"After removing duplicates:";
    for(auto it = d.begin();it != d.end();it++){
        cout<<*(it)<<" ";
    }
}
int main()
{

// print1();
// print2();
//print3();
//print4();
// print5();
print6();
    return 0;
}

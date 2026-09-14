#include<bits/stdc++.h>
using namespace std;
// push + display
void print1(){
    stack<int> s;
   cout<<"Enter 5 elements:";
   for(int i = 0;i<5;i++){
    int x;
    cin>>x;
    s.push(x);
   }
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
}
// pop + display
void print2(){
    stack<int> s;
    cout<<"Enter elements:";
    for(int i=0;i<5;i++){
       int x;
        cin>>x;
        s.push(x);
    }
    s.pop();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
// print1();
print2();


   return 0;
}
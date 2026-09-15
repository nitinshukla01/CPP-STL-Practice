#include<bits/stdc++.h>
using namespace std;
// push + display 
void print1(){
 queue<int> q;
 cout<<"Enter number:";
 for(int i=0;i<5;i++){
    int x;
    cin>>x;
    q.push(x);
 }
 while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
 }
}
// inser + remove + Display
void print2(){
   queue<int> q;
 cout<<"Enter number:";
 for(int i=0;i<7;i++){
    int x;
    cin>>x;
    q.push(x);
 }
   q.pop();
   cout<<"last element is :"<<q.back()<<endl;

   while(!q.empty()){
   cout<<"Remaining elements: "<<q.front()<<" "<<endl;
   q.pop();
   }
}

// search element
void print3(){
    queue<int> q;
 cout<<"Enter number:";
 for(int i=0;i<5;i++){
    int x;
    cin>>x;
    q.push(x);
 }
 bool found = false;
 int x;
 cout<<"Enter element to search:";
 cin>>x;
 while(!q.empty()){
    if(q.front() == x){
        found = true ;
        break;
    }
    q.pop();
 }
 if(found){
    cout<<"Element found"<<endl;
 }
 else{
    cout<<"Element not found"<<endl;
 }
}

// reverse Queue
void print4(){
    queue<int> q;
 cout<<"Enter number:";
 for(int i=0;i<5;i++){
    int x;
    cin>>x;
    q.push(x);
 }
 // Queue -> stack
 stack <int> s;
 while(!q.empty()){
    s.push(q.front());
    q.pop();
 }
 // stack -> queue
 while(!s.empty()){
    q.push(s.top());
    s.pop();
 }

 cout<<"Reversed queue:";
 while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
 }
}
int main()
{

// print1();
// print2();
// print3();
print4();

    return 0;
}
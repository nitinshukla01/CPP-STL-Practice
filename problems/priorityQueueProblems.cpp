#include<bits/stdc++.h>
using namespace std;
// priority_queue given sequence bias elements.
void print1(){
priority_queue<int> Q;
cout<<"Enter elements:";
for(int i=0;i<5;i++){
    int x;
    cin>>x;
    Q.push(x);
}
while(!Q.empty()){
    cout<<Q.top()<<" ";
    Q.pop();
}
}
// basic 
void print2(){
    priority_queue<int> pq;
    cout<<"Enter elements:";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        pq.push(x);
    }
   
  cout<<"Highest :"<<pq.top()<<endl;

   pq.pop(); // remove highest priority element

     cout<<" After pop ,Highest :"<<pq.top()<<endl;

    cout<<"Elements are:";
   while(!pq.empty()){
    cout<<pq.top()<<" "<<endl;
    pq.pop();
   }
}
//in reverse order
void print3(){
    priority_queue<int,vector<int>,greater<int>> p; // for revrese
    cout<<"Enter elements:";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        p.push(x);
    }
    cout<<"Elements are in reversed order:";
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
}

// find the largest and second largest elements in a priority queue.
void print4(){
    priority_queue<int> m;
    cout<<"Enter number:";
    for(int i=0;i<7;i++){
      int x;
      cin>>x;
      m.push(x);
    }
    int largest,secondlargest;
    largest = m.top();
     cout<<"Largest element = "<<m.top()<<endl;

    m.pop();
    secondlargest = m.top();

     for(int k=0;k>m.size();k++){
        if(m.top() > largest){
            secondlargest = m.top();
        }
    }
   
    cout<<"Second Largest element = "<<m.top()<<endl;

}
// print all priority queue elements except the largest element.
void print5(){
   priority_queue<int,vector<int>,greater<int>> m;
    cout<<"Enter number:";
    for(int i=0;i<7;i++){
      int x;
      cin>>x;
      m.push(x);
    }
    m.pop();
    while(!m.empty()){
        cout<<m.top()<<" ";
        m.pop();
    }

}
//  find and print the largest 3 elements from a priority queue.
void print6(){
    priority_queue<int> m;
    cout<<"Enter number:";
    for(int i=0;i<7;i++){
      int x;
      cin>>x;
      m.push(x);
    }
    cout<<"Largest 3 elements: ";
    for(int i =0 ;i<3;i++){
        cout<<m.top()<<" ";
        m.pop();
    }
}

int main(){

// print1();
// print2();
// print3();
// print4();
// print5();
print6();

    return 0;
}

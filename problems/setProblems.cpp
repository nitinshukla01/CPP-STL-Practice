#include<bits/stdc++.h> 
using namespace std;
//stroe unique numbers and print their count
void print1(){
    set<int> s;
    int count = 0;
    cout<<"Enter elements:";
    for(int i=0;i<8;i++){
        int x;
        cin>>x;
        s.emplace(x);
    }
    for(auto val : s){
        cout<<val<<" ";
        count++;
    }
    cout<<"\n";
    cout<<"elements : "<<count<<endl;
}
// search an element in a set.
void print2(){
    set<int> s;
    cout<<"Enter elements:";
    for(int i=0;i<6;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int val;
    cout<<"Enter number:";
    cin>>val;
    bool found = false;

    for(auto it =s.begin();it != s.end();it++){
      if(*(it) == val){
        found = true;
        break;
      }
    }
    if(found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}
//find smallest,largest, and their difference.
void print3(){
    set<int> s;
    cout<<"Enter elements:";
    for(int i=0;i<7;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    int largest = 0,smallest = 99999,difference;
    for(auto it=s.begin();it != s.end();it++){
        if(*(it) > largest){
            largest = *(it);
        }
        if(*(it)< smallest){
            smallest = *(it);
        }
    }
    cout<<"largest element is = "<<largest<<endl;
    cout<<"smallest element is = "<<smallest<<endl;
    cout<<"Difference is ="<<largest - smallest<<endl;
}
int main(){
// print1();
// print2();
print3();


    return 0;
}
#include<bits/stdc++.h>
#include<list>
using namespace std;

// Q1:- Basic problem
void print1(){
    list <int> l;
    cout<<"Enter list elements : ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    cout<<"list elements are: ";
    for(int value : l){ // itrators part use ,not l[] used 
        cout<< value<<" ";
    }

}
// Q2:- size of list , first elements ,second elements

void print2(){
    list <int> l;
    cout<<"Enter elements:";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    cout<<"size of list:"<<l.size()<<endl;
    cout<<"first element of list:"<<l.front()<<endl;
    cout<<"last element of list:"<<l.back()<<endl;
}
void print3(){
    list <int> l;
    cout<<"Enter elements: ";
    for(int i =0;i<5;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    int even =0 , odd =0;
    for(auto it =l.begin();it != l.end();it++){
        if(*(it) % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even elements :"<<even<<endl;
    cout<<"Odd elements :"<<odd<<endl;
}
// Q4:-largest and smallest
void print4(){
     list <int> l;
    cout<<"Enter elements: ";
    for(int i =0;i<7;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
      // int largest = l[0]; // not indexing in list
      int largest = *l.begin();
      int smallest = *l.begin();
    for(auto it = l.begin();it != l.end();it++){
     
        if(*it > largest){
            largest = *(it);
        }
        if(*it < smallest){
            smallest = *(it);
        }
    }
    cout<<"Largest element: "<<largest<<endl;
    cout<<"smallest element: "<<smallest<<endl;

}
// Q5:- add element
void print5(){
    list <int> l;
    cout<<"Enter elements: ";
    for(int i =0;i<7;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    l.push_front(100); // add in first index


    cout<<"after list elements are: ";
    for(int value : l){ // itrators part use ,not l[] used 
        cout<< value<<" ";
    }

}
//Q6 :- first and second element remove
void print6(){
    list <int> l;
    cout<<"Enter elements: ";
    for(int i =0;i<7;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    l.pop_back();
    l.pop_front();
    cout<<"after remove elements :";
    for(auto it = l.begin();it != l.end();it++){
        cout<<*(it)<<" ";
    }
}
// Q7:- rendom  element remove in list
void print7(){
    list <int> l;
    cout<<"Enter elements: ";
    for(int i =0;i<7;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    int rem;
    cout<<"Enter element:";
    cin>>rem;
    for(auto it = l.begin();it != l.end();it++){
        if(*it == rem){
            l.erase(it);
            break;
        }
    }
    for(auto it =l.begin();it != l.end();it++){
        cout<<*(it)<<" "<<endl;
    }
} 

// Q8:- add element 
void print8(){
    list <int> l;
    cout<<"Enter elements: ";
    for(int i =0;i<7;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    int  newvalue,findvalue;
    cout<<"Enter element before which you want to insert:";
    cin>>findvalue;
    cout<<"Enter new element:";
    cin>>newvalue;
    for(auto it = l.begin();it != l.end();it++){
        if(*it == findvalue){
            l.insert(it,newvalue); // 4 is index
            break;
        }
    }
    for(auto it =l.begin();it != l.end();it++){
        cout<<*(it)<<" "<<endl;
    }
} 
// Q9:- ascending order
void print9(){
    list <int> l;
    cout<<"Enter elements: ";
    for(int i =0;i<7;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    l.sort(); // vector me l.sort(l.begin(),l.end()) likhte h but list me only l.sort();
    cout<<"Ascending order:";
    for(auto it = l.begin();it != l.end();it++){
        cout<<*(it)<<" ";
    }
}
// Q10:- descending order
void print10(){
    list <int> l;
    cout<<"Enter elements: ";
    for(int i =0;i<7;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    l.sort(greater<int>()); 
    cout<<"Descending order:";
    for(auto it = l.begin();it != l.end();it++){
        cout<<*(it)<<" ";
    }
}

int main()
{

//print1();
//print2();
//print4();
//print5();
//print6();
//print7();
// print8();
// print9();
print10();
return 0;
}

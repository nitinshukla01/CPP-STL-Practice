// ==> Q2:-take 5 number by the user then remove last element and print the remaining vector.
#include<bits/stdc++.h>
using namespace std;
void printvector()
{
    vector <int> v ;
    cout<<"Enter vector elements:";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    v.pop_back(); // remove last elements 
    
    cout<<"Vector elements is :";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
}
// ==> Q3:-first and last elements remove
void printFirstAndLast()
{
    vector <int> v;
    cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    cout<<"size ="<<v.size()<<endl;
    cout<<"first element ="<<v.front()<<endl;
    cout<<"last element ="<<v.back()<<endl;
}
// ==> Q4:- take 5 elements by user and perform Add +Remove + print.
void AddRemovePrint()
{
     vector <int> v;
    cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    v.pop_back();
    v.push_back(10);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"size = "<<v.size()<<" ";
}
// ==> Q5:- vector + indexing.
void printIndex(){
    vector <int> v;
    cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"index 2 ="<<v[2]<<endl;
    cout<<"index 0 ="<<v[0]<<endl;
    cout<<"index 4 ="<<v[4]<<endl;
}

// ==> Q6:- input + indexing + update
void print6()
{
    vector <int> v;
    cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"index 2 = "<<v[2]<<endl;
     v[2] = 100;
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}
// ==> Q7:- search by index
void print7()
{
    vector <int> v;
    cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int index,x;
    cout<<"Enter index number when are you print: "<<endl;
    cin>>index;

       if(index > v.size()){
        cout<<"invalid index"<<endl;
    }
    else{
          cout<<"element is :"<<v[index]<<endl;
    }
}  
  // ==> Q8:- vector + itrator ( vector print using by itrator)
void print8()  
{
    vector <int> v;
    cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> :: iterator it;
    for(it = v.begin();it != v.end();it++)
    {
        cout<<*(it)<<" ";
    }
}
// ==> Q9:- find largest number
void print9()
{
    vector <int> v;
     cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int largest;
     largest  = v[0];
    for(int i=0;i<5;i++){
        if(v[i] > largest){
            largest = v[i];
        }
    }
    cout<<"Largest element is = "<<largest<<endl;

}
// ==> Q10:- Asecending order
void print10()
{
    vector <int> v;
     cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end()); // for ascending order 
    cout<<"ascending order:"; 
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
// ==> Q11:- desecnding order
void print11()
{
    vector <int> v;
     cout<<"Enter elements: ";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>()); // for descending order 
    cout<<"scending order:"; 
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{

//printvector();
//printFirstAndLast();
//AddRemovePrint();
//printIndex();
//print6();
//print7();
// print8();
//print9();
//print10();
//print11();
    return 0;
}

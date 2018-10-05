#include<iostream>
using namespace std;
  
// My function should print a value and increase it by 1 and then pass it on







int num(int a,int b){
    if(a<b){
        cout<<a<<endl;
        a++;
   return num(a,b);
}}
        
    
    
     

 













int main(){
     int n,r,e;
    cout<<"enter a number"<<endl;
    cin>>n;
     r=num(1,n);
    cout<<r<<endl;
return 0;
}


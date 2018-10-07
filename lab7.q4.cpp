#include<iostream>
using namespace std;

//function declaration and recursion approach
int sum(int a){
      if(a!=0){
          
      return a+sum(a-1);
          }}

//asking to user for a number
int main(){
     int n,r;
   cout<<"enter a no."<<endl;
   cin>>n;
  r= sum(n);
   cout<<"sum of no.s between 0 and n:"<<r<<endl;
  return 0;
}


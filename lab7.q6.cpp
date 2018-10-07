//library
#include<iostream>
using namespace std;

//function declaration and recursion approach
int sumdigit(int m){
     if (m!=0){
       
         return ((m%10)+ sumdigit(m/10));
               }
       else{
          return 0;
               }}
     
       
 //asking to user for a number to sum all digits 
int main(){
  int n,r;
  cout<<"enter a no."<<endl;
  cin>>n;

  r=sumdigit(n);

  cout<<"sum of all digits of no.:"<<r<<endl;
return 0;
   }


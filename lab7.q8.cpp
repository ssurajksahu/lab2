#include<iostream>
using namespace std;

//function declaration and recursion approach
int fact(int a){
    if(a==0){
      return 1;
        }
     else if(a>0){
       return a*fact(a-1);
        }}


//asking to user for a number to claculate factorial
int main(){
    int n,y;
   cout<<"enter a no."<<endl;
   cin>>n;

 y=fact(n);
   cout<<"factorial of given no. is:"<<y<<endl;
return 0;
}
 

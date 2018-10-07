//library
#include<iostream>
using namespace std;

//function declaration and recursion approach
int oddfun(int a, int b){
       if(a<b){
           a++;
          if(a%2==0){
             cout<<"even no.s are:"<endl;
             cout<<a<<endl;
           }
              
  return oddfun(a,b);
           }}

//asking to user to enter a nuumber
int main(){
  int m,n;
 
    cout<<"enter a no."<<endl;
    cin>>m>>n;

     oddfun(m,n);
    
return 0;
}

      

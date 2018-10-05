#include<iostream>
using namespace std;
 
int function(int base,int power){
   if(power>0){
      return base*function(base,power-1);;
         }
     else 
      return 1;
        }




int main(){
    int m, n,result,base,power;
      cout<<" enter your base and power"<<endl;
      cin>>m>>n;
    result=function(m,n);

     cout<<"result="<<result<<endl;
  return 0;
}   
     

#include<iostream>
using namespace std;
  
  /* programme with two functions that takes two int parameters, finds  maximum and minimum and returns them */
     
   int max(int a, int b){
     return (a>b)? a:b;
          }

   int min(int a,int b){
      return (a>b)? b:a;
          }

    
      
/* ask the user for two no. and then calls the functions with numbers as argument and tell the user the maximum and minimum*/ 





      int main(){
          int x,y,p,q;
        cout<<"enter two no.s"<<endl;
        cin>>x>>y;
       p= max(x,y);   //call for maximum
       q= min(x,y);    //call for minimum
        cout<<"max no. is"<<p<<endl;
         cout<<"min no. is"<<q;
  return 0;
}
        
        
         

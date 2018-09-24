#include <iostream>
using namespace std;
        //write a funcion that has two parameters and a reference.
    int operations(int a, int b, int &c){
       int s,p,q;
        if (c==s){
        int sum=a+b;
      return sum;
             } 

        if(c==p){                   
            if(a>b){
         return a;
          }}

         if(c==q){
            if(a<b){
          return b;
           }}

}
 


    // driver function

int main(){
   int x,y,operation; 
        cout<<"enter two no.s and what operation do you like? "<<endl;
        cin>>x>>y;


          
        cout<<" for addition (s) or maximum (p) or minimum(q)"<<endl;
        cin>>operation;
       
      
      
            cout<<"the value of your operation"<<operations(x,y,operation)<<endl;
          
return 0;
}

       
                

               
      
        
     

               
      
                                

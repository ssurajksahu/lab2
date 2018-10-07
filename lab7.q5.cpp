//library
#include<iostream>
using namespace std;

//function declaration and recursion approach
int sumoddeven(int a, int b){
      if(a>b){
       return 0;
         }
      else 
       return a+sumoddeven(a+2,b);
         }
       
//asking to user for a number
int main(){
    int m,n,q;
    cout<<"enter a no.."<<endl;
    cin>>m>>n; 

      q=sumoddeven(m,n);
      

     cout<<"sum of all odd or even no.s between given range:"<<q<<endl ;
        
 return 0;
}

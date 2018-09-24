#include<iostream>
using namespace std;

/*Write a programme with a void function that adds two no. and takes a third,pass by reference parameter, then puts the sum in that */


void func1(int &c,int a, int b){
  c= a+b;
   
}


/*the programme should ask the user for two numbers, then call the function with the numbers as reference, and tell the user the sum
*/

int main(){
     int x,y,c,m;
     cout<<"enter two numbers"<<endl;
     cin>>x>>y;

     func1(m,x,y); //z=f(x)
     cout<<x+y<<endl;
    return 0;

     
     
}

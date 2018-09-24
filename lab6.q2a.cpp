#include<iostream>
using namespace std;

/*Write a programme with a function that takes two int parameters, adds them together, then returns the sum
*/

int func1(int a, int b){
   int sum=a+b;
   return sum;
}


/*the programme should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum
*/

int main(){
     int a,b,y;
     cout<<"enter two numbers"<<endl;
     cin>>a>>b;

     y=func1(a,b); //y=f(x)
     cout<<y<<endl;


}

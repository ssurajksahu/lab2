#include<iostream>
using namespace std;

/* write a user defined function toUpper() that returns  the uppercase of the inputChar received. Use call by value.*/
   
      char toUpper(char x){
       
           char m=char(int(x)-32);
           return m;
     }

  /*write a user deefined function toLower() that returns the lowwercase of the inputChar received. Use call by value.*/

       char toLower(char z){
            char  n=char(int (z)+32);
             return n;
      }

 /* write a main programme that calls the above function based on the input of user. If the user enters lower case character, it should direct it and call toUpper() and display the upper case.*/
      

int main(){ 
   
        char n;
        cout<<"enter an alphabate"<<endl;
        cin>>n;
     
              if(int(n)>=65 && int(n)<=90){
                 char a=toLower(n);
             cout<<"the lower case of alphabate-"<<a<<endl;
    }


        else if (int(n)>=97 && int(n)<=122){
                 char b= toUpper(n);
              cout<<"the upper case of alphabate-"<<b<<endl;
           }
return 0;
}       
      

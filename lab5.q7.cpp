#include<iostream>                                      //directive for preprocessor
using namespace std;                                  //declaration for using c++ library
int main(){                                               //starting point of execution
   char ch;                                                 //dceclaration of variables
       cout<<"enter a character"<<endl;
       cin>>ch;                                       //storing of data from particular steam 
   if ((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z')){ 
                                                  //conditional structure with logical operator
     cout<<"entered character is an alphabate";       //statement
                           }
      else {
           cout<<"it ia not a alphabate"<<endl;
             }
return 0;                                             //ending of execution
}
    
    

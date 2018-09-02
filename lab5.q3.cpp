#include<iostream>                           //directive for preprocessor
using namespace std;                           //declaration for using c++ library
int main(){                                    //starting point of execution
     int n;                                    //dceclaration of variables
                                      
cout<<"enter a number"<<endl;                // statement 
  cin>>n;                                     //storing of data from particular steam 

 if(n>0){                                         //conditional structure
      cout<<"the no. is positive"<<endl;
         }
    else if (n==0){                                    //conditional 
     cout<<"the no is zero"<<endl;
          }
    else {
        cout<<"the no. is negative"<<endl;
         }
   return 0;                                          // ending of execution
}

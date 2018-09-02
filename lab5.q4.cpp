#include<iostream>                                  //directive for preprocessor
using namespace std;                                    //declaration for using c++ library
int main(){                                            //starting point of execution
  int n;                                               //dceclaration of variables
   cout<<"enter a number"<<endl;
   cin>>n;                                             //storing of data from particular steam 
   if(n%5==0 && n%11==0){                                 //conditional structure with operator
     cout<<"no. is divisible by 5 and 11";               // statement 
                       }
    else if(n%5==0){
       cout<<"no. is divisible by 5 and not by 11";
                  }
    else if (n%11==0){                                       //conditional 
        cout<<"no. is divisible by 11 but not by 5";
                    }
      else{
          cout<<"no. is neither divisible by 5 nor by 11";
           }       
  return 0;                                                //ending of execution
}

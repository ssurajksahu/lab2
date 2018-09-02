#include<iostream>                      //directive for preprocessor
using namespace std;                     //declaration for using c++ library
int main(){                               //starting point of execution
    int a,b,c;                            //dceclaration of variables
  cout<<"enter your three numbers"<<endl;   // statement
  cin>>a;                                    
  cin>>b;                                   //storing of data from particular steam 
  cin>>c;
  if(a>=b && a>=c){                        //conditional structure
     cout<<"larger number is:"<<a<<endl;
                  }
    else if(b>=c && b>=c){                  //conditional 
     cout<<"larger number is:"<<b<<endl;
                        }
   else {cout<<"larger no. is:"<<c<<endl;
}                                        
    return 0;                               // ending of execution
}
    

#include<iostream>                                       //directive for preprocessor 
using namespace std;                                    //declaration for using c++ library
int main(){                                              //starting point of execution
    int i,p,n,sum;                                         //dceclaration of variables
  
    cout<<"enter any number"<<endl;
     cin>>n;                                              //storing of data from particular steam

     while(n!=0){                                       //use of while loop with compound operator
       p=n%10;
       sum+=p;                                           //use of relational operator
       n=n/10;
              }

       cout<<"sum of digits is:"<<sum;                    //statement
return 0;                                                  //ending of execution
}
        

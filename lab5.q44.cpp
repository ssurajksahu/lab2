#include<iostream>                           //directive for preprocessor
using namespace std;                            //declaration for using c++ library
int main(){                                      //starting point of execution
   int n,c;                                      //declaring variable
   int f=1;                                      //assignment to variable

   cout<<"enter number"<<endl;                   //statement
   cin>>n;                                       //storing of data from particular steam

    for(c=1;c<=n;c++){             //using of for loop with relational operator and increment
     f=f*c;
              }
                 
    
     cout<<"the factorial of given no.:"<<f<<endl;
                
return 0;                                        //ending of execution
}
}

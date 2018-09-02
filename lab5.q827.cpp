#include<iostream>                             //directive for preprocessor
using namespace std;                             //declaration for using c++ library
int main(){                                    //starting point of execution
    int i;
    int sum;                                    //dceclaration of variables
    int n;

  cout<<"enter no. up to which you have to sum"<<endl;      //statement
  cin>>n;                                                   //storing of data from particular steam 

  for(i=1;i<=n;++i)                                         // use of for loop    with relational operator                      
    {sum+=i; 
        }
     
      cout<<"sum of all natural no. up to given no.:"<<sum<<endl;
  
            
 return 0;                                                   //ending of execution
} 
        

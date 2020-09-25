#include<bits/stdc++.h>
using namespace std;

main()
{ int N=10;
  int A[10]={1,2,3,4,5,6,7,8};
  int x;
  
  /* adding element in sorted array*/ 
  
  cout<<"Enter the integer : ";
  cin>>x;
  
  int i=7; // length
  
  if(i==N)
  cout<<"array full";
  else
  {  
         while(A[i]>x && i>=0)
         { A[i+1]=A[i];
           i--;
          }
  
          A[i+1]=x;
       
  }

for(i=0;i<9;i++)
cout<<A[i]<<" ";

}


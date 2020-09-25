#include<iostream>
using namespace std;

int N;
int F[50];
int fib(int n)
{ if(n<=1)
  { F[n]=n;
    return n;
  }
  else
  { if(F[n-1]==-1)
    F[n-1]=fib(n-1);
    if(F[n-2]==-1)
    F[n-2]=fib(n-2);
    
    return F[n-1]+F[n-2];
    
  }
}

main()
{ cout<<"Fibonacci series input n : ";
  cin>>N;
  
  for(int i=0;i<N;i++)
  F[i]=-1;
  
  cout<<endl<<"Fibonacci series result : "<<fib(N);
}


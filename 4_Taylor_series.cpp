#include<iostream>
using namespace std;

double e(int x,int n)
{ static double p=1,f=1;
  if(n==0)
  return 1;
  else
  { double r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
  }
}

main()
{ int x,n;
  cout<<"Taylor series(x,n) : ";
  cin>>x>>n;
  
  cout<<endl<<"Taylor series expansion result : "<<e(x,n);
}


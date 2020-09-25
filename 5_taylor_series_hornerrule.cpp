#include<iostream>
using namespace std;

double e(int x,int n)
{ static double s=1;
  if(n==0)
  return s;
 
  s=1+((x*s)/n);
  return e(x,n-1);
}

main()
{ int x,n;
  cout<<"Taylor series(x,n) : ";
  cin>>x>>n;
  
  cout<<endl<<"Taylor series expansion using horne's rule : "<<e(x,n);
}


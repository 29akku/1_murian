#include<iostream>
using namespace std;

int fun(int m,int n)
{ if(n==0)
  return 1; 
  else
  return m*fun(m,n-1); 
}
main()
{ int m,n;
  cout<<"m^n input m & n respectively : ";
  cin>>m>>n;
  cout<<"m^n : "<<fun(m,n);
}

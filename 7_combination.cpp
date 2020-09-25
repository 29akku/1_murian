#include<iostream>
using namespace std;

int c(int n,int r)
{ if(n==r || r==0)
  return 1;
  else
  { return c(n-1,r)+c(n-1,r-1);
  }
}

main()
{ int n,r;
  cout<<"ncr (input n>>r) : ";
  cin>>n>>r;
  
  cout<<endl<<"result of ncr : "<<c(n,r);
}


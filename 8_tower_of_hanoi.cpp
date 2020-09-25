#include<iostream>
using namespace std;

void TOH(int n,int A=1,int B=2,int C=3)
{ if(n>0)
  { TOH(n-1,A,C,B);
    cout<<"("<<A<<","<<C<<")"<<endl;
    TOH(n-1,B,A,C);
  }  
}

main()
{ int n;
  cout<<"Tower of Hanoi (input n) : ";
  cin>>n;
  
  cout<<endl<<"result : "<<endl;
  TOH(n);
}


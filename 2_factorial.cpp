#include<iostream>
using namespace std;
int fac=1;
void fun(int n)
{ if(n>0)
  { fac*=n;
    fun(n-1);
  }
}

main()
{ int n;
  cout<<"factorial of N "<<endl<<"(input N): ";
  cin>>n;
  fun(n);
  cout<<endl<<"Factorial is : "<<fac;
}


/*
#include<iostream>
using namespace std;

int fun(int n)
{ if(n>1)
  { return n*fun(n-1);
  }
}

main()
{ int n;
  cout<<"factorial of N "<<endl<<"(input N): ";
  cin>>n;
  
  cout<<endl<<"Factorial is : "<<fun(n);
}
*/

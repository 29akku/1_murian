#include<iostream>
using namespace std;
int sum=0;
void fun(int n)
{ if(n>0)
  { sum+=n;
    fun(n-1);
  }
}

main()
{ int n;
  cout<<"sum of first N digit natural number"<<endl<<"(input N): ";
  cin>>n;
  fun(n);
  cout<<endl<<"sum is : "<<sum;
}

/*
#include<iostream>
using namespace std;
int fun(int n)
{ if(n>0)
  { return n+fun(n-1);
  }
}

main()
{ int n;
  cout<<"sum of first N digit natural number"<<endl<<"(input N): ";
  cin>>n;
  cout<<endl<<"sum is : "<<fun(n);;
}
*/

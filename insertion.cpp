#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  
  for(int i=0;i<n;i++)
  cin>>arr[i];

/* 
   -> worst case: O(N^2)
   -> best case: O(N)
   -> it is very efficient for small array,thats why it used in hybrid algorithm like timesort and introsort 
   -> inplace 
   -> stable
*/
  
  

  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
  

 return 0;
}


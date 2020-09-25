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
  -> does less memory write compared to merge sort,quick sort,insertion sort etc but cycle sort is optimal in terms of memory writes
  -> selection sort is basic idea for heap sort
  -> inplace 
  -> not stable
*/

  for(int i=0;i<n;i++)
  {
  	int min=i;
  	for(int j=i+1;j<n;j++)
  	{
  		if(arr[j]<arr[min])
  		min=j;
    }
    swap(arr[min],arr[i]);
  }

  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
  

  return 0;
}


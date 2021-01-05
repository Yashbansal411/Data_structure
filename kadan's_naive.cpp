#include<iostream>
using namespace std;
int max_subarray_sum(int*,int);
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	cout<<max_subarray_sum(arr,n);
	return 0;   
}
int max(int a , int b)
{
	if(a>=b)
	  return a;
	else
	  return b;  
}
int max_subarray_sum(int arr[], int n)
{
	int res = arr[0];
	for(int i=0;i<n;i++)
	{
		int curr = 0;
		for(int j=i;j<n;j++)
		{
			curr += arr[j];
			res = max(curr,res);
		}
	}
	return res;
}

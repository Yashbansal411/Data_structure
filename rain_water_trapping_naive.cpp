#include<iostream>
using namespace std;
int min(int a, int b)
{
	if(a>=b)
	  return b;
	else 
	  return a;  
}
int max(int a, int b)
{
	if(a>=b)
	  return a;
	else 
	  return b;  
}
int getWater(int arr[], int n)
{
	if(n<=2)
	return 0;
	int res = 0;
	for(int i=1; i<n-1; i++) // range is smaller because on outer walls water stored is always 0.
	{
		int lmax = arr[i];
		for(int j=0;j<i;j++)
		{
		    lmax=max(lmax,arr[j]);
		}
		int rmax = arr[i];
		for(int j=i;j<n;j++)
		{
			rmax = max(rmax,arr[j]);
		}
		res = res + (min(lmax,rmax)-arr[i]);
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<getWater(arr,n);
	
}


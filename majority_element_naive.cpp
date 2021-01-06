#include<iostream>
using namespace std;
int majority(int*,int);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		   cin>>arr[i];
		cout<<majority(arr,n);   
	}
	return 0;
}
int max(int a, int b)
{
	if(a>=b)
	  return a;
	return b;  
}
int majority(int arr[], int n)
{
	int res = -1;
	for(int i=0;i<n;i++)
	{
		int curr = 1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]==arr[i])
			{
				curr++;
				res = max(curr,res);
			}
		} 
	}
	return res;
}

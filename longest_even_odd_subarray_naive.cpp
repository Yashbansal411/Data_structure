#include<iostream>
using namespace std;

int longest_even_odd_subarray(int*, int);
int max(int, int);
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
		cout<<longest_even_odd_subarray(arr,n);   
	}
	return 0;
}
int longest_even_odd_subarray(int arr[], int n)
{
	int res = 1;
	for(int i=0;i<n;i++)
	{
		int curr = 1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j-1]%2==0 && arr[j]%2==1 || arr[j-1]%2==1 && arr[j]%2==0)
			{
				curr++;
				res = max(res,curr);
			}
			else
			   break;
		}
	}
	return res;
}
int max(int a, int b)
{
	if(a>=b)
	  return a;
	return b;  
}

#include<iostream>
using namespace std;
int consecutive_one(int*,int);
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	cout<<consecutive_one(arr,n);
	return 0;   
}
int res(int a, int b)
{
	if(a>=b)
	  return a;
	else
	  return b;  
}
int consecutive_one(int arr[], int n){
	int res = 0, curr =0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		   curr = 0;
		else
		{
			curr++;
			res = max(res,curr);
		}   
	}
	return res;
}

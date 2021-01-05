#include<iostream>
using namespace std;
int max(int a, int b)
{
	if(a>=b)
	  return a;
	else
	  return b;  
}
int consecutive_one(int arr[], int n){
	int res = 0;
	for(int i=0;i<n;i++)
	{
		int curr = 0;
		for(int j=i;j<n;j++)
		{
			if(arr[j]==0)
			   break;
			else
			   curr++;   
		}
		res = max(res,curr);
	}
	return res;
}
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
 

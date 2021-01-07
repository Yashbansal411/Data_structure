#include<iostream>
using namespace std;
// find majority element==whose occurrence is greater than n/2 in O(n).
// if no such element then return -1
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
int majority(int arr[], int n){
	int res = arr[0], count = 1;
	for(int i=1;i<n;i++){
		if(arr[i]==res)
		   count++;
		else{
			count--;
			if(count==0){
			  res = arr[i];
			  count++;
		}
		}   
	}
	count = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==res)
		  count++;
	}
	if(count>(n/2))
	  return res;
	return -1;  
} 

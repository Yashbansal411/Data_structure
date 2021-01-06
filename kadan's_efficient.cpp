#include<iostream>
using namespace std;

int kadans(int*, int);
int max(int,int);
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	cout<<kadans(arr, n);
	return 10;   
}
int kadans(int arr[], int n)
{
	int max_ending=arr[0], curr_max=arr[0];
	for(int i=0;i<n;i++)
	{
		max_ending = max(max_ending+arr[i], arr[i]);
		curr_max = max(curr_max, max_ending);
	}
	return curr_max;
}
int max(int a, int b)
{
	if(a>=b)
	  return a;
	else
	  return b;  
}

#include<iostream>
using namespace std;

int* prefix_sum(int*,int);
int query_sum(int*, int, int, int);

int main(){
	int t;
	cin>>t;
	while(t--)
	{   cout<<"size of array"<<"\n";
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int l,r;
		cin>>l>>r;
		int* sum;
		sum=prefix_sum(arr,n);
		for(int i=0;i<n;i++)
		{
			cout<<sum[i]<<" ";
		}
		cout<<query_sum(sum,n,l,r);
	}
	return 0;
}
int* prefix_sum(int arr[], int n)
{
	 int* sum= new int[n];
	sum[0] = arr[0];
	for(int i=1;i<n;i++)
	   sum[i] = sum[i-1] + arr[i];
	return sum;   
}
int query_sum(int sum[], int n, int l, int r){
	if(l!=0)
	{
		return sum[r]-sum[l-1];
	}
	else
	{
		return sum[r];
	}
}  

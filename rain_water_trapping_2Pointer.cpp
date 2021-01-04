#include<iostream>
using namespace std;

int getWater(int arr[], int n)
{
	int res=0, maxLeft=0, maxRight=0, left=0, right=n-1;
	while(right>=left)
	{
		if(arr[right]>=arr[left])
		{
			if(arr[left]>=maxLeft)
			   maxLeft = arr[left];
			else
			   res+= maxLeft - arr[left];
			left++;      
		}
		else{
			if(arr[right]>=maxRight)
			  maxRight = arr[right];
			else
			  res += maxRight - arr[right];
			right--;    
		}
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
	return 0;
}

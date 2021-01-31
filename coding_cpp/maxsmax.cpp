#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max=0;
	int smax=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]>smax && smax<max && arr[i]<max)
		{
			smax=arr[i];
		}
	}
	cout<<max<<endl<<smax;
}

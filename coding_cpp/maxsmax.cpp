#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int max = 0;
	int smax = -1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]>smax && arr[i]<max)
		{
			smax = arr[i];
		}
	}
	cout<<max<<" "<<smax<<endl;
}


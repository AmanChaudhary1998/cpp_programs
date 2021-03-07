#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int count=0;
	int val=0,val2=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				val = arr[j]-arr[i];
				val2 = arr[k]-arr[j];
				if((i<j) && (j<k) && (val==val2) && (val2==d))
				{
					count = count+1;	
				}
			}
		}
	}
	cout<<count;
}

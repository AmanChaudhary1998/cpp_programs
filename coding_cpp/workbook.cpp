#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int page = 1;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		int t=1;
		int j=1;
		while(j<=arr[i])
		{
			if(j<=k*t)
			{
				if(j==page)
				{
					count = count+1;
				}
			}
			else
			{
				page=page+1;
				t=t+1;
				if(j==page)
				{
					count=count+1;
				}
			}
			j++;
		}
		page=page+1;
	}
	cout<<count;
}

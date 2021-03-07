#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(n==2)
	{
		if(arr[0]%2==0 && arr[1]%2==0)
		{
			
		}
		else if(arr[0]%2!=0 && arr[1]%2!=0)
		{
			arr[0]=arr[0]+1;
			arr[1]=arr[1]+1;
			count=count+2;
			cout<<count;
		}
		else
		{
			cout<<"NO";
		}
	}
	else
	{
		if(arr[0]%2!=0)
		{
			arr[0]=arr[0]+1;
			arr[1]=arr[1]+1;
			count=count+2;
		}
		
			for(int i=1;i<n-1;i++)
			{
				if(arr[i]%2!=0)
				{
					arr[i]=arr[i]+1;
					arr[i+1]=arr[i+1]+1;
					count=count+2;
				}
				else
				{
					continue;
				}
			}
			if(arr[n-1]%2!=0)
			{
				if(arr[n-2]%2==0)
				{
					cout<<"NO";
				}
				else
				{
					arr[n-2]=arr[n-2]+1;
					arr[n-1]=arr[n-1]+1;
					count=count+2;
				}
			}
			else
			{
				cout<<count;
			}
	}
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,temp;
	int count= 0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]==j+1)
			{
				continue;
			}
			else if(arr[i]>arr[j] || arr[i]==j+1 || arr[j]==i)
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					count++;
				}
			
		}
		cout<<arr[i]<<endl;
	}
	cout<<"count "<<count<<endl;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,k;
	cin>>n;
	cin>>m;
	int arr1[n];
	int arr[m];
	for(int i=0;i<m;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<m;i++)
	{
		k=0; int val=0;
		for(int j=0;j<n;j++)
		{
			if(i==0)
			{
				if(arr[i]>j)
				{
					val=arr[i]-j;
					arr1[k] = val;
					//cout<<arr1[k]<<endl;
					k++;
				}
				else
				{
					val=j-arr[i];
					arr1[k]=val;
					//cout<<arr1[k]<<endl;
					k++;
				}
			}
			else
			{
				if(arr[i]>j)
				{
					val=arr[i]-j;
					if(arr1[k]>val)
					{
						arr1[k] = val;
						//cout<<arr1[k]<<endl;
						k++;	
					}
					else
					{
						//cout<<arr1[k]<<endl;
						k++;
						continue;
					}
				}
				else
				{
					val=j-arr[i];
					if(arr1[k]>val)
					{
						arr1[k] = val;
						//cout<<arr1[k]<<endl;
						k++;	
					}
					else
					{
						//cout<<arr1[k]<<endl;
						k++;
						continue;
					}
				}
			}
		}
	}
	int max=0;
	for(int i=0;i<k;i++)
	{
		if(max<arr1[i])
		{
			max=arr1[i];
		}
		else
		{
			continue;
		}
	}
	cout<<max;
}

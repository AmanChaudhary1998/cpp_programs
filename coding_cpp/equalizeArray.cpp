#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int k=0;
	int arr1[k];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		arr1[k];
		int count=1;
		if(arr[i]!=0)
		{
		for(int j=i+1;j<n;j++)
			{
				if(arr[i]==arr[j])
				{
					count=count+1;
					arr[j]=0;
				}
			}
			arr1[k]=count;
			//cout<<arr1[k]<<endl;
			k++;	
		}
		else{
			continue;
		}
	}
	int temp=0;
	for(int i=0;i<k;i++)
	{
		//cout<<arr1[i]<<endl;
		if(temp<arr1[i])
		{
			temp=arr1[i];
		}	
	}
	//cout<<temp;
	int result= n-temp;
	cout<<result;
}

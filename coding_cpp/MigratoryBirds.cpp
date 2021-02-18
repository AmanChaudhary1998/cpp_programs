#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n;
	int arr[n];
	int max = 0;
	int value=0;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	int arr1[max];
	for(int i=1;i<=n;i++)
	{
		if(arr[i]!=0)
		{
		int count = 1;
		k = arr[i];
		for(int j=i+1;j<=n;j++)
		{
			if(arr[i]==arr[j] && arr[j]!=0)
			{
				count = count+ 1;
				arr[j] = 0;
			}
		}
		arr1[k] = count;
		if(value<arr1[k])
		{
			value=arr1[k];
		}
		cout<<"k = "<<k<<"="<<arr1[k]<<endl;
		}
		else{
			continue;
		}
	}
	cout<<"value "<<value;

}

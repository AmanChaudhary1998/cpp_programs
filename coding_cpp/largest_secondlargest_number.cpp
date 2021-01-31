#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int max=0;
	int max1=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	max=arr[0];
	max1=arr[1];
	for(int i=2;i<n;i++)
	{
		if(arr[i]>max)
		{
			max1=max;
			max=arr[i];
		}
	}
	cout<<"max number is "<<max<<endl<<"second max element is "<<max1;
}

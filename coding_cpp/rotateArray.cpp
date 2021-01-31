#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,d;
	cin>>n;
	cin>>d;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int temp;
	while(d)
	{
		temp = arr[0];
		for(int i=1;i<n;i++)
		{
			arr[i-1] = arr[i];
		}
		arr[n-1] = temp;
		d--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}

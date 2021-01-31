#include<bits/stdc++.h>

using namespace std;

int sumDigPro(int a[],int n)
{
	int sum = 0; int value; int result = 1;
	
	for(int i=0;i<n;i++)
	{
		sum = sum+ a[i];
	}
	while(sum!=0)
	{
		value = sum%10;
		result = result*value;
		sum=sum/10;
		if(sum==0 && result>10)
		{
			sum=result;
			result=1;
		}
	}
	return result;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<sumDigPro(arr,n);
}


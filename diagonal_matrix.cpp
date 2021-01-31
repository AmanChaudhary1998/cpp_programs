#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	int sum=0;
	int sum1=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
		
	}
	for(int i=0;i<n;i++){
		int d1=0;int d2=0;
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				int d1= arr[i][j];
				//cout<<"d1 valuesare :"<<endl;
				//cout<<d1<<endl;
				sum=sum+d1;
			}
			if(i+j==(n-1))
			{
				int d2=arr[i][j];
				//cout<<"d2 valuesare :"<<endl;
				//cout<<d2<<endl;
				sum1=sum1+d2;
			}
		}
	}
	if(sum-sum1<0)
		{
			cout<<sum1-sum;
		}
		else
		{
			cout<<sum-sum1;
		}
}

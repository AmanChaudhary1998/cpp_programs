#include<bits/stdc++.h>

using namespace std;

int main()
{
	int sum, value;
	cout<<"enter the sum to be required "<<endl;
	cin>>sum;
	cout<<"enter the values to be entered"<<endl;
	cin>>value;
	int arr[value];
	for(int i=0;i<value;i++)
	{
		cin>>arr[i];
	}
	int t[value][sum];
	subset(sum,arr)
}

int subset(int n, int w[])
{
	for(int i=0;i<n+1;;i++)
	{
		for(int j=0;j<w+1;j++)
		{
			if(i==0)
			{
				t[i][j] = false;
			}
			if(j==0)
			{
				t[i][j]  = true;
			}
		}
	}
	
	if()
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int m;
	cin>>n;
	cin>>m;
	int a[n][m];
	int b[n][m];
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>=b[i][j])
			{
				sum = sum + a[i][j];	
			}
			else{
				sum = sum + b[i][j];
			}
		}
	}
	
	cout<<sum;
}

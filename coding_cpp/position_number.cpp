#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int k=0;
	int m = 10*n;
	for(int i=1;i<m;i++)
	{
		int arr[k];
		if(i%2==0 || i%3==0 || i%5==0)
		{
			arr[k]=i;
			if(k==n)
			{
				cout<<arr[k];
				break;
			}
			k++;
		}
	}
}

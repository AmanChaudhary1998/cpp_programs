#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int x=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				x++;
			}
		}
		if(x==2)
			{
				cout<<i<<endl;
			}
	}
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int k=0;
	for(int i=2;i<=n+1;i++)
	{
		for(int j=0;j<(i+k);j++)
		{
			cout<<(i+k);
		}
		cout<<endl;
		if(k%2==0){
			k=(k+i)/2;
		}
		else
		{
			k=(k)/2+i;
		}
	}
}

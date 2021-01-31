#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n1,n2;
	cin>>n1;
	cin>>n2;
	int g;
	int k=1;
	if(n1>n2){
		g=n1;
	}
	else{
		g=n2;
	}
	for(int i=1;i<=g;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			k=i;
		}
	}
	cout<<k;
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,j,m,p;
	cin>>n;
	cin>>k;
	cin>>j;
	cin>>m;
	cin>>p;
	int a,b;
	int value = 0;
	if(m>0)
	{
		a= m/k;
		if(m%k<=k && m%k!=0)
		{
			m=0;
			a=a+1;
		}
	}
	if(p>0)
	{
		 b = p/j;
		 if(p%j<=j && p%j!=0)
		{
			p=0;
			b=b+1;
		}
	}
	value = a+b;
	cout<<value;
}

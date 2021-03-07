#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int p,q;
	long long int flag=0;
	cin>>p>>q;
	for(long int i=p;i<=q;i++)
	{
		long long int sum;
		long long int k=i;
		long long int a=0;
		while(k>0)
		{
			k=k/10;
			++a;
		}
		long long int sq=(i*i);
		long long int val= pow(10,a);
		sum= sq%val + sq/val;
		if(sum==i)
		{
			cout<<i<<endl;
			flag++;
		}
	}
	if(flag==0)
	{
		cout<<"INVALID RANGE"<<endl;
	}
}

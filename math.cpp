#include<iostream>
using namespace std;

int main()
{
	int t,n,a,b,c,count=0;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		cin>>n;
		cin>>a;
		cin>>b;
		cin>>c;
		for(int i=1;i<=n;i++)
		{
			if(i%a==0||i%b==0||i%c==0)
			{
				count++;
			}
		}
		cout<<count;
	}
}

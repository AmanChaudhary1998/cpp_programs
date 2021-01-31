#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l,a[100];
	cout<<"enter the limit"<<endl;
	cin>>n;
	i=20;j=30;
	for(int k=0;k<n;k++)
	{
		if(k==0)
		{
			cout<<i<<endl;
		}
		else if(k==1)
		{
			cout<<j<<endl;
		}
		else if(k%2==0)
		{
			i=i*2;
			cout<<i<<endl;
		}
		else
		{
			j=j*3;
			cout<<j<<endl;
		}
	}
}

#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,n;
	a=0;b=1;
	cout<<"enter the limit"<<endl;
	cin>>n;
	if(n==1)
	{
		cout<<a;
	}
	else if(n==2)
	{
		cout<<a<<endl<<b;
	}
	else if(n>2)
	{
		cout<<a<<endl<<b<<endl;
		for(int i=2;i<=n;i++)
		{
		c=a+b;
		a=b;
		b=c;
	  	cout<<c<<endl;
	    }
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],c[100],n;
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the elements"<<i<<endl;
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<"enter the element in another array"<<i<<endl;
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		cout<<c[i]<<endl;
	}
}

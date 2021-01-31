#include<iostream>
using namespace std;
int main()
{
	int t,k,n,a[100],j;
	cout<<"enter the number of test cases"<<endl;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cout<<"enter the number of elements"<<endl;
		cin>>n;
		cout<<"enter the range value"<<endl;
		cin>>k;
		int count=0;
		for(int j=0;j<n;j++)
		{
			cout<<"elements in array"<<j<<endl;
			cin>>a[j];
		}
		while(a[j]<k)
		{
			for(int j=0;j<n;j++)
			{
				a[j]=a[j]+1;
			}
			count++;
		}
		cout<<count<<endl;
	}
}

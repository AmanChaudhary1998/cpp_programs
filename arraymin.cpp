#include<iostream>
using namespace std;
int main()
{
	int t,n,a[100],i,temp;
	cout<<"enter the number of testcases"<<endl;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		cout<<"enter the number of elements"<<endl;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int min = a[0];
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>=a[j])
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=a[j];
				}
			}
		}
		min=a[i];
		cout<<min<<endl;
	}
}

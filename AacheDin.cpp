#include<iostream>
using namespace std;
int main()
{
	int t,n,a[100],count=0;
	cout<<"enter the test cases"<<endl;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		cout<<"enter number of values to be inserted"<<endl;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"enter the element"<<i<<endl;
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i]==a[j])
				{
					count++;
					break;
				}
				
			}
			if(count==1)
			{
				cout<<a[i];
			}
			
		}
	}
}

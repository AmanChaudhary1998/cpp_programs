#include<iostream>
using namespace std;
int main()
{
	int n,a[100],temp,sum=0,sum1=0,i,j=0;
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	for(int i=0;i<n;i++)
	{
		temp=a[i];
		if(sum1<=sum)
		{
			while(j<n)
			{
				sum1=sum1+a[j];
				j++;
			}
		}
		else
		{
		cout<<temp<<endl;
		break;
	    }
	}
}

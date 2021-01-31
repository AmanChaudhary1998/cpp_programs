#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n1,n2,temp;
	cin>>n1;
	cin>>n2;
	if(n1>n2)
	{
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	int min,max,sum = 0;
	int chg;
	min = n1; max = n2;
	if(n1<0)
	{
		chg = -n1;
		n1 = chg;
	}
	for(int i=2;i<n1;i++)
	{
		if(n1%i==0)
		{
			n1 = n1+1;
			min=n1;
			if(n1>n2)
			{
				break;
			}
		}
	}
//	cout<<"min value"<<min<<endl;
	for(int i=2;i<n2;i++)
	{
		if(n2%i==0)
		{
			n2 = n2-1;
			max=n2;
		}
	}
//	cout<<"max value"<<max<<endl;
	sum = min+max;
	if(sum<0)
	{
		sum = -sum;
	}
	cout<<sum;
}

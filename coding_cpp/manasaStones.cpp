#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a,b,t;
	cin>>t;
	int current=0,max=0,difference=0;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		cin>>a;
		cin>>b;
		int stones = n-1;
		if(b>a)
		{
			current = stones*a;
			max = stones*b;
			difference = b-a;
			while(current<=max)
			{
				cout<<current<<" ";
				current = current+difference;
			}
		}
		if(b==a)
		{
			current = stones*a;
			cout<<current;
		}
		else
		{
			current = stones*b;
			max = stones*a;
			difference = a-b;
			while(current<=max)
			{
				cout<<current<<" ";
				current = current+difference;
			}
		}
		cout<<endl;
	}
}

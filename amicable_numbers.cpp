#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n1,n2;
	cin>>n1;
	cin>>n2;
	int sum=0;
	int sum1=0;
	for(int i=1;i<n1;i++)
	{
		if(n1%i==0){
			sum=sum+i;
		}
	}
	for(int j=1;j<n2;j++)
	{
		if(n2%j==0)
		{
			sum1=sum1+j;
		}
	}
	if(sum==n2 && sum1==n1)
	{
		cout<<"The numbers are Amicable";
	}
	else{
		cout<<"The numbers are not Amicable";
	}
}

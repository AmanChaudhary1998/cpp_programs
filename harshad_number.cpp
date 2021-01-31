#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int temp=n;
	int sum=0;
	while(temp!=0)
	{
		int r=temp%10;
		sum=sum+r;
		temp=temp/10;
	}
	if(n%sum==0)
	{
		cout<<"The given number is Harshad Number";
	}
	else{
		cout<<"The given number is not the harshad number";
	}
}

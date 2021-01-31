#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n1;
	cin>>n1;
	int flag=0;
	int arr[n1];
	for(int i=0;i<n1;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n1-2;i++)
	{
		if((arr[i]+arr[i+1])==arr[i+2])
		{
			flag=1;
		}
		else{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"The series contains additive sequence elements";
	}
	else{
		cout<<"The series does not contains additive sequence elements";
	}
}

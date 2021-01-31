#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,temp;
	cin>>n;
	int arr[100];
	int i=0;
	while(n>0)
	{
		temp=n%2;
		arr[i]= temp;
		cout<<arr[i];
		n=n/2;
		i++;
	}
	
}

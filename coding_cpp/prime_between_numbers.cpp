#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n1,n2;
	cin>>n1;
	cin>>n2;
	for(int i=n1;i<=n2;i++)
	{
		if(i==2||i==3||i==5||i==7)
		{
			cout<<i<<endl;
		}
		else if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
			cout<<i<<endl;
		}
	}
}

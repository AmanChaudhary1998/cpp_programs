#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b;
		cin>>a;
		//cin>>b;
		int result= ceil(sqrt(a));
		//int result = (floor(sqrt(b))- ceil(sqrt(a))+1);
		cout<<result<<endl;	
	}
	
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,p;
	cin>>n;
	cin>>p;
	int min = (n/2-p/2);
	if(min>p/2)
	{
		min=p/2;
	}
	cout<<min;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	for(int i=1;i<12;i++)
	{
		if(i==6)
		{
			cout<<endl;
		}
		if(i%2!=0 && i>6)
		{
			cout<<i<<" ";;
		}
		if(i%2!=0 && i>2 && i<6)
		{
			cout<<i<<" ";
		}
		if(i%2!=0 && i<2)
		{
			cout<<i<<endl;
		}
	}
}

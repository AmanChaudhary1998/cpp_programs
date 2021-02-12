#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int x=0; int y= 0; int z = 10; int Ycall=0; int Xcall=0;
		for(int i=1;i<=n;i++)
		{
			if(i%2==0)
			{
				if(Ycall%2==0)
				{
					y=y+z;
					z=z+10;
					Ycall=Ycall + 1;
				}
				else
				{
					y=y-z;
					z=z+10;
					Ycall=Ycall + 1;
				}
			}
			else
			{
				if(Xcall%2==0)
				{
					x = x+z;
					z=z+10;
					Xcall= Xcall+1;
				}
				else
				{
					x = x-z;
					z=z+10;
					Xcall=Xcall+1;						
				}
			}
		}
		cout<<x<<" "<<y;
	}
}

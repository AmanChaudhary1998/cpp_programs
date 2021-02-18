#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int b,w;
		cin>>b>>w;
		int bc,wc,z;
		cin>>bc>>wc>>z;
		int bp=(b*bc);
		int wp=(w*wc);
		if(bc>(wc+z))
		{
			int cp=(b*(wc+z));
			int total=(cp+wp);
			cout<<total<<endl;
		}
		else if(wc>(bc+z))
		{
			int cp = (w*(bc+z));
			int total=cp+bp;
			cout<<total<<endl;
		}
		else{
			int total=(bp+wp);
			cout<<total<<endl;
		}
	}
}

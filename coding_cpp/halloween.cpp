#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p,d,m,s;
    cin>>p>>d>>m>>s;
    int sum = 0;
    int count=0;
    while(p>=m && sum<s && p<s)
    {
        sum=sum+p;
        if(sum>s)
        {
        	cout<<count<<endl;
        	break;
		}
		count=count+1;
        p=p-d;
    }
    if(sum==s)
    {
        cout<<count;
    }
    else if(sum<s) 
	{
        sum=sum+m;
        while(sum<=s && p<s)
        {
            sum=sum+m;
            count=count+1;
        }
        cout<<count;
    }
}

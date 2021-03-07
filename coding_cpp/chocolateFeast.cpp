//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//	int t;
//	typedef long long int lli;
//	lli n,m,c;
//	cin>>t;
//	for(int i=0;i<t;i++)
//	{
//		cin>>n;
//		cin>>c;
//		cin>>m;
//		int total=(n/c);
//		int wrapper=total;
//		int access = 0;
//		while(wrapper>0)
//		{
//			if((wrapper+access)>=m)
//			{
//				if(wrapper%m==0)
//				{
//					wrapper=wrapper/m;
//					total=total+wrapper;
//				}
//				else if((access+wrapper)%m==0)
//				{
//					wrapper=(access+wrapper)/m;
//					access=0;
//					total=total+wrapper;
//				}
//				else
//				{
//					access = access + (wrapper%m);
//					if(wrapper>=access)
//					{
//						wrapper = wrapper-access;
//						wrapper = wrapper/m;
//						total= total+wrapper;	
//					}
//					else
//					{
//						wrapper = wrapper+access;
//						access = wrapper%m;
//						wrapper = wrapper/m;
//						total=total+wrapper;
//					}
//				}
//			}
//			else
//			{
//				break;
//			}
//		}
//		cout<<total<<endl;
//	}
//}

// Method - 2

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
     typedef long long int lli;
    lli n,c,m;
    cin>>n>>c>>m;
    int wrapper=0;
    wrapper= n/c;
    lli count=0;
    count= wrapper;
    while(wrapper>=m)
    {
        wrapper=wrapper-m;
        wrapper++;
        count++;
    }
    cout<<count<<endl;   
    }
}



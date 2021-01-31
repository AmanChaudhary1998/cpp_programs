#include<iostream>
using namespace std;

int main()
{
	int t,n,s[100],count=1;
	cout<<"enter the number of test cases"<<endl;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		cout<<"enter the number of cars"<<endl;
		cin>>n;
		for(int i=0;i<n;i++)
		{
		cout<<"enter the max speed"<<endl;
		cin>>s[i];
	    }
	    for(int i=0;i<n-1;i++)
	    {
	    	if(s[i]<s[i+1])
	    	{
	    		break;
			}
			else
			count++;
		}
		cout<<count<<endl;
	}
}

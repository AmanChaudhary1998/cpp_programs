#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int k=(n*(n-1))/2;
	char arr[k];
	char arr1[k];
	char value[k];
	char value1[k];
	int s1[k],s2[k];
	for(int i=0;i<k;i++)
	{
		cin>>arr[i];
		cin>>arr1[i];
		cin>>s1[i];
		cin>>s2[i];
		
	}
	for(int i=0;i<k;i++)
	{
		if(s1[i]>s2[i])
			{
				s1[i]=3;
				value[i]=arr[i];
                cout<<s1[i]<<endl;
                cout<<value[i]<<endl;
			}
		else if(s1[i]==s2[i])
			{
				s1[i]=1;
				s2[i]=1;
           		cout<<s1[i]<<endl;
          		cout<<s2[i]<<endl;
				value[i]=arr1[i];
				value1[i]=arr[i];
				cout<<value1[i]<<endl;
          		cout<<value[i]<<endl;
			}
		else if(s2[i]>s1[i])
			{
				s2[i]=3;
				value[i]=arr1[i];
          		cout<<s2[i]<<endl;
          		cout<<value[i]<<endl;
			}
	}
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	char str[100];
	int i=0,count=1;
	
	cin>>str;
	
	while(str[i]!= '\0'){
		
		if(str[i]!= ' ' && str[i+1]==' ' )
		{
			count++;
		}
		i++;
	}
	cout<<"\n"<<count;
	return 0;
}

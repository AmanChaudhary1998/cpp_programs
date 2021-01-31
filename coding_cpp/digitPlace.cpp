#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n1,n2,n3;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	int k,l,m;
	int res;
	k = n1/1000;
	n1 = n1%1000;
	l = n2/1000;
	n2 = n2%1000;
	m = n3/1000;
	n3 = n3%1000;
	if(k<l && k<m)
	{
		res = k*1000;	
	}
	else if(m<l && m<k)
	{
		res = m*1000;	
	}
	else{
		res = l*1000;	
	}
	k = n1/100;
	n1 = n1%100;
	l = n2/100;
	n2 = n2%100;
	m = n3/100;
	n3 = n3%100;
	if(k>l && k>m)
	{
		res = res + k*100;	
	}
	else if(m> l && m> k)
	{
		res = res + m*100;	
	}
	else{
		res = res + l*100;	
	}
	k = n1/10;
	n1 = n1%10;
	l = n2/10;
	n2 = n2%10;
	m = n3/10;
	n3 = n3%10;
	if(k<l && k<m)
	{
		res = res + k*10;	
	}
	else if(m<l && m<k)
	{
		res = res + m*10;	
	}
	else{
		res = res + l*10;	
	}
	if(k>l && k>m)
	{
		res = res+n1;
		cout<<res;	
	}
	else if(m> l && m> k)
	{
		res=res+n2;
		cout<<res;	
	}
	else{
		res=res+n3;
		cout<<res;
	}
}

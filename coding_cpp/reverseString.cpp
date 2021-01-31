#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s = "ReverseString";
//	int n = s.length();
//	for(int i=n;i>=0;i--)
//	{
//		cout<<s[i];
//	}
	reverse(s.begin(),s.end());
	cout<<s;
}

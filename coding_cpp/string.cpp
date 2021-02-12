#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	string str1;
	cin>>str;
	cin>>str1;
	int n = str.size();
	int n1 = str1.size();
	cout<<n<<" "<<n1<<endl;
	string str2=str+str1;
	cout<<str2<<endl;
	
	char ch;
	ch = str[0];
	str[0]=str1[0];
	str1[0]=ch;
	cout<<str<<" "<<str1<<endl;
}

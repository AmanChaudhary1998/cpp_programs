#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str,alpha,num;
	int no = 0;
	int inc = 0;
	char ch;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(isdigit(str[i]))
		{
			no = str[i];
			no = no+1;
			num.push_back(no);
		}
		else if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z'))
		{
			ch=str[i];
			inc = ch+1;
			ch=inc;
			alpha.push_back(ch);
		}
	}
	cout<<num;
	cout<<alpha;
}

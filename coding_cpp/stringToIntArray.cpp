#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	int temp;
	cin>>str;
	int length = str.length();
	int arr[length];
	int min = 99999;
	for(int i=0;i<length;i++)
	{
		arr[i] = str[i]-'0';
		if(min>arr[i])
		{
			min = arr[i];
		}
	}
	cout<<min<<endl;
	
}

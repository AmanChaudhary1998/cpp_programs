#include<bits/stdc++.h>

using namespace std;

int main()
{
	char str[]={'E','V','A','P','O','R','A','T','E'};
	int n = sizeof(str)/sizeof(str[0]);
	int i=0;
	char c;
	while(i<n)
	{
		cout<<"Enter the Character"<<endl;
		if(str[i]!='/0')
		{
			cin>>c;
			if(c==str[i])
			{
				i++;
			}
			else
			{
				cout<<"You entered wrong alphabet please try again"<<endl;
			}
		}
	}
	cout<<"You got the word EVAPORATE"<<endl;
}

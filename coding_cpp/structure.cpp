#include<bits/stdc++.h>

using namespace std;

struct student {
	int n;
	string str;
	string str1;
	int n1;
};

int main()
{
	int num;
	cin>>num;
	string name;
	cin>>name;
	string surname;
	cin>>surname;
	int roll;
	cin>>roll;
	struct student s1;
	s1.n = num;
	s1.str=name;
	s1.str1=surname;
	s1.n1 = roll;
	cout<<s1.n<<" "<<s1.str<<" "<<s1.str1<<" "<<s1.n1;
}

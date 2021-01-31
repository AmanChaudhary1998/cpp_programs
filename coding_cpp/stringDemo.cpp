#include<bits/stdc++.h>

using namespace std;

int main() 
{
	string s1("Backend");
	string s2("Developer");
	// concat the two strings...
	s1.append(s2);
	cout<<s1<<endl;
	// substr(a,b)
	string s3 = s1.substr(0,5);
	string s4 = s1.substr(5);
	cout<<s3<<endl;
	string s("Iamadeveloper");
	cout<<s<<endl;
	int ind = s.find("v");
	cout<<"the v key word found at index "<<ind<<endl;
	int ind1 = s.find("am");
	cout<<"the am found at index "<<ind1<<endl;
	s.replace(ind,1,"p");
	cout<<s<<endl;
	cout<<"Length of the string "<<s.length()<<endl;
	cout<<"Character at the index 2 is "<<s.at(2)<<endl;
	s.erase(3,3);
	cout<<s<<endl;
	s.clear(); // To clear the string we use clear() method
	cout<<s<<endl;
}

#include<iostream>
using namespace std;
void alter(int);
int main()
{
	int m=5;
	
	cout<<"value of m before"<<m<<endl;
	alter(m);
	cout<<"after calling the function"<<m<<endl;
}
void alter(int r)
{
	r=r*2;
	cout<<"value is"<<r<<endl;
}

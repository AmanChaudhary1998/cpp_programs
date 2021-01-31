#include<iostream>
using namespace std;
void alter(int*);
int main()
{
	int m=5;
	cout<<"value before function"<<m<<endl;
	alter(&m);
	cout<<"after the refrence is being called"<<m<<endl;
}
void alter(int *r)
{
        r=r*2;
	cout<<"value is"<<r<<endl;
}

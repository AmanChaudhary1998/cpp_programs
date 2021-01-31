#include<iostream>
using namespace std;
struct bank
{
	char c[20];
	int accno;
};
int main()
{
   bank bk;
   cout<<"enter the customer name"<<endl;
   cin>>bk.c;
   cout<<"enter the accno "<<endl;
   cin>>bk.accno;
   cout<<"customer name is "<<bk.c<<endl;
   cout<<"account number "<<bk.accno<<endl;
}

#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,r;
	cout<<"wnter the limit"<<endl;
	cin>>i;
		while(i!=0)
		{
			r=i%10;
			sum=(sum*10)+r;
			i=i/10;
		}
		cout<<sum;
	
}

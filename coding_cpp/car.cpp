#include<iostream>

using namespace std;

int main()
{
	int f,b,t,d;
	cin>>f;
	cin>>b;
	cin>>t;
	cin>>d;
	int start=0;
	int km=start;
	int travell=0;
	while(km<d){
		if(km+b==18){
			travell=(travell+b)*t;
			cout<<travell;
			break;
		}
	km=km+b-f;	
	travell=travell+b+f;
	}
	if(km==d){
		int result=travell*t;
		cout<<result;
	}
}

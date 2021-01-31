#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int ar1[2][3],ar2[2][3],ar3[2][3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"enter the element of the 1st array at row="<<i+1<<endl<<"and coloumn="<<j+1<<endl;
			cin>>ar1[i][j];
			cout<<"enter the element of the 2nd array at row="<<i+1<<endl<<"and coloumn="<<j+1<<endl;
			cin>>ar2[i][j];
			ar3[i][j]=ar1[i][j]+ar2[i][j];
		}
	}
	cout<<ar3[i][j];
}

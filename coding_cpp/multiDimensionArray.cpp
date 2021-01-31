#include<bits/stdc++.h>

using namespace std;

int main() {
	int array[3][4] = {{3,1,2,3},{4,5,6,7}, {8,9,10,11}};
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"Array ["<<i<<"]["<<j<<"]: "<<array[i][j]<<endl;
		}
	}
	return 0;
}

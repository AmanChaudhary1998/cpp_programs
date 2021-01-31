#include<iostream>
using namespace std;
void towerofhanoi(int n,char from_rod,char to_rod,char aux_rod)
{
	if(n==1)
	{
		cout<<"move the disk form rod "<<from_rod<<"to_rod "<<to_rod<<endl;
		return ;
	}
	towerofhanoi(n-1,from_rod,aux_rod,to_rod);
	cout<<"move the disk " <<n<<" from_rod "<<from_rod<<" to_rod "<<to_rod<<endl;
	towerofhanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
	int n=4;
	towerofhanoi(n,'A','C','B');
	return 0;
}

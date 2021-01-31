#include<iostream>
using namespace std;
int main(){
	int cumulative=2;
	int shared=5;
	int liked=2;
	int days;
	cin>>days;
	for(int i=1;i<days;i++){
		shared=liked*3;
		liked=shared/2;
		cumulative=cumulative+liked;
	}
	cout<<cumulative;
}

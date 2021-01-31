#include<iostream>
using namespace std;
int main(){
	int a[10],b[10];
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	for(int i=0;i<3;i++){
		cin>>b[i];
	}
	int alice=0,bob=0;
	for(int i=0;i<3;i++){
		if(a[i]>b[i]){
			alice=alice+1;
		}
		else if(a[i]<b[i]){
			bob=bob+1;
		}
	}
	cout<<alice<<" "<<bob;
}

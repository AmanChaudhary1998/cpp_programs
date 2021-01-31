#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0;
	int jump=0;
	while(i<n){
		if(a[i+2]!=1){
			i=i+2;
			cout<<i<<endl;
			jump=jump+1;
			if(i==(n-1)){
				break;
			}
		}else{
			i=i+1;
			jump=jump+1;
			cout<<i<<endl;
			if(i==(n-1)){
				break;
			}
		}
	}
	cout<<jump;
}

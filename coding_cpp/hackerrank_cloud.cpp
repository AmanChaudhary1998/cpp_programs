#include<iostream>
using namespace std;
int main(){
	int n,cloud[100],ar[100],jump=0;
	cout<<"enter the number of cloud"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		int ar[n];
		cin>>ar[i];
	}
	cloud[0] = ar[0];
	for(int i=2;i<n;i+2){
		if(ar[i]==0){
			cloud[i] = ar[i];
			jump = jump+1;
		}else{
			cloud[i-1] = ar[i-1];
			jump = jump+1;
			i = i-1;
		}
	}
	cout<<jump;
	
}

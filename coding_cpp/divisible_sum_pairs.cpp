#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	int a[n];
	cin>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(i<j){
				if((a[i]+a[j])%k==0){
					count=count+1;
				}
			}
		}
	}
	cout<<count;
}

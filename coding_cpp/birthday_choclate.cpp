#include<iostream>
using namespace std;
int main(){
	int n,m,d;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>d;
	cin>>m;
	int count=0;
	for(int i=0;i<n-m+1;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			sum=sum+a[i+j];
		}
		if(sum==d){
			count=count+1;
		}
	}
	cout<<count;
}


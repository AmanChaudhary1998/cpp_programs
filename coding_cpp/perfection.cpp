#include<iostream>
using namespace std;
int main(){
	int t,n,arr[100];
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int sum=0;
		for(int j=1;j<n;j++){
			if(n%j==0){
				arr[j]=j;
				sum=sum+arr[j];
			}
		}
		if(sum==n){
			cout<<"YES";
		}
		else{
			cout<<"No";
		}
	}
}

#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int l=0;l<n;l++){
			int arr[l];
		}
		cin>>m;
		int count=0;
		for(int l=0;l<n;l++){
			for(int j=l+1;j<n;j++){
				if((arr[l]+arr[j])%m==0){
					count=count+1;
				}
			}
		}
		cout<<count<<endl;
	}
}

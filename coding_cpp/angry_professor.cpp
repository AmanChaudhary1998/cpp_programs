#include<iostream>
using namespace std;
int main(){
	int t,n,k;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		cin>>k;
		int a[n];
		int count=0;
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		for(int j=0;j<n;j++){
			if(a[j]<=0){
				count=count+1;
			}
		}
		if(count>=k){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES";
		}
	}
}

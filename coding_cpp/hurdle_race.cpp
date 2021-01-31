#include<iostream>
using namespace std;
int main(){
	int n,k,temp;
	cin>>n;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			temp=a[i];
			a[i]=max;
			max=temp;
		}
	}
	if(k>=max){
		cout<<"0";
	}else{
		max=max-k;
		cout<<max;
	}
}

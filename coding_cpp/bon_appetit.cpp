#include<iostream>
using namespace std;
int main(){
	int n,k,b;
	cin>>n;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>b;
	int sum=0;
	for(int i=0;i<n;i++){
		if(i==k){
			
		}
		else{
			sum=sum+a[i];
		}
	}
	sum=sum/2;
	if(b>sum){
		sum=b-sum;
		cout<<sum;
	}else if(b==sum){
		cout<<"Bon Appetit";
	}
}

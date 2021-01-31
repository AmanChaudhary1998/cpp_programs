#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>ar[i][j];
		}
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			ar[i][j];
		}
	}
	int sum=0,sum1=0;
	for(int i=0;i<n;i++){
		sum= sum+ar[i][i];
		sum1= sum1+ar[i][n-i-1];
	}
	int total = sum-sum1;
	if(total<0){
		total=sum1-sum;
		cout<<total;
	}
	else{
		cout<<total;
	}
}

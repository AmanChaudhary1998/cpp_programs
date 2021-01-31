#include<iostream>
using namespace std;
int main(){
	int m,n,count=0;
	cout<<"enter the divisible element\n";
	cin>>m;
	cout<<"enter the number of elements to be inserted\n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if((arr[i]+arr[j])%m==0){
				count++;
			}
		}
	}
	if(count>0){
		cout<<"the followint pairs are "<<count<<endl;
	}
}


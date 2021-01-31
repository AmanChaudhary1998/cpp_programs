#include<iostream>
using namespace std;
int main(){
	int ar[5],temp=0;
	for(int i=0;i<5;i++){
		cin>>ar[i];
	}
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(ar[i]>=ar[j]){
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
	int sum=0,sum1=0;
	for(int i=0;i<4;i++){
		sum=sum+ar[i];
	}
	for(int i=1;i<5;i++){
		sum1=sum1+ar[i];
	}
	cout<<sum<<" "<<sum1;
}

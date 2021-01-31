#include<iostream>
using namespace std;
int main(){
	int n,ar[50];
	cout<<"enter the the number pf element in the array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+ar[i];
	}
	cout<<sum;
}

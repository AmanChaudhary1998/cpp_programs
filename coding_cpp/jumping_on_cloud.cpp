#include<iostream>
using namespace std;
int main(){
	int n,k,i;
	cin>>n;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int energy=100;
	i=(k%n);
	energy=energy-(a[i]*2+1);
	while(i!=0){
		i=(i+k)%n;
		energy=energy-(a[i]*2+1);
	}
	cout<<energy; 	
}

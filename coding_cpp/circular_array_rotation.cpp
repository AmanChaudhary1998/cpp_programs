#include<iostream>
using namespace std;
int main(){
	int n,k,q;
	cin>>n;
	cin>>k;
	cin>>q;
	int a[n];
	int b[2*n];
	int m[q];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int res=k%n;
	for(int i=0;i<q;i++){
		cin>>m[i];
		if(m[i]-res>=0){
			cout<<(a[m[i]-res])<<endl;
		}else{
			cout<<(a[m[i]-res+n])<<endl;
		}
	}
}

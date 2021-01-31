#include<iostream>

using namespace std;

int main(){
	int n,flag=0;
	cin>>n;
	int k=2;
	cout<<k<<endl;
	int s=1;
	int a[s];
	for(int i=3;i<=n;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
			else{
				flag=1;
			}
		}
		if(flag==1){
			a[s]=i;
			s++;
		}
	}
	for(int l=1;l<s;l++){
		cout<<l.length<<"="<<a[l]<<endl;
	}
}

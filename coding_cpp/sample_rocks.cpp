#include<iostream>

using namespace std;

int main(){
	int s,r,l1,l2;
	cin>>s;
	cin>>r;
	int a[s],b[r];
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	int count=0;
	for(int j=0;j<r;j++){
		cin>>l1;
		cin>>l2;
		for(int i=0;i<s;i++){
			if(a[i]>l1 && a[i]<l2){
				count=count+1;
			}
		}
		cout<<count;
		count=0;
	}
}

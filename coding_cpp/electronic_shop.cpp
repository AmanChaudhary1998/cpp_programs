#include<iostream>
using namespace std;
int main(){
	int m,k,u,temp;
	cin>>m;
	cin>>k;
	cin>>u;
	int a[k];
	int b[u];
	int max=-1;
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
	for(int j=0;j<u;j++){
		cin>>b[j];
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<u;j++){
			if((a[i]+b[j])<=m && a[i]+b[j]>max ){
				max=(a[i]+b[j]);
			}
		}
	}
	cout<<max;
}

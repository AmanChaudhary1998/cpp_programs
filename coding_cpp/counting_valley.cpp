#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int s=0;
	int valley=0;
	for(int i=0;i<n;i++){
		if(a[i]=='U'){
			s=s+1;
			if(s==0){
				valley=valley+1;
			}
		}else{
			s--;
		}
	}
	cout<<valley;
}

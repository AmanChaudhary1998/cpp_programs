#include<iostream>
using namespace std;
int main(){
	int init=1;
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			if(j%2==0){
				init=init*2;
			}else{
				init=init+1;
			}
		}
		cout<<init<<endl;
		init=1;
	}
}

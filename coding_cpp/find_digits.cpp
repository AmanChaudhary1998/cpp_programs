#include<iostream>
using namespace std;
int main(){
	int t,n,r,d;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		d=n;
		int count=0;
		while(d!=0){
			r=d%10;
			d=d/10;
			if(r!=0){
				if(n%r==0){
				count++;
			}
			}
		}
		cout<<count<<endl;
	}
}

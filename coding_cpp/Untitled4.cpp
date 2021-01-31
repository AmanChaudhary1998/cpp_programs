#include<iostream>
using namespace std;
int main(){
	int n,p;
	cin>>n;
	cin>>p;
	int t=n/2;
	int count=0;
	if(p<t){
		if(p==1){
			cout<<count;
		}else{
			if(p%2==0){
				
			}else{
				for(int i=1;i<=t;i+2){
					if((i+1)==p || (i+2)==p){
						count=count+1;
					}
				}
			}
		}
		
	}
	else{
		if(p%2==0){
			if(p==n){
				cout<<count;
			}else{
				for(int i=n;i>t;i-2){
					if((i-1)==p || (i-2)==p){
						count=count+1;
					}
				}
				cout<<count;
			}
			
		}else{
			if(p==n || p==n-1){
				cout<<count;
			}
			else{
				for(int i=n-2;i>t;i--){
					if(i==p || (i-1)==p){
						count=count+1;
					}
				}
				cout<<count;
			}
		}
	}
}

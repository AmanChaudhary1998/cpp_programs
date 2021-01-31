#include<iostream>
using namespace std;
int main(){
	int x1,v1,x2,v2;
	cin>>x1;
	cin>>v1;
	cin>>x2;
	cin>>v2;
	int jump=0;
	if(x1==x2 && v1==v2){
		cout<<"YES";
	}
	else if((x1<=x2 && v1>=v2)||(x1>=x2 && v1<=v2)){
	while((x1<=x2 && v1>=v2)||(x1>=x2 && v1<=v2)){
			x1=x1+v1;
			x2=x2+v2;
			if(x1==x2){
				cout<<"YES"<<endl;
				break;
			}
			else if((x1>x2 && v1>v2)||(x1<x2 && v1<v2)){
				cout<<"NO"<<endl;
				break;
			}
		}	
	}
	else{
		cout<<"NO";
	}
}

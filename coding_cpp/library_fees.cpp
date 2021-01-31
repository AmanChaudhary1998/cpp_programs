#include<iostream>
using namespace std;
int main(){
	int d1,m1,y1,d2,m2,y2,mf,df;
	int yf=10000;
	cin>>d1;
	cin>>m1;
	cin>>y1;
	cin>>d2;cin>>m2;cin>>y2;
	if(d1<=d2){
		if(m1<=m2){
			if(y1<=y2){
				cout<<"0";
			}else{
				cout<<yf;
			}
		}else{
			if(y1<=y2){
				mf=(m1-m2)*500;
				cout<<mf;
			}else{
				cout<<yf;
			}
		}
	}else{
		if(m1<=m2 && y1<=y2){
			df=(d1-d2)*15;
			cout<<df;
		}else if(m1>m2 && y1<=y2){
			mf=(m1-m2)*500;
			cout<<mf;
		}else if(y1<=y2){
			cout<<"0";
		}
		else{
			cout<<yf;
		}
		
	}
}

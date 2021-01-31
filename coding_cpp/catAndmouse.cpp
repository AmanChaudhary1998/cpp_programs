#include<iostream>
using namespace std;
int main(){
	int t,catA,catB,mouse;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>catA;
		cin>>catB;
		cin>>mouse;
		int d=0;
		d=catA-mouse;
		if(d<0){
			d=mouse-catA;
		}
		int e=0;
		e=catB-mouse;
		if(e<0){
			e=mouse-catB;
		}
		if(d==e){
			cout<<"Mouse C";
		}else if(d<e){
			cout<<"Cat A";
		}else{
			cout<<"Cat B";
		}
		catA=0;
		catB=0;
		mouse=0;
	}
}

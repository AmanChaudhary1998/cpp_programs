#include<iostream>
using namespace std
void main(){
	int p[100],wt[100],bt[100],awt,atat;
	cout<<"enter the number of process\n";
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>p[i];
	}
	for(int i=0;i<x;i++){
	cout<<"enter the arrival time for the process",i<<endl;
	cin>>at[i];
	cout<<"enter the burst time",i<<endl;
	cin>>bt[i];
	}
	wt[0]=0;
	for(int i=1;i<x;i++){
		wt[i]=wt[i-1]+bt[i-1];
	}
	
}

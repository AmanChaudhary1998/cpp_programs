#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int temp=0,check=0;
	for(int i=0;i<n;i++){
		if(a[i]%10<5 && a[i]>38){
			temp=a[i]%10;
			check=5-temp;
			if(check<3){
				cout<<(a[i]+check)<<endl;
			}
			else{
				cout<<a[i]<<endl;
			}
		}
		else if(a[i]%10 >5 && a[i]>=38){
			temp=a[i]%10;
			check=10-temp;
			if(check<3){
				cout<<(a[i]+check)<<endl;
			}
			else{
				cout<<a[i]<<endl;
			}
		}
		else if(a[i]%5==0 && a[i]>38){
			cout<<a[i]<<endl;
		}
		else{
			cout<<a[i]<<endl;
		}
	}
}

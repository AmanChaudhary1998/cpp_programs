#include<iostream>
using namespace std;
int main(){
	 int temp=0,max=9999;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	max = a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]){
			temp=max;
			max=a[i];
			a[i]=temp;
		}
	}
	//cout<<max<<endl;
	int candle=0;
	for(int i=0;i<n;i++){
		if(max==a[i]){
			candle=candle+1;
			cout<<candle<<" ";
		}
		else{
			cout<<"@"<<" ";
		}
	}
	//cout<<candle;
	/*for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<=a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}*/
	/*int candle=1;
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]){
			candle=candle+1;
		}
	}
	cout<<candle; */
}

#include<iostream>
using namespace std;
int main(){
	int n,count=1;
	//cout<<"enter the number of socks"<<endl;
	cin>>n;
	int arr[n];
	for(int k=0;k<n;k++){
		cin>>arr[n];
	}
	int pairs=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count=count+1;
				//cout<<"value of count is----->"<<count<<endl;
				if(count%2==0){
					pairs=pairs+1;
					//cout<<"vlue of pairs is------>"<<pairs<<endl;
				}
			}
		}
		count=0;
	}
	cout<<pairs/2;
}

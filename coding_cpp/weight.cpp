#include<iostream>
using namespace std;
int main(){
	int t,n,m,arr[100],temp;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		cin>>m;
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		int sum=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]>arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=arr[i];
				}
			}
		}
		for(int i=0;i<m;i++){
			sum=sum+arr[i];
		}
		cout<<sum<<endl;
	}
}

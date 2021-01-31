#include<iostream>
using namespace std;
int main(){
	int n,temp=0;
	cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count=count+1;
			}
		}
		b[i]=count;
	}
	int max=b[0];
	for(int i=1;i<n;i++){
		if(b[i]>=max){
			temp=max;
			max=b[i];
			b[i]=temp;
		}
	}
	cout<<max<<endl;
	for(int i=0;i<n;i++){
		if(b[i]==max){
			c[i]=a[i];
		}
		cout<<b[i]<<" ";
	}
	int min1=c[0];
	for(int i=1;i<n;i++){
		if(c[i]<min1){
			temp=min1;
			min1=c[i];
			c[i]=temp;
		}
	}
	cout<<min1<<" ";
}

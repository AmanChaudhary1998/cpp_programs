#include<iostream>
using namespace std;
int main(){
	int n,low,high;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=0,max=0;
	low=high=a[0];
for(int i=1;i<n;i++){
	if(a[i]<low){
		min=min+1;
		low=a[i];
	}else if(a[i]>high){
		max=max+1;
		high=a[i];
	}else{
		
	}
}
cout<<min<<" "<<max<<endl;
}

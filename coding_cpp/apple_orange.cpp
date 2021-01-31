#include<iostream>
using namespace std;
int main(){
	int start,end,loc_apple,loc_orange,m,n;
	cin>>start;
	cin>>end;
	cin>>loc_apple;
	cin>>loc_orange;
	cin>>m;
	cin>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		cin>>b[j];
	}
	for(int i=0;i<m;i++){
		a[i]=a[i]+loc_apple;
	}
	for(int j=0;j<n;j++){
		b[j]=b[j]+loc_orange;
	}
	int apple=0,orange=0;
	for(int i=0;i<m;i++){
		if(a[i]>=start && a[i]<=end){
			apple=apple+1;
		}
	}
	cout<<apple<<endl;
	for(int j=0;j<n;j++){
		if(b[j]>=start && b[j]<=end){
			orange=orange+1;
		}
	}
	cout<<orange<<endl;
}

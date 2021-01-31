#include<iostream>
using namespace std;

int main(){
	int t,ar[10],n;
	cin>>t;
	ar[0] = 'sunday';ar[1]='monday'; ar[2]='tuseday';ar[3]='wednesday';ar[4]='friday';ar[6]='saturday';ar[7]='kryptonday';
	ar[8]='coluday';ar[9]='daxamday';
	for(int i=0;i<t;i++){
		cin>>n;
		if(n==1){
			cout<<ar[1];
		}
	}
}

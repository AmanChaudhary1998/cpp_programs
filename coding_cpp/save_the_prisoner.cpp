#include<iostream>
using namespace std;
int main(){
	int t,n,m,s,res;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		cin>>m;
		cin>>s;
		//res=m%n;
		/*
		if(m%n==0){
			cout<<n;
		}else if((s+(res-1))<=n){
			cout<<(s+(res-1));
		}else if(s+(res-1)>n){
			int value= (s+(res-1))-n;
			cout<<value;
		}
	}
	*/
	if((s+m-1)%n==0){
		cout<<n<<endl;
	}else{
		cout<<((s+m-1)%n)<<endl;
	}
}
}

#include<iostream>
using namespace std;
int main(){
	double pos=0.0,neg=0.0,z=0.0;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>0){
			pos=pos+1;
		}
		else if(a[i]<0){
			neg=neg+1;
		}
		else{
			z=z+1;
		}
	}
	cout<<neg/n<<endl<<pos/n<<endl<<z/n;
}

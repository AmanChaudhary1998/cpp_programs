/*
#include<iostream>
using namespace std;
int main(){
	int n,p;
	cin>>n;
	cin>>p;
	int t=n/2;
	int count=0;
	if(p<=t){
		if(p==1){
			cout<<"0";
		}
		else{
			for(int i=1;i<=t;i+2){
				if((i+1)==p||(i+2)==p){
					count=count+1;
					break;
				}
				else{
					count=count+1;
				}
			}
			cout<<count;
		}
	}
	else{
		if(n%2==0){
			if(p==n){
				cout<<"0";
			}
			else{
				for(int i=n;i>t;i-2){
					if((i-1)==p||(i-2)==p){
						count=count+1;
						cout<<count;
						break;
					}
					else{
						count=count+1;
					}
				}
			}
		}
		else{
			if(p==n||p==(n-1)){
				cout<<"0";
			}
			else{
				for(int i=n-1;i>t;i-2){
					if((i-1)==p||(i-2)==p){
						count=count+1;
						break;
					}
					else{
						count=count+1;
					}
				}
				cout<<count;
			}
		}
	}
}
*/
#include<bits/stdc++.h> 
using namespace std; 
  
int minTurn(int n, int k) 
{ 
    if (n%2 == 0) 
        n++; 
  
    return min((k + 1)/2, (n - k + 1)/2); 
} 
  
// Driven Program 
int main() 
{ 
    int n,k;
    cin>>n;
    cin>>k;
    cout << minTurn(n,k) << endl; 
    return 0; 
} 


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int k=0;
	int a[k];
	int sum=17;
	int count=0;
	if(n<=10 && n>=5){
		count++;
		cout<<count<<endl;
	}
	else{
		count=1;
		for(int j=11;j<=n;j++){
			if(j%2!=0 && 3!=0 && j%5!=0 && j%7!=0){
				a[k]= j;
				sum= sum+j;
				if(sum%2==0 && sum%3==0 && sum%5==0 && sum%7==0){
					sum=sum-j;
				}
				else if(sum<=n){
					count++;
				}
				k++;
			}
		}
		cout<<count;
	}
	for(int i=0;i<=k;i++){
	
	}
}

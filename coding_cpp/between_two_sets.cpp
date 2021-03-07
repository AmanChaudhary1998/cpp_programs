#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	return gcd(b%a,a);
}
 int gcd1(int a1,int b1)
 {
 	if(b1==0)
 	{
 		return a1;
	}
	return gcd(b1,a1%b1);
 }

int main()
{
	int n,m;
	typedef long long int lli;
	cin>>n>>m;
	int arr[n],arr1[m];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
	int temp = arr1[0];
	for(int i=1;i<m;i++)
	{
		temp = gcd(arr1[i],temp);
		if(temp==1)
		{
			temp =1;
		}
	}
	//cout<<temp<<endl;
	lli temp1=arr[0];
	for(int i=1;i<n;i++)
	{
		temp1 = ((arr[i]*temp1)/(gcd1(arr[i],temp1)));
	}
	//cout<<temp1;
	int count=0;
	int vari=temp1;
	for(int i=1; (vari*i)<=temp;i++)
	{
		if(temp%(vari*i)==0)
		{
			count = count + 1;
		}
	}
	cout<<count;
}




































//#include<iostream>
//using namespace std;
//int main(){
//	int n,m,temp=0;
//	cin>>n;
//	cin>>m;
//	int a[n],b[m],c[100],d[100];
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int j=0;j<m;j++){
//		cin>>b[j];
//	}
//	int k=0,r=0;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			if(b[j]%a[i]==0){
//				c[k]=(b[j]/a[i]);
//				if(c[k]%a[i]==0){
//					d[r]=(c[k]/a[i]);
//					r++;
//				}
//				k++;
//			}
//		}
//	}
//	for(int i=0;i<r;i++){
//		int count=0;
//		for(int j=0;j<m;j++){
//			if(b[j]%d[i]==0){
//				count=count+1;
//			}
//		}
//		if(count==m){
//				temp=temp+1;
//			}
//	}
//	cout<<temp;
//}

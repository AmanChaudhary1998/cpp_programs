#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n],arr1[m];
	int max=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	for(int i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
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

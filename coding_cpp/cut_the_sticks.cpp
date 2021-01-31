/*
#include<iostream>
using namespace std;
int main(){
	int n,temp;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	int i=0;
	while(i<n){
		for(int j=i+1;j<n;j++){
			if(a[i]==0 || a[j]==0){
				
			}else{
				a[j]=a[j]-a[i];
				count++;
			}
		}
		cout<<count<<endl;
		count=1;
		i++;
	}
}
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int na=n;
    int no=0;
    cout<<n<<endl;
    sort(arr.begin(),arr.end());
    int c_ele=arr[0];
    while(na>1)
    {
    for(int a=0;a<n;a++)
    {
        while(arr[a]==c_ele)
        {
            no++;
            a++;
        }
        na=na-no;
        if(na>=1)
        cout<<na<<endl;
        no=1;
        c_ele=arr[a];
    }
    }
    return 0;
}

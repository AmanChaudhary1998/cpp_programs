#include<iostream>

using namespace std;

int main()
{
  int T,n,flag=0;
  cin>>T;
  for(int t=0;t<T;t++){
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
      cin>>arr[j];
    }
    int z=arr[0];
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    	if((arr[i]+arr[j])%3==0){
          flag=1;
          break;
   	 }	
		}
    }
    if(flag==1){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
  }
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	sort(arr,arr+n);
	
	// binary search takes three argument i. starting address ii. ending address iii value
	// syntax binary_search(starting address ending address value)
	if(binary_search(arr,arr+n, k))
	{
		cout<<"value present "<<k;
	}
	else{
		cout<<"not present "<<k;
	}
}

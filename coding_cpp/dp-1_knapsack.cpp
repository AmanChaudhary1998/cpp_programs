#include<bits/stdc++.h>

using namespace std;

int knapsack(int wt[],int val[],int W,int n)
{
	int t[n][W];
	if(n==0 || W==0)
	{
		return 0;
	}
	else if(t[n][W]!= -1)
	{
		return t[n][W];
	}
	else if(wt[n-1]<=W)
	{
		return t[n][W] = max(((val[n-1] + knapsack(int wt,int val,int W-wt[n-1],int (n-1))),knapsack(int wt,int val,int W,int (n-1))));
	}
	elseif(wt[n-1]>W)
	{
		return t[n][W] = (knapsack(int wt,int val,int W,int(n-1)));
	}
}

int main()
{
	int weight, value, capacity,n;
	
	cin>> weight;
	
	cout<<"enter the value of the array"<<endl;
	
	int arr[weight];
	
	n = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<weight;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the values for respective weights"<<endl;
	
	int arr1[value];
	
	for(int i=0;i<value;i++)
	{
		cin>>arr1[i];
	}
	cout<<"enter the capacity of the knapsack"<<endl;
	
	cin>>capacity;
	
	int t[n][capacity];
	memset(t,-1,sizeof(t));
	
	cout<< knapsack(arr,arr1,capacity,n);
}

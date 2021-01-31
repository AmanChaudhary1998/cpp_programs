#include<iostream>
using namespace std;
int s,e,i,pivot,temp,temp1,pIndex,a[15];
int partitioned(a,s,e)
{
	pivot = a[e];
	pIndex= a[s];
	for(int i=s;i<e-1;i++)
	{
		if(a[i]<=pivot)
		{
			temp=a[i];
			a[i]=a[pIndex];
			a[pIndex]=temp;
			pIndex++;
		}
	}
	temp1= a[pIndex];
	a[pIndex]=a[end];
	a[end]=temp1;
	return pIndex;
}
void QuickSort(a,s,e)
{
	if(s<e)
	{
		int pIndex = partitioned(a,s,e);
		QuickSort(a,s,pIndex-1);
		QuickSort(a,pIndex+1,e)
	}
}
int main()
{
	int a[]={7,2,1,6,8,5,3,4};
	QuickSort(a,0,7);
	for(int i=0;i<8;i++)
	cout<<a[i]<<" ";
}

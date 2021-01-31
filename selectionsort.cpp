#include<iostream>
using namespace std;
int main()
{
	int a1[]={12,18,6,9,30,1};
	int i,j,temp;
	    for(i=1;i<6;i++)
	    {
	    	j=i;
	    	for(int k=i+1;k<6;k++)
	    	{
	    	      if(a1[k]<a1[j])
				  {
				  	temp=a1[j];
				  	a1[j]=a1[k];
				  	a1[k]=temp;
					  }	
			}
			cout<<a1[j]<<endl;
		}
}

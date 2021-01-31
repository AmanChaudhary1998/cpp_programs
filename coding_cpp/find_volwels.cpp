#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout<<"enter the number of alphabets that are to be inserted ";
	cin>>n;
	char arr[n];
	int j=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;arr[i]!='\0';++i)
	{
		if(arr[i]=='a'|| arr[i]=='e' || arr[i]== 'i' || arr[i]=='o' || arr[i]== 'u' || arr[i]=='A' || arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
		{
			arr[j]=arr[i];
			cout<<arr[j]<<endl;
			j++;
		}
	}
	
}

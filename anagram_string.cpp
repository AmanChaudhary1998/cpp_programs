#include<bits/stdc++.h>

using namespace std;

int main()
{
	string str1;
	string str2;
	int flag==0;
	cin>>str1;
	cin>>str2;
	int n1=str1.length();
	int n2=str2.length();
	if(n1!=n2){
		cout<< "Not an anagram string";
	}
	else{
		sort(str1.begin(),str1.end());
		sort(str2.begin(), str2.end());
		
		for(int i=0;i<n1;i++){
			if(str1[i]!= str2[i]){
				flag==1;
			}
			else{
				flag==0;
			}
		}
		if(flag==0){
			cout<<"Is a Anagram String";
		}
		else{
			cout<<"Not an Anagram String";
		}
	}
}

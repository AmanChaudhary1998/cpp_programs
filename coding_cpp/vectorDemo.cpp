#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector <int> v;
	for(int i=0;i<5;i++)
	{
		v.push_back(i);
		cout<<v[i]<<endl;
	}
	cout<<"Size "<<v.size()<<endl; // Get the size 
	cout<<"Capacity "<<v.capacity()<<endl; // Get the capacity
	cout<<"Max Size "<<v.max_size()<<endl; // Gt the max size of the vector
	
	cout<<"First Element "<<v.front()<<endl;
	cout<<"Last Element "<<v.back()<<endl;
	cout<<"Element at 3rd position "<<v.at(3)<<endl;
	if(v.empty())
	{
		cout<<"Vector is empty"<<endl;
	}
	else{
		cout<<"Vector is not empty";
	}
}

#include<bits/stdc++.h>

using namespace std;

int main() {
	stack <int> s, s1;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<"Size of the stack "<<s.size()<<endl;
	cout<<"Top of the stack "<<s.top()<<endl;
	// To print the elements into the stack
	//	 1. store all the elements into another variables
	//	 2. print the top element and pop the elements from the stack 
	s1 = s;
	while(!s1.empty())
	{
		cout<<s1.top()<<endl;
		s1.pop();
	}
	
}

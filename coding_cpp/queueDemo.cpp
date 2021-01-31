#include<bits/stdc++.h>

using namespace std;

int main() {
	
	queue <int> s, s1;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	
	cout<<"Size of the queue "<<s.size()<<endl;
	cout<<"Front element "<<s.front()<<endl;
	cout<<"End element "<<s.back()<<endl;
	
	s1=s;
	while(!s1.empty())
	{
		cout<<"Elements in queue are : "<<s1.front()<<endl;
		s1.pop();
	}
}

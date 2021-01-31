#include<bits/stdc++.h>

using namespace std;

int main() {
	
	priority_queue <int> p;
	p.push(10);
	p.push(70);
	p.push(3);
	p.push(100);
	p.push(11);
	p.push(5);
	
	cout<<"Top : "<<p.top()<<endl;
	p.pop();
	cout<<" Now at Top is: "<<p.top()<<endl;
	
	while(!p.empty())
	{
		cout<<p.top()<<endl;
		p.pop();
	}
	cout<<"Top : "<<p.top()<<endl;
	p.pop();
	cout<<" Now at Top is: "<<p.top()<<endl;
}

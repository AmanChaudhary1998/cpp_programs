#include<bits/stdc++.h>

using namespace std;

class Student {
	
	int age;
	string first_name;
	string last_name;
	int standard;
	
	public:
		Student()
		{
			age = 0;
			first_name.clear();
			last_name.clear();
			standard = 0;
		}
	
	void set_age(int newAge)
	{
		age = newAge;
	}
	void set_first_name(string firstName)
	{
		first_name = firstName;
	}
	void set_last_name(string lastName)
	{
		last_name = lastName;
	}
	void set_standard(int newStandard)
	{
		standard = newStandard;
	}
	int get_age()
	{
		return age;
	}
	string get_first_name()
	{
		return first_name;
	}
	string get_last_name()
	{
		return last_name;
	}
	int get_standard()
	{
		return standard;
	}
	
	
};
int main()
{
	Student s1;
	int age,standard;
	string first_name,last_name;
	
	cin>>age >> first_name >> last_name >> standard;
	
	s1.set_age(age);
	s1.set_first_name(first_name);
	s1.set_last_name(last_name);
	s1.set_standard(standard);

	cout<< s1.get_age() <<endl << s1.get_last_name() <<","<<s1.get_first_name()<<endl<<s1.get_standard()<<endl;
	
}

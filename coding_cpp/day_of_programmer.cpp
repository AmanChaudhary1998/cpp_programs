#include<iostream>
using namespace std;
int main(){
	int year,date;
	cin>>year;
	if((year%4==0 && year%100!=0) || year%400==0||year==1700||year==1800||year==1900){
		date= 256-244;
		if(date>30){
			cout<<date<<"."<<"10."<<year;
		}
		else{
		cout<<date<<"."<<"09."<<year;	
		}
	}
	else if(year==1918){
		cout<<"26.09.1918";
	}
	else{
		date= 256-243;
		cout<<date<<"."<<"09."<<year;
	}
}

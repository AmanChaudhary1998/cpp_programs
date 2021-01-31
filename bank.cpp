#include<iostream>
#include<stdlib.h>
using namespace std;
class bank
{
	double balance=100000;
	char acctype;
	char transaction;
	int accnum;
	double transamt;
	public:
		void getdata();
		void display();
		void performTrans();
};
void bank::getdata()
{
	cout<<"Enter the bank account num"<<endl;
	cin>>accnum;
	cout<<"enter the account type(type s for saving/ c for current)"<<endl;
	cin>>acctype;
	cout<<"enter the transaction type(type w for withdrawal/d for deposit)"<<endl;
	cin>>transaction;
	cout<<"enter the transaction amt"<<endl;
	cin>>transamt;
}
  void bank::display()
  {
  	double fbal;
  	cout<<"\nenter the account number"<<accnum;
  	if(acctype=='c'||acctype=='C')
  	{
  		cout<<"\nAccount type : current";
	  }
	  else
	  cout<<"\nAccount type :saving";
	  if(transaction=='w'||transaction=='W')
	  {
	  	cout<<"\nTransaction type : Withdrawal";
	  }
	  else
	  cout<<"Transaction type: Deposit";
	  cout<<"\nTransaction Amount:"<<transamt;
  }
  void bank::performTrans()
  {
  	if(transaction=='w'||transaction=='W')
  	{
  		if(acctype=='c'||acctype=='C')
  		{
  			if(balance-transamt<50000)
  			{
  				cout<<"Transaction Not Permitted\n Minimum Balance should be greaer than or equal to 50000\n";
  				return;
			  }
		  }
		  else if(acctype=='s'||acctype=='S')
		  {
		  	if(balance-transamt<20000)
		  	{
		  		cout<<"Transaction not permitted.\nMinimum Balance should be greater than or equal to 50000\n";
		  		return;
			  }
		  }
		  balance=balance-transamt;
	  }
	  else
	  balance = balance + transamt;
  }
    int main()
  {
  	bank bk;
  	bk.getdata();
  	bk.performTrans();
  	bk.display();
  	
  }
  
  
  
  
  
  
  
  
  
  
  
  

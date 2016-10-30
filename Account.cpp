/*****************************************************************************
 *  Northwestern Polytechnic University
 *  CS360 - c++
 *****************************************************************************/
/*****************************************************************************
 *  main.c
 *
 *  Write a test program that creates an Account object with an account ID of 1122,
 *	a balance of $20,000, and an annual interest rate of 4.5%. Use the withdraw
 *	method to withdraw $2,500, use the deposit method to deposit $3,000, and print
 *	the balance, the monthly interest, and the date when this account was created.
 *
 *  Author:  THANKI NIRAJ and 19376
 *****************************************************************************/
 
#include<iostream>
#include<ctime>
using namespace std;

class Account
{
	public:
		double getmonthlyIntrestrate();
		double getmonthlyIntrest();
		double getwithdraw(double amount);
		double getdeposit(double amount);
		void setid(int id);
		int getid();
		void setbalance(double balance);
		double getbalance();
		void setannualIntrestrate(double annualInstrestrate);
		double getannualIntrestrate();
		account(int id,double balance,double annualIntrestrate);
		account();
		char date[10];

		int id;
		double balance;
		double annualIntrestrate;
		Account()
{
	id=0;
	balance=0;
	annualIntrestrate=0;
}
Account (int i,double bal,double annualIntrest)
{
	id=i;
	balance=bal;
annualIntrestrate=annualIntrest;
}
			 
char* getdate()
{
	return _strdate(date);
}
};

void Account::setid(int id)
{
	id=id;
		
}
int Account::getid()
{
	return id;
}
void Account::setbalance(double balance)
{
	balance=balance;
}
double Account::getbalance()
{
	return balance;
}
void Account::setannualIntrestrate(double annualInstrestrate)
{
	annualIntrestrate=annualIntrestrate;
}
double Account::getannualIntrestrate()
{
	return annualIntrestrate;
}

double Account::getmonthlyIntrestrate()
{
	return annualIntrestrate/12;
}

double Account::getmonthlyIntrest()
{
	return balance*getmonthlyIntrestrate();
}

double Account::getwithdraw(double amount)
{
	if(balance < amount)
	{
		cout << "Insufficient Balance in the account";
	}
	else
	{
	return balance-amount;
	}

}

double Account::getdeposit(double amount)
{
	return balance+amount;
}


int main()
{
	
	Account savingac(1122,20000,4.5);
	
	cout<<"After Withdraw of Amount 2500 = "<< savingac.getwithdraw(2500)<<endl;
	cout << "After Deposit of Amount 3000 ="<<savingac.getdeposit(3000) <<endl;
	cout << "Monthly Intrest is = " <<savingac.getmonthlyIntrest()<<endl;
	cout << "Monthly Intrest Rate = " << savingac.getmonthlyIntrestrate()<<endl;
	cout << "Account Created On = " << savingac.getdate(); 
	
	
	
}


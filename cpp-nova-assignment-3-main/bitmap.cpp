#include<iostream>
#include<cstring>
#include"bitmap.h"
using namespace std;

Account::Account()
{
	accno=0;
	strcpy(name," ");
	balance=0;


}


Account::Account(int acc, const char *n, double bal)
{
	accno=acc;
	strcpy(name,n);
	balance=bal;
}

void Account::accept()
{
	cin>>accno;
	cin>>name;
	cin>>balance;
	
}


void Account::display()
{
	cout<<accno;
	cout<<name;
	cout<<balance;
}

void Account::deposite(int amount)
{
	balance+=amount;
}

void Account::withdraw(int amount)
{
	balance-=amount;
}

int Account::getAccno()
{
  
	return accno;
}
	
char* Account::getName()
{

	return name;
}

double Account::getBalance()
{

	return balance;
}

void Account::setAccno(int id)
{
	accno=id;
}

void Account::setName(const char *n)
{
	strcpy(name,n);
}

void Account::setBalance(double bal)
{
	balance=bal;
}

bool Account::searchAccountById(Account *accounts, int size, int id)
{
	bool status=false;
	for(int i=0;i<size;i++){
		if(accounts[i].accno==id)
		status=true;
	}
	
	
	return status;
}

double Account::getHighestBalance(Account *accounts, int size)
{
	int i, highestBal;
	highestBal=0;
	for( i=0;i<size;i++){
		if(accounts[i].balance>highestBal)
			highestBal=accounts[i].balance;
	}
	
	
	return highestBal;
}


double Account::getLowestBalance(Account *accounts, int size)
{
	int i, lowestBal;
	 
	lowestBal=accounts->balance;
	for( i=0;i<size;i++){
		if(accounts[i].balance<lowestBal)
			lowestBal=accounts[i].balance;
	}
		
	return lowestBal;
}
















/*
Kevin Lehman  - 1463553
Tarrant County College - COSC 1437- Fall 2017
Assignment 1 - Week 9
*/

#include<iostream>
using namespace std;

const int NAME_SIZE = 20;
const int STREET_SIZE = 30;
const int CITY_SIZE = 20;
const int STATE_CODE_SIZE = 3;

class Customer
{
	private:
		long customerNumber;
		char name[NAME_SIZE];
		char streetAddress_1[STREET_SIZE];
		char streetAddress_2[STREET_SIZE];
		char city[CITY_SIZE];
		char state[STATE_CODE_SIZE];
		int zipCode;
	public:
		void setCustomerNumber(long);
		bool setName(char[]);
		bool setStreet1(char[]);
		bool setStreet2(char[]);
		bool setCity(char[]);
		bool setState(char[]);
		bool setZip(int);
		long getCustNum() const;
		char getName();
		char getStreet1();
		char getStreet2();
		char getCity();
		char getState();
		int getZip() const;
};

void Customer::setCustomerNumber(long n)
{
	customerNumber = n;
}
bool Customer::setName(char na[])
{
	if (sizeof(na) <= NAME_SIZE)
	{
		for (int idx = 0; idx < NAME_SIZE; idx++)
		{
			name[idx] = na[idx];
		}
		return true;
	}
	else
	{
		cout << "Invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Customer::setStreet1(char street1[])
{
	if (sizeof(street1) <= STREET_SIZE)
	{
		for (int idx = 0; idx < STREET_SIZE; idx++)
		{
			streetAddress_1[idx] = street1[idx];
		}
		return true;
	}
	else
	{
		cout << "Invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Customer::setStreet2(char street2[])
{
	if (sizeof(street2) <= STREET_SIZE)
	{
		for (int idx = 0; idx < STREET_SIZE; idx++)
		{
			streetAddress_2[idx] = street2[idx];
		}
		return true;
	}
	else
	{
		cout << "Invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Customer::setCity(char cit[])
{
	if (sizeof(cit) <= CITY_SIZE)
	{
		for (int idx = 0; idx < CITY_SIZE; idx++)
		{
			city[idx] = toupper(cit[idx]);
		}
		return true;
	}
	else
	{
		cout << "Invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Customer::setState(char sta[])
{
	if (sizeof(sta) <= STATE_CODE_SIZE)
	{
		for (int idx = 0; idx <= STATE_CODE_SIZE; idx++)
		{
			state[idx] = toupper(sta[idx]);
		}
		return true;
	}
	else
	{
		cout << "Invalid input. Please re-enter." << endl;
		return false;
	}
}
bool Customer::setZip(int z)
{
	if (z >= 0 && z <= 99999)
	{
		zipCode = z;
		return true;
	}
	else
	{
		cout << "Invalid input. Please re-enter." << endl;
		return false;
	}
}

long Customer::getCustNum() const
{
	return customerNumber;
}
char Customer::getName() 
{
	return name[NAME_SIZE];
}
char Customer::getStreet1()
{
	return streetAddress_1[STREET_SIZE];
}
char Customer::getStreet2() 
{
	return streetAddress_2[STREET_SIZE];
}
char Customer::getCity() 
{
	return city[CITY_SIZE];
}
char Customer::getState() 
{
	return state[STATE_CODE_SIZE];
}
int Customer::getZip() const
{
	return zipCode;
}

void showAll(Customer);

int main()
{
	Customer NewCust;
	long loccustomerNumber;
	char locname[NAME_SIZE];
	char locstreetAddress_1[STREET_SIZE];
	char locstreetAddress_2[STREET_SIZE];
	char loccity[CITY_SIZE];
	char locstate[STATE_CODE_SIZE];
	int loczipCode;
	char charptr;
	bool flag = false;
	
		cout << "Enter your customer's number." << endl;
		cin >> loccustomerNumber;
		NewCust.setCustomerNumber(loccustomerNumber);
	do
	{
		cout << "Enter your customer's name." << endl;
		cin >> locname;
		NewCust.setName(locname);
	} while (false);
	do
	{
		cout << "Enter your customer's street address line 1." << endl;
		cin >> locstreetAddress_1;
		NewCust.setStreet1(locstreetAddress_1);
	} while (false);
	do
	{
		cout << "Enter your customer's street address line 2." << endl;
		cin >> locstreetAddress_2;
		NewCust.setStreet2(locstreetAddress_2);
	} while (false);
	do
	{
		cout << "Enter your customer's city." << endl;
		cin >> loccity;
		NewCust.setCity(loccity);
	} while (false);
	do
	{
		cout << "Enter your customer's state." << endl;
		cin >> locstate;
		NewCust.setState(locstate);
	} while (false);
	do
	{
		cout << "Enter your customer's zip code." << endl;
		cin >> loczipCode;
		NewCust.setZip(loczipCode);
	} while (false);

	showAll(NewCust);
	system("PAUSE");
	return 0;
}

void showAll(Customer NewCust)
{
	cout << "Your customer's number is: " << NewCust.getCustNum() << "." << endl;
	cout << "Your customer's name is: " << NewCust.getName() << "." << endl;
	cout << "Your customer's street address line 1 is: " << NewCust.getStreet1() << "." << endl;
	cout << "Your customer's street address line 2 is: " << NewCust.getStreet2() << "." << endl;
	cout << "Your customer's city is: " << NewCust.getCity() << "." << endl;
	cout << "Your customer's state is: " << NewCust.getState() << "." << endl;
	cout << "Your customer's zip code is: " << NewCust.getZip() << "." << endl;

}

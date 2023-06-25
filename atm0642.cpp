#include <iostream>
using namespace std;


class ATM{
protected:
	
	int Totalcash;

	public:
		
		ATM()
    {
	      Totalcash = 0;
	}

	 void setCash(int cashh)
	 {
		Totalcash = cashh;
	}

	 int getCash()
	 {
		return Totalcash;
	}

	 void showBalance()
	 {
		cout << "Total Cash: " << Totalcash;
	}
};

class AccountHolder {
private:
	int accountNumber;
	float balance;

public:
	AccountHolder()
	{

	}

	AccountHolder(int accountNumberr, float balancee)
	{
		accountNumber = accountNumberr;
		balance = balancee;
	}

	void setAccountNumber(int accountNumberr)
	{
		accountNumber = accountNumberr;
	}

	void setBalance(float balancee)
	{
		balance = balancee;
	}

	int getAccountNumber()
	{
		return accountNumber;
	}

	float getBalance()
	{
		return balance;
	}
};

class Transaction : public ATM , public AccountHolder
{
	public:
	AccountHolder *arr;
	int size;
	bool found = false;

	Transaction()
	{

	}

	Transaction(int sizee , int cash )

	{
		sizee = 0;
		size = sizee;
		Totalcash = cash;
		arr = new AccountHolder[size];
	}

	void withdrawAmount(int accountNumberr, float amount)
	{
		for (int i = 0; i<size; i++)
		{
			if (arr[i].getAccountNumber() == accountNumberr)
			{
				found = true;
				if (arr[i].getBalance() >= amount)
				{
					arr[i].setBalance( arr[i].getBalance() - amount);
				}
				else
				{
					cout << "Insufficient balance!" << endl;
					return;
				}
			}
		}
		if (found == false)
		{
			cout << "Invalid account number" << endl;
			return;
		}
	}

	void setData(int index, int accountNumberr, float balancee)
	{
		found = false;
		if (index<0 || index >= size)
		{
			cout << "Invalid index" << endl;
			return;
		}

		for (int i = 0; i<size; i++)
		{
			if (arr[i].getAccountNumber() == accountNumberr)
			{
				found = true;
				arr[index].setBalance(balancee);
			}
		}
		if (found == false)
		{
			cout << "Invalid account number" << endl;
			return;
		}
	}

	void showBalance()
	{
		for (int i = 0; i<size; i++)
		{
			cout << "Account Number: " << arr[i].getAccountNumber() << ", Balance: " << arr[i].getBalance() << endl;
		}
	}

	void resize(int sizee)
	{
		size = sizee;
		
		AccountHolder *Arr1 = new AccountHolder[size];


		for (int i = 0; i<size; i++)
		{

			Arr1[i] = arr[i];
		}
		delete[] arr;
		arr = Arr1;
	}
};




void showMenu() {
	cout << "1. Insert a record\n";
	cout << "2. Update ATM cash\n";
	cout << "3. Update account holders balance\n";
	cout << "4. View ATM cash\n";
	cout << "5. View account holder's balance\n";
	cout << "6. Resize the array\n";
	cout << "7. Withdraw amount \n";
	cout << "0. Exit" << endl;
}

int main() {
	Transaction t1(3, 5000);
	int choice;
	do {
		showMenu();
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1: {
					int index, account_number;
						
					float balance;

					cout << "Enter index: ";
					cin >> index;
					cout << "Enter account number: ";
					cin >> account_number;
					cout << "Enter balance: ";
					cin >> balance;
					t1.setData(index, account_number, balance);
					break;
		}
		case 2: {
					int atm_cash;
					cout << "Enter ATM cash: ";
					cin >> atm_cash;
					t1.setCash(atm_cash);
					break;
		}
		case 3: {
					int account_number;
						float balance;
					cout << "Enter account number: ";
					cin >> account_number;
					cout << "Enter balance: ";
					cin >> balance;

					for (int i = 0; i < t1.size; i++) {

						if (t1.arr[i].getAccountNumber() == account_number) {
							t1.arr[i].setBalance(balance);
							break;
						}
					}
					break;
		}
		case 4: {
					cout << "ATM cash: " << t1.getCash() << endl;
					break;
		}
		case 5: {
					t1.showBalance();
					break;
		}
		case 6: {
					int new_size;
					cout << "Enter new size: ";
					cin >> new_size;
					t1.resize(new_size);
					break;
		}
		case 7: {
					int account_number;
					float withdraw;
					cout << "Enter account number: ";
					cin >> account_number;
					cout << "Enter withdrawal amount: ";
					cin >> withdraw;
					t1.withdrawAmount(account_number, withdraw);
					break;
		}
		case 0:
			break;
		default:
			cout << "Invalid choice" << endl;
		}
	} while (choice != 0);


	return 0;
}

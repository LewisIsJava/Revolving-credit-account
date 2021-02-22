// Revolving credit account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double accountBalance, minimumPay, interest{0}, totalAmmount{0};
	const int overOnethousand = 150;
	char loop;
	cout << "Would you like your interest due, total amount due, and minimum payment to be computed ?" << endl << "If so type Y for yes and if not type N for no: ";
	cin >> loop;

	cout << "Please enter your account balance: $";
	cin >> accountBalance;
	while (loop == 'Y' || loop == 'y')
	{
		if (accountBalance <= 1000)
		{
			interest = accountBalance * 0.15;
			totalAmmount = accountBalance + interest;
			
		}
		else if (accountBalance > 1000)
		{
			accountBalance + overOnethousand; // this is for the intial 1.5% interest due on the $1000, anything over this only has a 1% interest
			interest = accountBalance * 0.10;
			totalAmmount = accountBalance + interest;
		   
		}
		cout << "Your interest ammount is $" << interest << endl;
		cout << "And your total ammount is $" << totalAmmount << endl;
		minimumPay = accountBalance * 0.10;
		cout << "And your minimum payment is $" << minimumPay << endl;
		cout << endl;
		cout << "Would you like to run this program again type Y for yes and N for no: ";
		cin >> loop;

	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

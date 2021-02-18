using namespace std;
#include <iostream>
#include "names.h"

//This program prompts user to enter number of coins and then reports the inputs and values

int money()
{

	//define coin variables;
	int pennies, nickels, dimes, quarters, loonies;

	//variable to convert the coins to a $ value
	double value;


	//ask user for coin input

	cout << "--------Please Enter Your Number of Coins--------\n";

	cout << "\nHow many Pennies do you have? \n";
	cin >> pennies;

	cout << "How many Nickels do you have? \n";
	cin >> nickels;

	cout << "How many Dimes do you have? \n";
	cin >> dimes;

	cout << "How many Quarters do you have? \n";
	cin >> quarters;

	cout << "How many One-Dollar coins do you have? \n";
	cin >> loonies;

	
	//output
	if (pennies == 1) {
		cout << "\n You have " << pennies << " penny.\n";
	}
	else
		cout << "You have " << pennies << " pennies.\n";
	
	if (nickels == 1) {
		cout << "You have " << nickels << " nickel.\n";
	}
	else
		cout << "You have " << nickels << " nickels.\n";

	if (dimes == 1) {
		cout << "You have " << dimes << " dime.\n";
	}
	else
		cout << "You have " << dimes << " dimes.\n";

	if (quarters == 1) {
		cout << "You have " << quarters << " quarter.\n";
	}
	else
		cout << "You have " << quarters << " quarters.\n";

	if (loonies == 1) {
		cout << "You have " << loonies << " One-Dollar Coin.\n";
	}
	else
		cout << "You have " << loonies << " One-Dollar Coins.\n";


	//take coins and turn them into $ value 
	value = (pennies * .01) + (nickels * .05) + (dimes * .1) + (quarters * .25) + (loonies * 1);

	//printing total value of coins
	cout << "The value of all your coins is $" << value;
	return 0;
}
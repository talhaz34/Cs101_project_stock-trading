#include<iostream>
#include<fstream>
using namespace std;

void welcome_message() {
	cout << "Welcome!" << endl;
	cout << "This project demonstrates basic programming concepts in C++."
	<< endl << "2025638" << endl << "2025018" << endl << "2025567" << endl << endl;
}

void display_menu() {
	cout << "==========================================" << endl;
	cout << "      Stock trading analysis system      " << endl;
	cout << "==========================================" << endl;
	cout << "1. Load stock data:" << endl;
	cout << "2. Display all stocks" << endl;
	cout << "3. analyze stocks" << endl;
	cout << "4. Exit" << endl << endl;
}

void display_secondary_menu() {
	cout << "-------------------------------" << endl;
	cout << "      Stock analysis options      " << endl;
	cout << "-------------------------------" << endl;
	cout << "1. Display highest price stock" << endl;
	cout << "2. Display lowest price stock" << endl;
	cout << "3. Display average price of stocks" << endl;
}


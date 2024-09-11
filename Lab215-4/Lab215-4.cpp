// Lab215-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from

void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {

	int A(0), sum(1);
	cout << "Please enter a number: ";
	cin >> A;

	//check for negative and insult the user
	while (A < 1) {
		cout << "No, you are a knob. Factorial must be positive." << endl;
		cout << "Please enter a number: ";
		cin >> A;
	}
	
	while (A >= 1) {
		sum = sum * A;
		//last term is sum
		if (A == 1) {
			cout << sum << endl;
			A = A - 1;
		}
		//add equal sign in 2nd to last term 
		else if (A == 2) {
			cout << A << " = ";
			A = A - 1;
		}
		//factorial operation
		else {
			cout << A << " * ";
			A = A - 1;
		}
		
	}
}
void arithmetic() {
	int start(0), diff(0), num(0), sum(0);
	cout << "Please enter a starting number: ";
	cin >> start;
	cout << "Please enter a number to add each time: ";
	cin >> diff;
	cout << "Please enter the number of elements in the series:";
	cin >> num;

	//check for negative and insult the user
	while (num < 1) {
		cout << "No, you are a knob. Number of elements must be positive." << endl;
		cout << "Please enter the number of elements in the series:";
		cin >> num;
	}

	while (num >= 0) {
		//last term is sum
		if (num == 0) {
			cout << sum << endl;
			num = num - 1;
		}
		//add equal sign in 2nd to last term
		else if (num == 1) {
			cout << start << " = ";
			sum = sum + start;
			num = num - 1;
		}
		//arithmetic series operation
		else {
			cout << start << " + ";
			sum = sum + start;
			start = start + diff;
			num = num - 1;
		}
	}
}
void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
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

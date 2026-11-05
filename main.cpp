#include <iostream>
using namespace std;

int main() {

	int Select;
	int Password = 1453;
	int i1;
	int Try = 3;

	cout << "========================" << endl;
	cout << "PASSWORD SYSTEM" << endl;
	cout << "========================" << endl;
	cout << endl;

	cout << "[1] Login" << endl;
	cout << "[2] Change Password" << endl;
	cout << "[3] Exit" << endl;
	cout << endl;
	cout << "Select:";

	cin >> Select;

	switch (Select) {

	case 1:
		
		cout << "Login selected!" << endl;
		cout << endl;
		while (Try > 0) {

		
		cout << "enter password: ";
		cin >> i1;

		if (i1 == Password) {
					cout << endl;
					cout << "Login successful!"<< endl;
					break;
		}

		else {
			cout << "Incorrect password!"<< endl;
			cout << endl;
			Try--;
			cout << "Try it " << Try << " more" << endl;
		}
		
		}
		if (Try == 0) {
			cout << "Access denied!" << endl;
			cout << "Too many incorrect attempts." << endl;
			break;
		}
		break;

	case 2:
		cout << "Change Password selected!"<< endl;
		cout << "Please enter new Password: ";
		cin >> Password;
		cout << endl;
		cout << "Password changed successfully!";
		break;
	
	case 3:
		cout << "Exiting...";
		break;
	default: 
		cout << "Invalid selection!";
		break;
	}
	cout << endl;
	

}

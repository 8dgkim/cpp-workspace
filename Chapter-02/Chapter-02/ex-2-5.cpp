#include <iostream>
#include <cstring>
using namespace std;

int main_ex_2_5()
{
	char password[100];
	cout << "Type password to end the program." << endl;
	while (true) {
		cout << "Password >> ";
		cin >> password;
		if (strcmp(password, "passcode") == 0) {
			cout << "Ending the program." << endl;
			break;
		}
		else
			cout << "Wrong password." << endl;
	}
	return 0;
}
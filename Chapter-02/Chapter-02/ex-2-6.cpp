#include <iostream>
using namespace std;

int main_ex_2_6()
{
	char address[100];

	cout << "Type your address >>";
	cin.getline(address, 100, '\n');

	cout << "Your address is " << address << ".\n";

	return 0;
}
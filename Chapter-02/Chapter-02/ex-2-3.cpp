#include <iostream>
using namespace std;

int main_ex_2_3()
{
	cout << "Enter width >> ";
	
	int width;
	cin >> width;

	cout << "Enter height >> ";

	int height;
	cin >> height;

	int area = width * height;
	cout << "Area: " << area << "\n";

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main_ex_2_7()
{
	string song("Rap God");
	string eminem("Eminem");
	string singer;

	cout << "Who is the singer of the song " + song << "? ";
	cout << "(Hint: The first letter is " << eminem[0] << ")\n";

	getline(cin, singer);
	if (singer == eminem)
		cout << "Correct!\n";
	else
		cout << "Wrong! It is " + eminem + ".\n";

	return 0;


}

# include <iostream>
#include <string>
using namespace std;

int main()
{
	string FIRST;       //person's first name
	string LAST;		 //person's last name
	char MIDDLE;       // person's middle intial
	float MONEY;           // persons money
	int HEIGHT;           // person's hieght
	const int DIVISOR = 100;

	cout << "Hello, what is your first name? ";
	cin >> FIRST;
	cout << "you entered " << FIRST << endl << endl ;
	
	cout << "What is your middle initial? ";
	cin >> MIDDLE;
	cout << "you entered " << MIDDLE << endl << endl; 

	cout << "What is your last name? ";
	cin >> LAST;
	cout << "you entered " << LAST << endl << endl; 

	cout << "Enter your hieght in centimeters? ";
	cin >> HEIGHT ;
	cout << "your hieght in meters is " << HEIGHT/DIVISOR <<  " meters" << endl << endl;
	
	cout << "Enter your income in cents, Example: enter 500 = $5.00 " << endl;
	cin >> MONEY;
	cout << "Your income in dollars is $" << MONEY / DIVISOR << endl << endl;

	system("pause");
	return 0;

}


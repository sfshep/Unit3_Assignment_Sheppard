/* Stewart Sheppard
   COSC 1436-57002
   Text Editor: Repl.it
   This is a program to work with the various arithmetic operators in C++ and conditions.  User will enter in 4 numbers and receive in return the additon, subtaction, multiplication and division of the first two numbers, then the remainder of the third and forth numbers.
*/
#include <iostream>
using namespace std;

int main ()
{
double number1, number2, addition,subtraction, multiplication, division; 
int number3, number4, modulus;

//Input - ask user to input numbers.
  cout << "Please enter Number 1: ";
  cin >> number1;
	cout << "Please enter Number 2: ";
  cin >> number2;
	cout << "Please enter Number 3 that is an integer (no decimals): ";
  cin >> number3;
	cout << "Please enter Number 4 that is an integer (no decimals): ";
	cin >> number4;

//Process
addition = number1 + number2;
subtraction = number1 - number2;
multiplication = number1 * number2;
division = number1 / number2;
modulus = number3 % number4;

//Output - the values of operators
  cout << "\n \n";
	cout << "The addition of the number 1 and number 2 equals " << addition << ".\n";
	cout << "The subtraction of the number 2 from number 1 equals " << subtraction << ".\n";
	cout << "The multiplication of the number 1 by number 2 equals " << multiplication << ".\n";
	cout << "The division of the number 1 by number 2 equals " << division << ".\n";
	cout << "The remainder of the number 3 divided by number 4 equals " << modulus << ".\n";


return 0;
}
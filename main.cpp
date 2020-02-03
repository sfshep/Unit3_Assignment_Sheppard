/* Stewart Sheppard
   COSC 1436-57002
   Text Editor: Repl.it
   This is a program to work with the various arithmetic operators in C++ and conditions.  User will enter in 4 numbers and receive in return the additon, subtaction, multiplication and division of the first two numbers, then the remainder of the third and forth numbers.
*/
#include <iostream>
using namespace std;

int main ()
{
double number1, number2, addition, subtraction, multiplication, division; 
int number3 = 0;
int number4 = 0;
int modulus = 0;

//Input - ask user to input numbers.
  cout << "Please enter Number 1: ";
  cin >> number1;
	cout << "Please enter Number 2: ";
  cin >> number2;
  while (number2 <= 0)
      {
        cout << "The number 0 can not be used for division, please enter in a number greater than 0. ";
        cout << "Please enter Number 2: ";
        cin >> number2;
      }  

	cout << "Please enter Number 3 that is an integer (no decimals): ";
  cin >> number3;
  cout << "Please enter Number 4 that is an integer (no decimals): ";
	cin >> number4;
  while (number4 <= 0)
      {
        cout << "The number 0 can not be used for division, please enter in a number greater than 0. ";
        cout << "Please enter Number 4: ";
        cin >> number4;
      }  

//Process - perform calculations
addition = number1 + number2;
subtraction = number1 - number2;
multiplication = number1 * number2;
division = number1 / number2;
modulus = number3 % number4;

//Output - the values of operators
  cout << "\n \n";
	cout << "The addition of Number 1 and Number 2 equals " << addition << ".\n";
	cout << "The subtraction of Number 2 from Number 1 equals " << subtraction << ".\n";
	cout << "The multiplication of  Number 1 by Number 2 equals " << multiplication << ".\n";
	cout << "The division of  Number 1 by Mumber 2 equals " << division << ".\n";
	cout << "The remainder of  Number 3 divided by Number 4 equals " << modulus << ".\n";


return 0;
}
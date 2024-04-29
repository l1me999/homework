#include <iostream> 
using namespace std;

int main() {
	double number1, number2;
	char operation;
	cout << "Enter two numbers: ";
	cin >> number1 >> number2;

	cout << "Enter the sign (+, -, *, /): ";
	cin >> operation;

	switch (operation)
	{
	case '+':
		cout << "Answer: " << number1 + number2;
		break;
	case '-':
		cout << "Answer: " << number1 - number2;
		break;
	case '*':
		cout << "Answer: " << number1 * number2;
		break;
	case '/':
		if (number2 == 0) {
			cerr << "Error when dividing by zero";
		}
		else {
			cout << "Answer: " << number1 / number2;
		}
		break;
	default:
		cerr << "Incorrectly entered sign";
		break;
	}

	return 0;
}
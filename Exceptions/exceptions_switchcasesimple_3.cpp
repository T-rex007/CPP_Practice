#include <iostream>
#include <string>
using namespace std;

int main()
{
	double Operand1, Operand2, Result;
	char Operator;

	cout << "This program allows you to perform an operation on two numbers\n";

	try {
		cout << "To proceed, enter a number, an operator, and a number:\n";
		cin >> Operand1 >> Operator >> Operand2;

		if(Operator != '+' && Operator != '-' &&
		   Operator != '*' && Operator != '/')
			throw Operator;

		switch(Operator)
		{
		case '+':
			Result = Operand1 + Operand2;
			break;

		case '-':
			Result = Operand1 - Operand2;
			break;

		case '*':
			Result = Operand1 * Operand2;
			break;

		case '/':
			Result = Operand1 / Operand2;
			break;
		}

		cout << "\n" << Operand1 << " " << Operator << " "
			 << Operand2 << " = " << Result;
	}
	catch(const char n)
	{
		cout << "\nOperation Error: " << n << " is not a valid operator";
	}

	cout << "\n\n";
	return 0;
}
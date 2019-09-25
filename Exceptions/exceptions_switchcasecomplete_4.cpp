#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char Number1[40], Number2[40];
	double Operand1, Operand2, Result;
	char Operator;

	// Request two numbers from the user
	cout << "This program allows you to perform a division of two numbers\n";
	cout << "To proceed, enter two numbers\n";

	//Place execution code in try
	try {
		cout << "First Number:  ";
		cin >> Number1;
		cout << "Operator:      ";
		cin >> Operator;
		cout << "Second Number: ";
		cin >> Number2;

		// Examine each character of the first operand
		// to find out if the user included a non-digit in the number
		for(int i = 0; i <strlen(Number1); i++)
		    if( (!isdigit(Number1[i])) && (Number1[i] != '.') ) // Allow the period
			throw Number1;// Send the error as a string

		Operand1 = atof(Number1);

		// Do the same for the second number entered
		for(int j = 0; j < strlen(Number2); j++)
		    if( (!isdigit(Number2[j])) && (Number2[j] != '.') ) // Allow the period
			throw Number2;// Send the error as a string

		Operand2 = atof(Number2);

		// Make sure the user typed a valid operator
		if(Operator != '+' && Operator != '-' &&
		   Operator != '*' && Operator != '/')
			throw Operator;

		// Find out if the denominator is 0
		if(Operator == '/')
			if(Operand2 == 0)
				throw 0;

		// Perform an operation based on the user's choice
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

		// Display the result of the operation
		cout << "\n" << Operand1 << " " << Operator << " "
		     << Operand2 << " = " << Result << "\n\n";
	}

	//Begin catch statements
	catch(const int n)
	{

		cout << "\nBad Operation: Division by " << n << " not allowed\n\n";
	}
	catch(const char n)
	{
		cout << "\nOperation Error: " << n << " is not a valid operator\n\n";
	}
	catch(const char *BadOperand)
	{
		cout << "\nError: " << BadOperand << " is not a valid number\n\n";
	}

	return 0;
}
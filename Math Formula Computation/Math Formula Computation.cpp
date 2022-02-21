#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <windows.h>
#include "Shapes.h" // Shape class
using namespace std;
void creditandversion();
void mainMenu();
void pythagoreanFormulaMenu();
void quadraticFormula();
void logarithmMenu();
void trignometricFunctions();
void average();
void median();
void arithmeticMenu();
void addition();

int main()
{
	creditandversion();
	mainMenu();
	system("pause");
	return 0;
}

void creditandversion()
{
	cout << "	   Formula Calculator \n";
	cout << "		 Version 1.0 \n";
	cout << " Last Updated on 04/23/2019 \n";
	cout << "      Made by Kevin Do \n";
	cout << " Feel free to contact me at  youremail@email.com\n";
	cout << endl;
}

void mainMenu()
{
	int choiceA;
	cout << " 1 - Pythagorean Formula \n";
	cout << " 2 - Quadratic Formula \n";
	cout << " 3 - logarithm \n";
	cout << " 4 - Trignometric Function \n";
	cout << " 5 - Average \n";
	cout << " 6 - Additions \n";
	cout << "-1 - Exit the program \n";
	cout << "Enter the forumla that you want to compute:";
	cin >> choiceA;
	switch (choiceA)
	{
	case -1: 
		exit(0);
		break;
	case 1: 
		pythagoreanFormulaMenu();
		break;
	case 2:
		quadraticFormula();
		break;
	case 3: 
		logarithmMenu();
		break;
	case 4: 
		trignometricFunctions();
		break;
	case 5:
		average();
		break;
	case 6:
		addition();
		break;
	default:
		cout << "Please enter one of the number above: ";
		break;
	}
}

void pythagoreanFormulaMenu()
{
	char choiceB;
	double a, b, c;
	cout << "      *  \n";
	cout << "     **  \n";
	cout << " c  ***  \n";
	cout << "   **** b\n";
	cout << "  *****  \n";
	cout << " ******  \n";
	cout << "*******  \n";
	cout << "   a     \n";
	cout << "Enter H if you are looking for the hypotenuse or L if you are looking for one of the legs: ";
	cin >> choiceB;
	switch (choiceB)
	{
	case 'h': 
	{
		cout << "Enter the first leg: ";
		cin >> a;
		if (a <= 0)
		{
			cout << "The leg must be positive. Enter a valid number: \n";
			cin >> a;
		}
		cout << "Enter the second leg: ";
		cin >> b;
		if (b <= 0)
		{
			cout << "The leg must be positive. Enter a valid number : \n";
			cin >> b;
		}
		c = sqrt(pow(a, 2) + pow(b, 2));
		cout << "The hypotenuse is " << setprecision(3) << c << endl << endl;
		system("pause");
		system("CLS");
		main();
	}
	default:
		cout << "Enter the value of one of the legs \n";
		cin >> c;
		break;
	}
}

void quadraticFormula()
{
	double a, b, c, root;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	cout << "Enter C: ";
	cin >> c;
	while (a != 0)
	{
		double root = pow(b, 2) - (4 * a * c);
		double quadraticAdding = (-b + sqrt(root)) / (2 * a);
		double quadraticSubtracting = (-b - sqrt(root)) / (2 * a);
		cout << "    .------------ \n";
		cout << "-" << b << "+\/" << b << "^2 " << "- 4(" << a << ")" << "(" << c << ") \n";
		cout << "----------------- \n";
		cout << "      2(" << a << ") \n";
		if (root < 0)
			cout << "The solution is imaginary. \n \n";
		else
			cout << "The formula above is " << quadraticAdding << endl << endl;
		cout << "    .------------ \n";
		cout << "-" << b << "-\/" << b << "^2 " << "- 4(" << a << ")" << "(" << c << ") \n";
		cout << "----------------- \n";
		cout << "      2(" << a << ") \n";
		if (root < 0)
			cout << "The solution is imaginary. \n";
		else
			cout << "The formula above is " << quadraticSubtracting << endl << endl;
		system("pause");
		system("CLS");
		main();
	}
	cout << "Your answer is undefined. \n\n";
	system("pause");
	system("CLS");
	main();
}

void logarithmMenu()
{
	int choiceC, numA;
	double result;
	cout << "1 - Logarithm with the base 10 \n";
	cout << "2 - Natural Logarithm \n";
	cout << "Enter the following number you are trying to find: ";
	cin >> choiceC;
	switch (choiceC)
	{
	case 1: 
		cout << "Enter the number: ";
		cin >> numA;
		result = log10(numA);
		cout << "The logarithm with base 10 of " << numA << " is " << result << endl;
		break;
	case 2:
		cout << "Enter the number: ";
		cin >> numA;
		result = log(numA);
		cout << " The Natural Logarithm of " << numA << " is " << result << endl;
		break;
	default:
		cout << "Please Enter one of the numbers above: ";
		cin >> choiceC;
		break;
	}
	system("pause");
	system("CLS");
	main();
}

void trignometricFunctions()
{
	int choice;
	double numA,result;
	cout << "1 - Sine \n";
	cout << "2 - Cosine \n";
	cout << "3 - Tangent \n";
	cout << "4 - Cosecant(csc) \n";
	cout << "5 - Secant(sec) \n";
	cout << "6 - Cotangent(cot) \n";
	cout << "Enter the trignometric function you would like to find: ";
	cin >> choice;
	switch (choice)
	{
	case 1: 
		cout << "Enter the number(in radians) to get it sine: ";
		cin >> numA;
		result = sin(numA);
		cout << "The sine of " << numA << " is " << result << endl;
		system("pause");
		system("CLS");
		main();
		break;
	case 2:
		cout << "Enter the number(in radians) to get it cosine: ";
		cin >> numA;
		result = cos(numA);
		cout << "The cosine of " << numA << " is " << result << endl;
		system("pause");
		system("CLS");
		main();
		break;
	case 3:
		cout << "Enter the number(in radians) to get it tangent: ";
		cin >> numA;
		result = tan(numA);
		cout << "The tangent of " << numA << " is " << result << endl;
		system("pause");
		system("CLS");
		main();
		break;
	case 4:
		cout << "Enter the number(in radians) to get it cosecant: ";
		cin >> numA;
		result = 1 / sin(numA);
		cout << "The cosecant of " << numA << " is " << result << endl;
		system("pause");
		system("CLS");
		main();
		break;
	case 5:
		cout << "Enter the number(in radians) to get it secant: ";
		cin >> numA;
		result = 1 / cos(numA);
		cout << "The secant of " << numA << " is " << result << endl;
		system("pause");
		system("CLS");
		main();
		break;
	case 6:
		cout << "Enter the number(in radians) to get it cotangent: ";
		cin >> numA;
		result = 1 / tan(numA);
		cout << "The cotangent of " << numA << " is " << result << endl;
		system("pause");
		system("CLS");
		main();
		break;
	default: 
		cout << "Please Enter the number in the list. \n";
		trignometricFunctions();
		break;
	}
}

void average()
{
	int counter;
	double result, sumtotal = 0, number;
	cout << "Enter the number of inputs you are entering: ";
	cin >> counter;
	cout << "Enter the number: \n";
	for (int i = 0; i < counter; i++)
	{
		cin >> number;
		sumtotal += number;
	}
	result = sumtotal / counter;
	cout << "Your average is " << result << endl << endl;
	system("pause");
	system("CLS");
	main();
}

void median()
{
	const int num = 1;
	int numList[num];
	cout << "indevelopment" << endl;
}

void arithmeticMenu()
{
}
void addition()
{
	int NumOfInput;
	float total = 0,Input;
	cout << "How many numbers will you put in?" << endl;
	cin >> NumOfInput;
	cout << "Please enter " << NumOfInput << " Numbers: "  << endl;
	for (int i = 0; i < NumOfInput; i++)
	{
		cin >> Input;
		total += Input;
	}
	cout << "Your total sum is " << total << endl;
	system("Pause");

	main();

}

void subtraction()
{
	double total = 0;
	double value;
	int amount;
	cout << "Please enter the amount of numbers you are subtracting: ";
	cin >> amount;
	cout << "Please enter the values: \n";
	for (int i = 0; i < amount; i++)
	{
		cin >> value;
		total = total - value;
	}
	cout << "Your total value is: " << total << endl;
}

void multiplication()
{
	double total;
	cout << "InDevelopment" << endl;
}

void division()
{
	double numerator, denominator;
	cout << "Please enter the numerator: ";
	cin >> numerator;
	cout << "Please enter the denominator: ";
	cin >> denominator;
	if (denominator == 0)
	{
		cout << "You cannot divide a number by zero,please enter a  non-zero integer";
		cin >> denominator;
	}
	//MainMenu();
}

void Circumference()
{
	
}
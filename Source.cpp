#include <iostream>
#include <conio.h>
using namespace std;

void main()
{

	//Initializing Variables
	int Numerator1 = 0, Numerator2 = 0, Denominator1 = 0, Denominator2 = 0, FinalNumerator = 0, FinalDenominator = 0, Divider = 0;
	char  opt;

	//Taking Inputs
	cout << "Please Enter The Numerator Of Fraction 1:-  ";
	cin >> Numerator1;
	cout << "Please Enter The Denominator Of Fraction 1:-  ";
	cin >> Denominator1;
	cout << "Please Enter The Operator ( + - * / ):-  ";
	cin >> opt;
	cout << "Please Enter The Numerator Of Fraction 2:-  ";
	cin >> Numerator2;
	cout << "Please Enter The Denominator Of Fraction 2:- ";
	cin >> Denominator2;

	//Checking Conditions For Operator Used
	if (opt == '+')
	{
		FinalNumerator = (Numerator1*Denominator2) + (Numerator2*Denominator1);
		FinalDenominator = (Denominator1*Denominator2);
		//Calculating The Lowest Fraction & Finding Undefined Fraction
		Divider = FinalDenominator;
		while (Divider >= 2)
		{
			if (FinalNumerator%Divider == 0 && FinalDenominator%Divider == 0)
			{
				FinalNumerator = FinalNumerator / Divider;
				FinalDenominator = FinalDenominator / Divider;
			}
			else
			{
				Divider--;
			}
		}
		if (FinalDenominator == 0)
		{
			cout << "The Answer Is Undefined";
		}
		else
		{
			cout << "The Answer Is " << FinalNumerator << "/" << FinalDenominator;
		}
	}
	else if (opt == '-')
	{
		FinalNumerator = (Numerator1*Denominator2) - (Numerator2*Denominator1);
		FinalDenominator = (Denominator1*Denominator2);
		//Calculating The Lowest Fraction & Finding Undefined Fraction
		Divider = FinalDenominator;
		while (Divider >= 2)
		{
			if (FinalNumerator%Divider == 0 && FinalDenominator%Divider == 0)
			{
				FinalNumerator = FinalNumerator / Divider;
				FinalDenominator = FinalDenominator / Divider;
			}
			else
			{
				Divider--;
			}
		}
		if (FinalDenominator == 0)
		{
			cout << "The Answer Is Undefined";
		}
		else
		{
			cout << "The Answer Is " << FinalNumerator << "/" << FinalDenominator;
		}

	}
	else if (opt == '*')
	{
		FinalNumerator = (Numerator1*Numerator2);
		FinalDenominator = (Denominator1*Denominator2);
		//Calculating The Lowest Fraction & Finding Undefined Fraction
		Divider = FinalDenominator;
		while (Divider >= 2)
		{
			if (FinalNumerator%Divider == 0 && FinalDenominator%Divider == 0)
			{
				FinalNumerator = FinalNumerator / Divider;
				FinalDenominator = FinalDenominator / Divider;
			}
			else
			{
				Divider--;
			}
		}
		if (FinalDenominator == 0)
		{
			cout << "The Answer Is Undefined";
		}
		else
		{
			cout << "The Answer Is " << FinalNumerator << "/" << FinalDenominator;
		}

	}

	else if (opt == '/')
	{
		FinalNumerator = (Numerator1*Denominator2);
		FinalDenominator = (Denominator1*Numerator2);
		//Calculating The Lowest Fraction & Finding Undefined Fraction
		Divider = FinalDenominator;
		while (Divider >= 2)
		{
			if (FinalNumerator%Divider == 0 && FinalDenominator%Divider == 0)
			{
				FinalNumerator = FinalNumerator / Divider;
				FinalDenominator = FinalDenominator / Divider;
			}
			else
			{
				Divider--;
			}
		}
		if (FinalDenominator == 0)
		{
			cout << "The Answer Is Undefined";
		}
		else
		{
			cout << "The Answer Is " << FinalNumerator << "/" << FinalDenominator;
		}

	}
	else
	{
		cout << "Invalid Operator";
	}

	_getch();

}
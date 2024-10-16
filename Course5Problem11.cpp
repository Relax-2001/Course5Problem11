#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;

	while (Number > 0)
	{

		Remainder = Number % 10;
		Number = Number / 10;

		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
}

bool CheckPalindromeNumber(int Number )
{

	return (ReverseNumber(Number) == Number);

}

int main()
{

	int NumberToCheck = ReadPositiveNumber("Enter a positive number");

	if (CheckPalindromeNumber(NumberToCheck))
	
		cout << "Yes, umber " << NumberToCheck << " is palindrome\n";
	else
		cout << "No, number " << NumberToCheck << " is not palindrome\n";

	
	return 0;
}

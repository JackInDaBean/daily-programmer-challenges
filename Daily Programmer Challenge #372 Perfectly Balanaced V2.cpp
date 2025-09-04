///////////////////////////////////////////////////////////////
///                                                         ///
///      Author      : { Jake Harvey / JackInDaBean }       ///
///      Created     : { 31 / 08 / 25 }                     ///
///      Description : { Daily Programmer Challenge #372    ///
///                                                         ///
/////////////////////////////////////////////////////////////// 

#include <iostream>
#include <string>

// Function Headers
void welcomeMessage();
void balanceCheck(std::string stringInBalanceCheck);

// Main

int main()
{
	bool programRunning = true;

	while (programRunning)
	{
		std::string userInputtedString;

		welcomeMessage();
		std::cin >> userInputtedString;
		for (char i : userInputtedString)
		{
			if ((i != 120) || (i != 121))
			{
				std::cout << "\n\nERROR: STRING MUST BE EITHER x OR y - TRY AGAIN: ";
				std::cin >> userInputtedString;
			}
		}

		balanceCheck(userInputtedString);
	}
}

// Function Defintions
void welcomeMessage()
{
	std::cout << "\t\t----------------------------------------------------";
	std::cout << "\n\t\tDaily Programmer Challenge #372 - Perfectly Balanced";
	std::cout << "\n\t\t----------------------------------------------------";
	std::cout << "\n\n\t\tPlease enter a string consisting of 'x' and 'y'.";
	std::cout << "\n\t\tThis program will count the amount of each letter and then display wether it balances or not.";
	std::cout << "\n\n";
	std::cout << "\t\tPlease enter the string to be balance checked: ";
}

void balanceCheck(std::string stringInBalanceCheck)
{
	int countForX = 0, countForY = 0, resultOfCheck;

	for (char i : stringInBalanceCheck)
	{
		if (i == 120) // x ASCII = 120
		{
			countForX++;
		}
		if (i == 121)
		{
			countForY++; // y ASCII = 121
		}
	}

	// Arithmetic for Switch statement, seemed confusing so explanation needed.
	if ((countForX == 0) && (countForY > 0)) // X and Y are not equal & X = 0 - Balanced.
	{
		resultOfCheck = 1;
	}
	else if ((countForY == 0) && (countForX > 0)) // X and Y are not equal & Y = 0 - Balanced.
	{
		resultOfCheck = 1;
	}
	else if (countForX == countForY) // X and Y are equal = 1 - Balanced.
	{
		resultOfCheck = 1;
	}
	else if (countForX != countForY) // X and Y are not equal = 0 - Unbalanced.
	{
		resultOfCheck = 0;
	}


	switch (resultOfCheck)
	{
	case 0:
		std::cout << "\n\nThe string: " << stringInBalanceCheck << " is unbalanced\n\n";
		break;
	case 1:
		std::cout << "\n\nThe string: " << stringInBalanceCheck << " is balanced!\n\n";
		break;
	}
}

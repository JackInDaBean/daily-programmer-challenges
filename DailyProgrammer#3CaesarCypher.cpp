///////////////////////////////////////////////////////////////
///                                                         ///
///      Author      : { Jake Harvey / JackInDaBean }       ///
///      Created     : { 21 / 08 / 25 }                     ///
///      Description : { Daily Programmer Challenge #3      ///
///                                                         ///
///////////////////////////////////////////////////////////////                                                          
 
// Included Header
#include <iostream>
#include <string>
#include <limits>

// Function Definition

int SecretShiftNum();

void PositiveCypherShift(int Shift);
void NegativeCypherShift(int Shift);

static std::string GetCypherPlainText();

int main()
{
	bool ProgramRunning = true; // Makes the program repeat once the main shifting is finished - works as while running is always true.
	while (ProgramRunning)
	{
		// Main console heading when program is running
		std::cout << "\t\t-------------------------------------------------";
		std::cout << "\n\t\tThis program will encode a message of your choice";
		std::cout << "\n\t\t     We will encode with a Caesar Cypher";
		std::cout << "\n\t\t-------------------------------------------------" << std::endl;
		std::cout << std::endl;

		int ShiftKey = SecretShiftNum(); // Get shift number
		std::cout << "\nThe Shift Key is: " << ShiftKey << std::endl; // ---- FOR TESTING

		if (ShiftKey > 0) // Greater than 0 - positive cypher shift
		{
			PositiveCypherShift(ShiftKey);
		}

		if (ShiftKey < 0) // Less than 0 - negative cypher shift
		{
			NegativeCypherShift(ShiftKey);
		}
	}
}

// Function Body
int SecretShiftNum() // Gets the user to input the caesar shift number - function then returns the number.
{
	int SecretNum;
	while (true)
	{
		std::cout << "Please enter the 'Secret' shift number: ";
		if (std::cin >> SecretNum) // If the input is invalid, e.g. not a number - then the function will repeat until a correct number is entered.
		{
			return SecretNum; // Input was successful - integer returned to main.
		}
		else
		{
			// Input unsuccessful - 
			std::cout << "\nERROR: invalid input - Please enter the 'Secret' shift number: ";
			std::cin.clear(); // Clears error flags on the std::cin 
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discards remaining characcters in the input buffer up to the newline
		}
	}
}

static std::string GetCypherPlainText()
{
	std::string CipherText;
	std::cout << "\nPlease enter the message that you wish to have encoded: ";
	std::cin >> CipherText; // Get the entire plain text - up to 100 characters
	std::cout << std::endl;
	return CipherText;
}

void PositiveCypherShift(int Shift)
{
	std::string CipherText;

	CipherText = GetCypherPlainText(); // Get uncoded plain cypher text

	for (int i = 0; i < CipherText.size(); i++) // Convert into lowercase
	{
		if ((CipherText[i] < 91) && (CipherText[i] > 64)) // Checks if the ASCII code falls in the uppercase range
		{
			CipherText[i] += 32; // If it falls in the uppercase range - converted to lowercase
		}
	}

	for (int i = 0; i < CipherText.size(); i++)
	{
		if ((CipherText[i] + Shift) > 122) // Checks to see if the key + text goes above 122 which is 'z' - out of range
		{
			CipherText[i] = ((CipherText[i] + Shift) - 26); // If it is out of range then it subtracts 26 to wrap around back to the start of the alphabet
		}
		else if (CipherText[i] == 32) // Equals 'space' - these are left alone
		{
			continue;
		}
		else if (CipherText[i] == '\0') // Equals \0 null then this is the end of the text so break
		{
			break;
		}
		else
		{
			CipherText[i] += Shift; // character is in range - shift key is added
		}
	}

	std::cout << "The final coded message is: " << CipherText << std::endl;
}




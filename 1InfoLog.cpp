///////////////////////////////////////////////////////////////
///      Daily Programmer Challenge #1  JackInDaBean        ///
/////////////////////////////////////////////////////////////// 

// Included Headers
#include <iostream>
#include <fstream>
#include <string>

int main()
{

	// Local Variable Declaration
	std::ofstream outfile;
	std::string FirstName, Surname, Age, Username;

	outfile.open("info-log.txt"); // Opens the txt file

	if (outfile.is_open()) // Checks if the file is open
	{
		std::cout << "Please enter your first name: ";
		std::cin >> FirstName;
		outfile << FirstName << " ";

		std::cout << "\nPlease enter your surname: ";
		std::cin >> Surname;
		outfile << Surname << std::endl;

		std::cout << "\nPlease enter your age: ";
		std::cin >> Age;
		outfile << Age << std::endl;

		std::cout << "\nPlease enter your Reddit username: ";
		std::cin >> Username;
		outfile << Username << std::endl;

		std::cout << "\nYour full name is: " << FirstName << " " << Surname << "." << "\nYou are " << Age << " years old.";
		std::cout << "\nYour Reddit username is: " << Username << ".";

		outfile.close(); // Closes the file

		return 0;

	} else {
		std::cout << "ERROR: File not found.";
	}

}

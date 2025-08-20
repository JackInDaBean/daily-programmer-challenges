///////////////////////////////////////////////////////////////
///      Daily Programmer Challenge #2  JackInDaBean        ///
/////////////////////////////////////////////////////////////// 

// Included Headers
#include <iostream>

// Function Signatures
void CalculateForce();
void CalculateMass();
void CalculateAcceleration();
void EntryValidation();
void EquationSelection();

// Only Global Variable - acceptable as it is only for an equation choice and won't mess with anything.
int CalculationChoice;

// Main Program Section
int main()  
{
	bool ProgramRunning = true;
	while (ProgramRunning) {
		EquationSelection();
	}
}

// Function Bodies
void EntryValidation() // Checks the choice of calculation and if it falls outside of the accepted answer scope - choices are 1 - 3, anything less or more repeats question.
{
	while ((CalculationChoice != 1) && (CalculationChoice != 2) && (CalculationChoice != 3))
	{
		EquationSelection();
	}
}

void CalculateForce() // Calculates Force - F = ma ( Force = mass * acceleration )
{
	float Force, Mass, Acceleration;
	std::cout << "-- Instructions to calculate Force (F) --\n1) Please enter the Mass in KG\n2) Hit space\n3) Enter the acceleration in M/s\n4) Press enter:\n";
	std::cin >> Mass >> Acceleration;
	Force = Mass * Acceleration;
	std::cout << "The result is " << Force << " Newtons." << std::endl;
}

void CalculateMass() // Calculate Mass - M = F/a ( Mass = Force / Acceleration )
{
	float Force, Mass, Acceleration;
	std::cout << "-- Instructions to calculate Mass (M) --\n1) Please enter the Force in Newtons\n2) Hit space\n3) Enter the acceleration in M/s\n4) Press enter:\n";
	std::cin >> Force >> Acceleration;
	Mass = Force / Acceleration;
	std::cout << "The result is " << Mass << "Kg" << std::endl;
}

void CalculateAcceleration() // Calculate Acceleration - A = F/m ( Acceleration = Force / Mass )
{
	float Force, Mass, Acceleration;
	std::cout << "-- Instructions to calculate Acceleration (A) --\n1) Please enter the Force in Newtons\n2) Hit space\n3) Enter the Mass in Kg\n4) Press enter:\n";
	std::cin >> Force >> Mass;
	Acceleration = Force / Mass;
	std::cout << "The result is " << Acceleration << "M/s" << std::endl;
}

void EquationSelection() // Choose equation wanted, runs data validation for choice then loads selected calculator.
{
	std::cout << "\t\t---------------------------------------------";
	std::cout << "\n\t\t-- Force, Mass and Acceleration Calculator --";
	std::cout << "\n\t\t---------------------------------------------";
	std::cout << "\n";
	std::cout << "\n\tIf you wish to calculate Force (F)        - please enter 1\n\n\tIf you wish to calculate Acceleration (A) - please enter 2";
	std::cout << "\n\n\tIf you wish to calculate Mass (M)         - please enter 3\n" << std::endl;
	std::cin >> CalculationChoice;
	EntryValidation();
	if (CalculationChoice == 1)
	{
		CalculateForce();
	}
	else if (CalculationChoice == 2)
	{
		CalculateAcceleration();
	}
	else if (CalculationChoice == 3)
	{
		CalculateMass();
	}
}

///////////////////////////////////////////////////////////////
///                                                         ///
///      Author      : { Jake Harvey / JackInDaBean }       ///
///      Created     : { 22 / 08 / 25 }                     ///
///      Description : { Daily Programmer Challenge #6      ///
///                                                         ///
///////////////////////////////////////////////////////////////  

// Goal - Calculate Pi to atleast 30 decimal places.

// Included headers
#include <iostream> // Input and output
#include <iomanip>  // For std::setprecision

int main() 
{
	const float Numerator = 4.0;
	double Denominator = 1.0, currentCalculation; // Numerator is always 4 for Gregory Leibniz series - numerator starts at 1.

	double piSum = 0.0;

	// For loop runs for 5 billion iterations as this many are required to calculate accurately to 30 decimals - lowering this gives pi accurately up to x amount of decimals

	for (int i = 1; i < 5000000000; i++) // Set i to equal 1 so that I can perform the % on i to check for positive or negative
	{
		currentCalculation = (Numerator / Denominator);
		Denominator += 2;

		if (i == 1) { // If the index number is 1 e.g. starting number then add current calculation and skip straight to the next iteration
			piSum = currentCalculation;
			continue; 
		}

		else if (i % 2 == 0) { // If the index number is positive then subtract the previous calculation.
			piSum -= currentCalculation;
		}

		else if (i % 2 != 0) { // If the index number is negative then add the previous calculation.
			piSum += currentCalculation;
		}
	}
	std::cout << std::fixed << std::setprecision(30) << piSum;
}

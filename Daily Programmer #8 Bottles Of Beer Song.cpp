///////////////////////////////////////////////////////////////
///                                                         ///
///      Author      : { Jake Harvey / JackInDaBean }       ///
///      Created     : { 26 / 08 / 25 }                     ///
///      Description : { Daily Programmer Challenge #8      ///
///                                                         ///
///////////////////////////////////////////////////////////////  

// Write a program to print the song "99 Bottles of Beer on the Wall" - do not allow the program to print each loop on a new line.

#include <iostream>

int main()
{
	for (int i = 99; i > -1; i--)
	{
		if (i > 2)
		{
			std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.";
			std::cout << " Take one down and pass it around, ";
			std::cout << i - 1 << " bottles of beer on the wall. ";
		}
		if (i == 2)
		{
			std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer";
			std::cout << " Take one down and pass it around, ";
			std::cout << i - 1 << " bottle of beer on the wall. ";
		}
		else if (i == 0)
		{
			std::cout << "No more bottles of beer on the wall, No more bottles of beer. ";
			std::cout << "Go to the store and buy some more, " << i + 99 << " bottles of beer on the wall.";
		}
	}
}
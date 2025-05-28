// Daily Programmer Challenge #1
// JackInDaBean

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()  {
    
    // Variable declaration

    ofstream outfile; 
    string PersonalFirstName, PersonalSecondName, Age, Username;

    outfile.open("info-log.txt"); // Open txt file

    if (outfile.is_open())  { // Check if the file is open
        cout << "Please enter your first name: ";
        cin >> PersonalFirstName;
        outfile << PersonalFirstName << " ";
        cout << "\nPlease enter your second name: ";
        cin >> PersonalSecondName;
        outfile << PersonalSecondName << endl;
        cout << "\nPlease enter your age: ";
        cin >> Age;
        outfile << Age << endl;
        cout << "\nPlease enter your Reddit username: ";
        cin >> Username;
        outfile << Username << endl;
        cout << "\nYour full name is: " << PersonalFirstName << " " << PersonalSecondName << "." << "\nYou are " << Age << " years old.\nYour Reddit username is: " << Username;

        outfile.close();
    
    return 0;
    } else {
        cout << "\nERROR: File not found.";
    }  
}


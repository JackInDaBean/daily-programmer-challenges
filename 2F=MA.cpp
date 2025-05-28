// Daily Programmer Challenge #2
// JackInDaBean

#include <iostream>
using namespace std;

int choice;

void ForceMassAcceleration();
void AccelerationForceMass();
void MassForceAcceleration();
void EntryValidation();

int main()  {
    cout << "If you wish to calculate Force (F) - please enter 1\nIf you wish to calculate Acceleration (A) - please enter 2\nIf you wish to calculate Mass (M) - please enter 3\n";
    cin >> choice;
    EntryValidation();
    if (choice = 1)  {
        ForceMassAcceleration();
    }
    else if (choice = 2)  {
        AccelerationForceMass();
    }
    else if (choice = 3)  {
        MassForceAcceleration();
    }
}

void ForceMassAcceleration()  {
    float Force, Mass, Acceleration;
    cout << "To calculate Force (F); please enter the Mass (M) followed by space, followed by the Acceleration (A): ";
    cin >> Mass >> Acceleration;
    Force = Mass * Acceleration;
    cout << Force << " Newtons";
}

void AccelerationForceMass()  {
    float Force, Mass, Acceleration;
    cout << "To calculate Acceleration (A); please enter the Force (F) followed by space, followed by the Mass (M): ";
    cin >> Force >> Mass;
    Acceleration = Force / Mass;
    cout << Acceleration << "m/s";
}

void MassForceAcceleration()  {
    float Force, Mass, Acceleration;
    cout << "To calculate Mass (M); please enter the Force (F) followed by space, followed by the Acceleration (A): ";
    cin >> Force >> Acceleration;
    Mass = Force / Acceleration;
    cout << Mass << "kg";   
}

void EntryValidation()  {
    while ((choice != 1) && (choice != 2) && (choice != 3))  {
        cout << "\nERROR:\nIf you wish to calculate Force (F) - please enter 1\nIf you wish to calculate Acceleration (A) - please enter 2\nIf you wish to calculate Mass (M) - please enter 3\n";
        cin >> choice;
    }
}
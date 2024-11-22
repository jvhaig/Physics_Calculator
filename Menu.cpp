/************************
    <names>
    A201 Computer Programming 1
    Assignment: Project01
    Date:
    Description:
    Version: 1.0
************************/
 

#include <iostream>
#include <cstring>
#include<iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

int displayCalculator();
void function01();
void function02();
void functionWriteOut();

int main() {
//DECLARE 
    int userFunctionNum;

    userFunctionNum = displayCalculator();
    //INPUTS
    switch (userFunctionNum) {
        case 0:
            cout << "See you next time!" << endl;
            return 0;
        case 1:
            function01();
            break;
        case 2:
            function02();
            break;
        default: 
            functionWriteOut();
            break;
    }

    //RETURN
    return 0;
}

int displayCalculator() {
    string userInput;
    int userFunctionNum;

    cout << setw(33) << "PHYSICS CALCULATOR" << endl;
    cout << "+----------------------+\t+----------------------+\t" << endl;
    cout << "|      1] Momentum     |\t|                      |\t" << endl;
    cout << "+----------------------+\t+----------------------+\t" << endl;
    cout << "| 2] Terminal Velocity |\t|                      |\t" << endl;
    cout << "+----------------------+\t+----------------------+\t" << endl;
    cout << "|                      |\t|                      |\t" << endl;
    cout << "+----------------------+\t+----------------------+\t" << endl;
    cout << "|                      |\t|                      |\t" << endl;
    cout << "+----------------------+\t+----------------------+\t" << endl;
    cout << "\t (9 to quit)" << endl;
    
    while(true) {
        cout << setw(25) << "Enter Option: ";
        cin >> userInput;

        if (userInput.length() == 1 && isdigit(userInput[0])) {
            userFunctionNum = stoi(userInput);

            // Check if it's a valid menu option
            if (userFunctionNum == 9 || (userFunctionNum >= 1 && userFunctionNum <= 2)) {
                return userFunctionNum;
            } else {
                cout << "INVALID ENTRY: " << endl;
                cin.clear();
                cin.ignore();
            }
        } else {
            cout << "INVALID ENTRY: " << endl;
            cin.clear();
            cin.ignore();
        }

    }; 
}

void function01() {
    double userMass = 0.0, userVelocity = 0.0, userMomentum = 0.0, result = 0.0;
    int userInput = 0;

    cout << "1] Momentum" << endl;
    cout << "2] Mass" << endl;
    cout << "3] Velocity" << endl;
    cout << "What would you like to solve for?: ";

    while (true) {
        cin >> userInput;

        if (cin.fail() || userInput < 1 || userInput > 3) {
            cout << "INVALID ENTRY: " << endl;
            cin.clear();
            cin.ignore();
        } else {
            break;
        }
    }

    switch (userInput) {
        case 1:
            cout << "Enter Mass (kg): ";
            cin >> userMass;

            while (cin.fail() || userMass <= 0) {
                cout << "INVALID ENTRY: ";
                cin >> userMass;
                cout << endl;
            }
            cout << "Enter Velocity (m/s): ";
            cin >> userVelocity;

            while (cin.fail() || userVelocity <= 0) {
                cout << "INVALID ENTRY: ";
                cin >> userVelocity;
                cout << endl;
            }

            result = userMass * userVelocity;
            cout << "**************" << endl;
            cout << "Momentum: " << result << " kg.m/s";
            break;
        
        case 2:
            cout << "Enter Momentum (kg·m/s): ";
            cin >> userMomentum;

            while (cin.fail()) {
                cout << "INVALID ENTRY: ";
                cin >> userMomentum;
                cout << endl;
            }

            cout << "Enter Velocity (m/s): ";
            cin >> userVelocity;

            while (cin.fail() || userVelocity == 0) {
                cout << "INVALID ENTRY: ";
                cin >> userVelocity;
                cout << endl;
            }

            result = userMomentum / userVelocity;
            cout << "**************" << endl;
            cout << "Mass: " << result << " kg";
            break;

        case 3:
            cout << "Enter Momentum (kg·m/s): ";
            cin >> userMomentum;

            while (cin.fail()) {
                cout << "INVALID ENTRY: ";
                cin >> userMomentum;
                cout << endl;
            }

            cout << "Enter Mass (kg): ";
            cin >> userMass;

            while (cin.fail() || userMass <= 0) {
                cout << "INVALID ENTRY: ";
                cin >> userMass;
                cout << endl;
            }

            result = userMomentum / userMass;
            cout << "**************" << endl;
            cout << "Velocity: " << result << " m/s\n";
            break;

        default:
            break;
    }
}
//final (oops) velocity function. This will determine the class of projectile
// (I, II, or III) and calculate final velocity before hitting the ground
void function02() {

    char ans;
    int choice;
    const int G = 9.807;
    float v_f, v_fx, v_fy, v_0, theta, v_0x, v_0y, y, delta_x, delta_y, a_y;

    cout << "Does the projectile land at the same height it is launched from (Y or N?)";
    cin >> ans;

    if (ans == 'y' || ans == 'Y')// class I
    {
        cout << "What is the object's intital velocity (in m/s)?";
        cin >> v_0;
        cout << "What is the launch angle (degrees)?";
        cin >> theta;
    }

    else // class II or III
    {   
        cout << "Does the projectile land at an elevated height (1)or a lower height (2)?";
        cin >> choice;
        if (choice == 1)
        {
            cout << "What is the height of the "
        }
        cout << "Is the projectile launched at an angle?";
        cin >> ans;
        if (ans == 'y' || ans == 'Y')
        {
            cout << "What is the launch angle?";
            cin >> theta;
        }
        else
    }

    //formula: 
    //v_fx = v_0x;
    //v_fy = v_0y + G * 

}

void functionWriteOut() {
    ofstream outFile("results.txt");


    outFile.close();
}
/************************
    <names>
    A201 Computer Programming 1
    Assignment: Project01
    Date:
    Description:
    Version: 1.0
************************/
 
//testing

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
void function02() {

}

void functionWriteOut() {
    ofstream outFile("results.txt");


    outFile.close();
}
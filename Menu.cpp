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
#include <string>
using namespace std;

int displayCalculator();
void function01();
void function02();
void functionWriteOut();
bool isNumber(string);

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
    string sInput;
    int iInput = 0;
    bool bValid = false;
    //string userInput;
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

    cout << "Enter an option (1,2, or 9): ";
    do {
        getline(cin >> ws, sInput);
        bValid = isNumber(sInput);
        if (bValid) {
            iInput = stoi(sInput);
        }
        if (bValid && (iInput < 1 || (iInput > 2 && iInput != 9) || stoi(sInput) != stod(sInput))) {           //Additional conditions: Number must be integer 1, 2, or 9.
            bValid = false;
            cout << "Error\n";
        }
        if (!bValid) {
            cout << "Enter a valid option: ";
        }
    } while (!bValid);
    return iInput;
}

void function01() {
    string sUserMass, sUserVelocity, sUserMomentum;
    double dResult = 0.0, dUserMass = 0.0, dUserVelocity = 0.0, dUserMomentum = 0.0;
    string sInput;
    int iInput = 0;
    bool bValid = false;

    cout << "1] Momentum" << endl;
    cout << "2] Mass" << endl;
    cout << "3] Velocity" << endl;

    cout << "Enter an option (1-3): ";

    do {
        getline(cin >> ws, sInput);
        bValid = isNumber(sInput);
        if (bValid) {
            iInput = stoi(sInput);
        }
        if (bValid && (iInput < 1 || iInput > 3 || stoi(sInput) != stod(sInput))) {           //Additional conditions: Number must be integer 1-3.
            bValid = false;
            cout << "Error\n";
        }
        if (!bValid) {
            cout << "Enter a valid option: ";
        }
    } while (!bValid);



    switch (iInput) {
    case 1:
        cout << "Enter Mass (kg): ";

        do {
            getline(cin >> ws, sUserMass);
            bValid = isNumber(sUserMass);
            if (bValid) {
                dUserMass = stod(sUserMass);
            }
            if (bValid && (dUserMass < 0)) {            //Additional condition: Mass must be positive.
                bValid = false;
                cout << "Error\n";
            }
            if (!bValid) {
                cout << "Enter a valid mass: ";
            }
        } while (!bValid);



        cout << "Enter Velocity (m/s): ";

        do {
            getline(cin >> ws, sUserVelocity);
            bValid = isNumber(sUserVelocity);
            if (bValid) {
                dUserVelocity = stod(sUserVelocity);
            }
            if (!bValid) {
                cout << "Enter a valid velocity: ";
            }
        } while (!bValid);

        dResult = dUserMass * dUserVelocity;
        cout << "**************" << endl;
        cout << "Momentum: " << dResult << " (kg*m/s)";
        break;

    case 2:
        cout << "Enter Momentum (kg*m/s): ";

        do {
            getline(cin >> ws, sUserMomentum);
            bValid = isNumber(sUserMomentum);
            if (bValid) {
                dUserMomentum = stod(sUserMomentum);
            }
            if (!bValid) {
                cout << "Enter a valid momentum: ";
            }
        } while (!bValid);

        cout << "Enter Velocity (m/s): ";

        do {
            getline(cin >> ws, sUserVelocity);
            bValid = isNumber(sUserVelocity);
            if (bValid) {
                dUserVelocity = stod(sUserVelocity);
            }
            if (!bValid) {
                cout << "Enter a valid velocity: ";
            }
        } while (!bValid);

        dResult = dUserMomentum / dUserVelocity;
        cout << "**************" << endl;
        cout << "Mass: " << dResult << " kg";
        break;

    case 3:
        cout << "Enter Momentum (kg*m/s): ";

        do {
            getline(cin >> ws, sUserMomentum);
            bValid = isNumber(sUserMomentum);
            if (bValid) {
                dUserMomentum = stod(sUserMomentum);
            }
            if (!bValid) {
                cout << "Enter a valid momentum: ";
            }
        } while (!bValid);

        cout << "Enter Mass (kg): ";

        do {
            getline(cin >> ws, sUserMass);
            bValid = isNumber(sUserMass);
            if (bValid) {
                dUserMass = stod(sUserMass);
            }
            if (bValid && (dUserMass < 0)) {            //Additional condition: Mass must be positive.
                bValid = false;
                cout << "Error\n";
            }
            if (!bValid) {
                cout << "Enter a valid mass: ";
            }
        } while (!bValid);

        dResult = dUserMomentum / dUserMass;
        cout << "**************" << endl;
        cout << "Velocity: " << dResult << " m/s";
        break;

    default:
        break;
    }
}
//final (oops) velocity function. This will determine the class of projectile
// (I, II, or III) and calculate final velocity before hitting the ground
void function02() {
    //
    //    char ans;
    //    int choice;
    //    const int G = 9.807;
    //    float v_f, v_fx, v_fy, v_0, theta, v_0x, v_0y, y, delta_x, delta_y, a_y;
    //
    //    cout << "Does the projectile land at the same height it is launched from (Y or N?)";
    //    cin >> ans;
    //
    //    if (ans == 'y' || ans == 'Y')// class I
    //    {
    //        cout << "What is the object's intital velocity (in m/s)?";
    //        cin >> v_0;
    //        cout << "What is the launch angle (degrees)?";
    //        cin >> theta;
    //    }
    //
    //    else // class II or III
    //    {
    //        cout << "Does the projectile land at an elevated height (1)or a lower height (2)?";
    //        cin >> choice;
    //        if (choice == 1)
    //        {
    //            cout << "What is the height of the ";
    //        }
    //        cout << "Is the projectile launched at an angle?";
    //        cin >> ans;
    //        if (ans == 'y' || ans == 'Y')
    //        {
    //            cout << "What is the launch angle?";
    //            cin >> theta;
    //        }
    //        else
    //    }
    //
    //    //formula: 
    //    //v_fx = v_0x;
    //    //v_fy = v_0y + G * 
    //
}
//
void functionWriteOut() {
    //    ofstream outFile("results.txt");
    //
    //
    //    outFile.close();
}

bool isNumber(string sInput) {
    //Returns true if input is int or double, returns false otherwise.
    bool bValid = true;
    int iDotCount = 0;
    int iDigCount = 0;

    if (sInput[0] == '-') {           //Negative number validation.
        for (int i = 1; i < sInput.length(); i++) {           //Iterates over input string.

            if (sInput[i] == '.') {           //Counts the number of periods in the user input string.
                iDotCount++;
            }
            if (isdigit(sInput[i])) {
                iDigCount++;
            }

            if (!(isdigit(sInput[i])) && sInput[i] != '.') {            //Throws an error flag if char is not a digit and is not a period.
                bValid = false;
                cout << "Error\n";
                break;
            }
            else if (iDotCount > 1 || iDigCount == 0) {                //Throws an error flag if the number of periods is greater than 1.
                bValid = false;
                cout << "Error\n";
                break;
            }
        }
    }
    else {            //Positive number validation.
        for (int i = 0; i < sInput.length(); i++) {           //Iterates over input string.

            if (sInput[i] == '.') {           //Counts the number of periods in the user input string.
                iDotCount++;
            }

            if (isdigit(sInput[i])) {
                iDigCount++;
            }

            if (!(isdigit(sInput[i])) && sInput[i] != '.') {            //Throws an error flag if char is not a digit and is not a period.
                bValid = false;
                cout << "Error\n";
                break;
            }
            else if (iDotCount > 1 || iDigCount == 0) {                //Throws an error flag if the number of periods is greater than 1.
                bValid = false;
                cout << "Error\n";
                break;
            }
        }
    }
    return bValid;
}
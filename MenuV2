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
//void function02();
//void function03();
//void functionWriteOut();
bool isNumber(string);

int main() {
  //DECLARE 
  int userFunctionNum;
  while (true) {
  userFunctionNum = displayCalculator();
  //INPUTS
  switch (userFunctionNum) {
  case 9:
    cout << "See you next time!" << endl;
    return 0;
  case 1:
    function01();
    break;
  case 2:
    //function02();
    break;
 case 3:
    //function03();
    break;                    
  default:
    //functionWriteOut();
    break;
  }
  }

  //RETURN
  return 0;
}

int displayCalculator() {
  string sInput;
  int iInput = 0;
  bool bValid = false;
  int userFunctionNum;

  cout << setw(33) << "PHYSICS CALCULATOR++" << endl;
  cout << "+----------------------+" << endl;
  cout << "|      1] Kinematics   |" << endl;
  cout << "+----------------------+" << endl;
  cout << "|      2] Forces       |" << endl;
  cout << "+----------------------+" << endl;
  cout << "|      3] Energy       |" << endl;
  cout << "+----------------------+" << endl;
  cout << "(9 to quit)" << endl;
  cout << "\tEnter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid && (iInput < 1 || iInput > 3)) {
      bValid = false;
      cout << "Error: Enter a valid option: ";
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

  cout << "--1D Kinematics--" << endl;
  cout << "1] Momentum/Mass/Velocity" << endl;
  cout << "2] Velocity/Displacement/Time" << endl;
  cout << "3] Initial Velocity/Final Velocity/Acceleration" << endl;
  cout << "4] Main Menu" << endl;
  cout << "5] Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid && (iInput < 1 || iInput > 5 || stoi(sInput) != stod(sInput))) {           //Additional conditions: Number must be integer 1-3.
    bValid = false;
    cout << "Error\n";
    }
    if (!bValid) {
    cout << "Enter a valid option: ";
    }
  } while (!bValid);

  switch (iInput) {
  case 1: 
    cout << "\nWhat would you like to solve for?" << endl;
    cout << "\t1] Momentum" << endl;
    cout << "\t2] Mass" << endl;
    cout << "\t3] Velocity" << endl;
    cout << "\t4] Back to Menu" << endl;
    cout << "Enter an option: ";

    do {
      getline(cin >> ws, sInput);
      bValid = isNumber(sInput);
      if (bValid) {
        iInput = stoi(sInput);
      }
      if (bValid && (iInput < 1 || iInput > 4 || stoi(sInput) != stod(sInput))) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
          cout << "Enter a valid option: ";
      }
    } while (!bValid);

    switch (iInput) {
    case 1:
      cout << "\n--Momentum Calculator--" << endl;
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
      cout << "\n--Mass Calculator--" << endl;

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

    case 3:
      cout << "\n--Velocity Calculator--" << endl;
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

    case 4:
      function01(); //menu
      break;
    default:
      cout << "Invalid option." << endl;
      break;
    }
  }
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

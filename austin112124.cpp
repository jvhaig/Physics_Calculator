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
  //while (true) {
  //  cout << setw(25) << "Enter Option: ";
  //  cin >> userInput;
  //
  //  if (userInput.length() == 1 && isdigit(userInput[0])) {
  //    userFunctionNum = stoi(userInput);
  //
  //    // Check if it's a valid menu option
  //    if (userFunctionNum == 9 || (userFunctionNum >= 1 && userFunctionNum <= 2)) {
  //      return userFunctionNum;
  //    }
  //    else {
  //      cout << "INVALID ENTRY: " << endl;
  //      cin.clear();
  //      cin.ignore();
  //    }
  //  }
  //  else {
  //    cout << "INVALID ENTRY: " << endl;
  //    cin.clear();
  //    cin.ignore();
  //  }
  //
  //};
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
void function02() {

}

void functionWriteOut() {
  ofstream outFile("results.txt");


  outFile.close();
}

bool isNumber(string sInput) {
  //Returns true if input is int or double, returns false otherwise.
  bool bValid = false;
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
      } else if (iDotCount > 1) {                //Throws an error flag if the number of periods is greater than 1.
        bValid = false;
        cout << "Error\n";
        break;
      } else if (iDotCount > iDigCount) {
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

      if (!(isdigit(sInput[i])) && sInput[i] != '.') {            //Throws an error flag if char is not a digit and is not a period.
        bValid = false;
        cout << "Error\n";
        break;
      } else if (iDotCount > 1 || iDigCount == 0) {                //Throws an error flag if the number of periods is greater than 1.
        bValid = false;
        cout << "Error\n";
        break;
      }
    }
  }
  return bValid;
}

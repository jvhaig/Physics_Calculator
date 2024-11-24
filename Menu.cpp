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
void function03();
void function04();
void function05();
void function06();
void function07();
void function08();
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
  case 3:
    function03();
    break;
  case 4:
    function04();
    break;
  case 5:
    function05();
    break;
  case 6:
    function06();
    break;
  case 7:
    function07();
    break;
  case 8:
    function08();
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
  int userFunctionNum;

  cout << setw(33) << "PHYSICS CALCULATOR" << endl;
  cout << "+----------------------+\t+----------------------+\t" << endl;
  cout << "|      1] Momentum     |\t|      5] Force        |\t" << endl;
  cout << "+----------------------+\t+----------------------+\t" << endl;
  cout << "| 2] Terminal Velocity |\t|   6] Mass-Energy     |\t" << endl;
  cout << "+----------------------+\t+----------------------+\t" << endl;
  cout << "|   3] Speed/Distance  |\t|      7] Weight       |\t" << endl;
  cout << "+----------------------+\t+----------------------+\t" << endl;
  cout << "|      4] Density      |\t|     8] Pressure      |\t" << endl;
  cout << "+----------------------+\t+----------------------+\t" << endl;
  cout << "\t (9 to quit)" << endl;

  cout << "Enter an option (1-9): ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid && (iInput < 1 || iInput > 9 || stoi(sInput) != stod(sInput))) {           //Aditional condition: Number must be integer 1-9.
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

  cout << "--Momentum Calculator--" << endl;
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

  /*    char ans;
      int choice;
      const double G = 9.807;
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
              cout << "What is the height of the ";
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
  */    //v_fy = v_0y + G *

}


//Speed Distance Time
void function03() {
  string sUserSpeed, sUserTime, sUserDistance;
  double dResult = 0.0, dUserSpeed = 0.0, dUserTime = 0.0, dUserDistance = 0.0;
  string sInput;
  int iInput = 0;
  bool bValid = false;

  cout << "--Speed Distance Time Calculator--" << endl;
  cout << "1] Distance" << endl;
  cout << "2] Speed" << endl;
  cout << "3] Time" << endl;

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
    cout << "Enter Speed (): ";
    do {
      getline(cin >> ws, sUserSpeed);
      bValid = isNumber(sUserSpeed);
      if (bValid) {
        dUserSpeed = stod(sUserSpeed);
      }
      if (!bValid) {
        cout << "Enter a valid speed: ";
      }
    } while (!bValid);
    cout << "Enter Time (): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResult = dUserSpeed * dUserTime;
    cout << "**************" << endl;
    cout << "Distance: " << dResult << "()";
    break;

  case 2:
    cout << "Enter Distance (): ";
    do {
      getline(cin >> ws, sUserDistance);
      bValid = isNumber(sUserDistance);
      if (bValid) {
        dUserDistance = stod(sUserDistance);
      }
      if (!bValid) {
        cout << "Enter a valid distance: ";
      }
    } while (!bValid);
    cout << "Enter Time (): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResult = dUserDistance / dUserTime;
    cout << "**************" << endl;
    cout << "Speed: " << dResult << "()";
    break;

  case 3:
    cout << "Enter Distance (): ";
    do {
      getline(cin >> ws, sUserDistance);
      bValid = isNumber(sUserDistance);
      if (bValid) {
        dUserDistance = stod(sUserDistance);
      }
      if (!bValid) {
        cout << "Enter a valid distance: ";
      }
    } while (!bValid);
    cout << "Enter Speed (kg): ";
    do {
      getline(cin >> ws, sUserSpeed);
      bValid = isNumber(sUserSpeed);
      if (bValid) {
        dUserSpeed = stod(sUserSpeed);
      }
      if (!bValid) {
        cout << "Enter a valid speed: ";
      }
    } while (!bValid);

    dResult = dUserDistance / dUserSpeed;
    cout << "**************" << endl;
    cout << "Time: " << dResult << "()";
    break;

  default:
    break;
  }
}

//Density
void function04() {
  string sUserDensity, sUserMass, sUserVolume;
  double dResult = 0.0, dUserDensity = 0.0, dUserMass = 0.0, dUserVolume = 0.0;
  string sInput;
  int iInput = 0;
  bool bValid = false;

  cout << "--Density Calculator--" << endl;
  cout << "1] Density" << endl;
  cout << "2] Mass" << endl;
  cout << "3] Volume" << endl;

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
    cout << "Enter Mass (): ";
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
    cout << "Enter Volume (): ";
    do {
      getline(cin >> ws, sUserVolume);
      bValid = isNumber(sUserVolume);
      if (bValid) {
        dUserVolume = stod(sUserVolume);
      }
      if (bValid && (dUserVolume < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid volume: ";
      }
    } while (!bValid);

    dResult = dUserMass / dUserVolume;
    cout << "**************" << endl;
    cout << "Density: " << dResult << "()";
    break;

  case 2:
    cout << "Enter Density (): ";
    do {
      getline(cin >> ws, sUserDensity);
      bValid = isNumber(sUserDensity);
      if (bValid) {
        dUserDensity = stod(sUserDensity);
      }
      if (bValid && (dUserDensity < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid density: ";
      }
    } while (!bValid);
    cout << "Enter Mass (): ";
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

    dResult = dUserMass / dUserDensity;
    cout << "**************" << endl;
    cout << "Velocity: " << dResult << "()";
    break;

  case 3:
    cout << "Enter Density (): ";
    do {
      getline(cin >> ws, sUserDensity);
      bValid = isNumber(sUserDensity);
      if (bValid) {
        dUserDensity = stod(sUserDensity);
      }
      if (bValid && (dUserDensity < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid density: ";
      }
    } while (!bValid);
    cout << "Enter Volume (kg): ";
    do {
      getline(cin >> ws, sUserVolume);
      bValid = isNumber(sUserVolume);
      if (bValid) {
        dUserVolume = stod(sUserVolume);
      }
      if (bValid && (dUserVolume < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid volume: ";
      }
    } while (!bValid);

    dResult = dUserDensity * dUserVolume;
    cout << "**************" << endl;
    cout << "Mass: " << dResult << "()";
    break;

  default:
    break;
  }
}

void function05() {
  string sUserForce, sUserMass, sUserAcceleration;
  double dResult = 0.0, dUserForce = 0.0, dUserMass = 0.0, dUserAcceleration = 0.0;
  string sInput;
  int iInput = 0;
  bool bValid = false;

  cout << "--Force Calculator--" << endl;
  cout << "1] Force" << endl;
  cout << "2] Mass" << endl;
  cout << "3] Acceleration" << endl;

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
    cout << "Enter Mass (): ";
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
    cout << "Enter Acceleration (): ";
    do {
      getline(cin >> ws, sUserAcceleration);
      bValid = isNumber(sUserAcceleration);
      if (bValid) {
        dUserAcceleration = stod(sUserAcceleration);
      }
      if (bValid && (dUserAcceleration < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    dResult = dUserMass * dUserAcceleration;
    cout << "**************" << endl;
    cout << "Density: " << dResult << "()";
    break;

  case 2:
    cout << "Enter Force (): ";
    do {
      getline(cin >> ws, sUserForce);
      bValid = isNumber(sUserForce);
      if (bValid) {
        dUserForce = stod(sUserForce);
      }
      if (bValid && (dUserForce < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid force: ";
      }
    } while (!bValid);
    cout << "Enter Acceleraton (): ";
    do {
      getline(cin >> ws, sUserAcceleration);
      bValid = isNumber(sUserAcceleration);
      if (bValid) {
        dUserAcceleration = stod(sUserAcceleration);
      }
      if (bValid && (dUserAcceleration < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    dResult = dUserForce / dUserAcceleration;
    cout << "**************" << endl;
    cout << "Mass: " << dResult << "()";
    break;

  case 3:
    cout << "Enter Force (): ";
    do {
      getline(cin >> ws, sUserForce);
      bValid = isNumber(sUserForce);
      if (bValid) {
        dUserForce = stod(sUserForce);
      }
      if (bValid && (dUserForce < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid force: ";
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

    dResult = dUserForce / dUserMass;
    cout << "**************" << endl;
    cout << "Acceleration: " << dResult << "()";
    break;

  default:
    break;
  }
}

void function06() {
  string sUserEnergy, sUserMass;
  double dResult = 0.0, dUserEnergy = 0.0, dUserMass = 0.0, dLight = 299792458.0;
  string sInput;
  int iInput = 0;
  bool bValid = false;

  cout << "--Energy/Mass Calculator--" << endl;
  cout << "1] Energy" << endl;
  cout << "2] Mass" << endl;

  cout << "Enter an option (1-2): ";
  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid && (iInput < 1 || iInput > 2 || stoi(sInput) != stod(sInput))) {           //Additional conditions: Number must be integer 1-3.
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

    dResult = dUserMass * pow(dLight, 2);
    cout << "**************" << endl;
    cout << "Energy: " << dResult << "(J)";
    break;

  case 2:
    cout << "Enter Energy (J): ";
    do {
      getline(cin >> ws, sUserEnergy);
      bValid = isNumber(sUserEnergy);
      if (bValid) {
        dUserEnergy = stod(sUserEnergy);
      }
      if (bValid && (dUserEnergy < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter valid energy: ";
      }
    } while (!bValid);

    dResult = dUserEnergy / (pow(dLight, 2));
    cout << "**************" << endl;
    cout << "Mass: " << dResult << "(kg)";
    break;

  default:
    break;
  }
}

void function07() {
  string sUserWeight, sUserMass, sUserGravity;
  double dResult = 0.0, dUserWeight = 0.0, dUserMass = 0.0, dUserGravity = 0.0;
  string sInput;
  int iInput = 0;
  bool bValid = false;

  cout << "--Weight Calculator--" << endl;
  cout << "1] Weight" << endl;
  cout << "2] Mass" << endl;
  cout << "3] Gravity" << endl;

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
    cout << "Enter Gravity (kg): ";
    do {
      getline(cin >> ws, sUserGravity);
      bValid = isNumber(sUserGravity);
      if (bValid) {
        dUserGravity = stod(sUserGravity);
      }
      if (bValid && (dUserGravity < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter valid gravity: ";
      }
    } while (!bValid);

    dResult = dUserMass * dUserGravity;
    cout << "**************" << endl;
    cout << "Weight: " << dResult << "()";
    break;

  case 2:
    cout << "Enter Weight (): ";
    do {
      getline(cin >> ws, sUserWeight);
      bValid = isNumber(sUserWeight);
      if (bValid) {
        dUserWeight = stod(sUserWeight);
      }
      if (bValid && (dUserWeight < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid weight: ";
      }
    } while (!bValid);
    cout << "Enter Gravity (): ";
    do {
      getline(cin >> ws, sUserGravity);
      bValid = isNumber(sUserGravity);
      if (bValid) {
        dUserGravity = stod(sUserGravity);
      }
      if (bValid && (dUserGravity < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter valid gravity: ";
      }
    } while (!bValid);

    dResult = dUserWeight / dUserGravity;
    cout << "**************" << endl;
    cout << "Mass: " << dResult << "()";
    break;

  case 3:
    cout << "Enter Weight (): ";
    do {
      getline(cin >> ws, sUserWeight);
      bValid = isNumber(sUserWeight);
      if (bValid) {
        dUserWeight = stod(sUserWeight);
      }
      if (bValid && (dUserWeight < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid weight: ";
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

    dResult = dUserWeight / dUserMass;
    cout << "**************" << endl;
    cout << "Gravity: " << dResult << "()";
    break;
  default:
    break;
  }
}

void function08() {
  string sUserPressure, sUserForce, sUserArea;
  double dResult = 0.0, dUserPressure = 0.0, dUserForce = 0.0, dUserArea = 0.0;
  string sInput;
  int iInput = 0;
  bool bValid = false;

  cout << "--Pressure Calculator--" << endl;
  cout << "1] Pressure" << endl;
  cout << "2] Force" << endl;
  cout << "3] Area" << endl;

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
    cout << "Enter Force (): ";
    do {
      getline(cin >> ws, sUserForce);
      bValid = isNumber(sUserForce);
      if (bValid) {
        dUserForce = stod(sUserForce);
      }
      if (bValid && (dUserForce < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid force: ";
      }
    } while (!bValid);
    cout << "Enter Area (): ";
    do {
      getline(cin >> ws, sUserArea);
      bValid = isNumber(sUserArea);
      if (bValid) {
        dUserArea = stod(sUserArea);
      }
      if (bValid && (dUserArea < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid area: ";
      }
    } while (!bValid);

    dResult = dUserForce / dUserArea;
    cout << "**************" << endl;
    cout << "Pressure: " << dResult << "()";
    break;

  case 2:
    cout << "Enter Pressure (): ";
    do {
      getline(cin >> ws, sUserPressure);
      bValid = isNumber(sUserPressure);
      if (bValid) {
        dUserPressure = stod(sUserPressure);
      }
      if (bValid && (dUserPressure < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid pressure: ";
      }
    } while (!bValid);
    cout << "Enter Area (): ";
    do {
      getline(cin >> ws, sUserArea);
      bValid = isNumber(sUserArea);
      if (bValid) {
        dUserArea = stod(sUserArea);
      }
      if (bValid && (dUserArea < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid area: ";
      }
    } while (!bValid);

    dResult = dUserPressure * dUserArea;
    cout << "**************" << endl;
    cout << "Force: " << dResult << "()";
    break;

  case 3:
    cout << "Enter Pressure (): ";
    do {
      getline(cin >> ws, sUserPressure);
      bValid = isNumber(sUserPressure);
      if (bValid) {
        dUserPressure = stod(sUserPressure);
      }
      if (bValid && (dUserPressure < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid pressure: ";
      }
    } while (!bValid);
    cout << "Enter Force (): ";
    do {
      getline(cin >> ws, sUserForce);
      bValid = isNumber(sUserForce);
      if (bValid) {
        dUserForce = stod(sUserForce);
      }
      if (bValid && (dUserForce < 0)) {            //Additional condition: Mass must be positive.
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid force: ";
      }
    } while (!bValid);

    dResult = dUserForce / dUserPressure;
    cout << "**************" << endl;
    cout << "Area: " << dResult << "()";
    break;
  default:
    break;
  }
}

void functionWriteOut() {
  /*  ofstream outFile("results.txt");


    outFile.close();
  */
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


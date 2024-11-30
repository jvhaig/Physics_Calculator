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
//void function03();
//void functionWriteOut();

bool isNumber(string);
int returnIntInput();
float returnNumInput();

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
    function02();
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
    if (bValid && ((iInput != 9 && (iInput < 1 || iInput > 3)) || stoi(sInput) != stod(sInput))) {
      bValid = false;
      cout << "Error: Enter a valid option: ";
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }
    
  } while (!bValid);
  if (iInput == 9) {
      cout << "Thank You!" << endl;
      exit(0);
    }
  return iInput;
  
}

void function01() {
  string sUserMass, sUserVelocity, sUserMomentum, sUserFV, sUserIV, sUserTime, sUserDisplacement, sUserAcceleration; 
  double dResult = 0.0, dUserMass = 0.0, dUserVelocity = 0.0, dUserMomentum = 0.0, dUserFV = 0.0, dUserIV = 0.0, dUserTime = 0.0, dUserDisplacement = 0.0, dUserAcceleration;
  string sInput;
  int iInput = 0;
  bool bValid = false;
  //MENU
  cout << "--1D Kinematics--" << endl;
  cout << "1] Momentum/Mass/Velocity" << endl;
  cout << "2] Velocity/Displacement/Time" << endl;
  cout << "3] Initial Velocity/Final Velocity/Acceleration" << endl;
  cout << "4] -Main Menu" << endl;
  cout << "5] -Quit" << endl;
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
    cout << "\t4] -Back" << endl;
    cout << "\t5] -Quit" << endl;
    cout << "Enter an option: ";

    do {
      getline(cin >> ws, sInput);
      bValid = isNumber(sInput);
      if (bValid) {
        iInput = stoi(sInput);
      }
      if (bValid && (iInput < 1 || iInput > 5 || stoi(sInput) != stod(sInput))) {
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
      cout << "Momentum: " << dResult << " (kg*m/s)\n";
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
      cout << "Mass: " << dResult << " kg\n";
      break;

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
      cout << "Velocity: " << dResult << " m/s\n";
      break;

    case 4:
      function01();
      break;
    case 5:
      cout << "Thank You!" << endl;
      exit(0);
    default:
      cout << "Invalid option." << endl;
    }
  case 2: 
    cout << "\nWhat would you like to solve for?" << endl;
    cout << "\t1] Displacement" << endl;
    cout << "\t2] Final Velocity" << endl;
    cout << "\t3] Initial Velocity" << endl;
    cout << "\t4] Time" << endl;
    cout << "\t5] -Back" << endl;
    cout << "\t6] -Quit" << endl;
    cout << "Enter an option: ";

    do {
      getline(cin >> ws, sInput);
      bValid = isNumber(sInput);
      if (bValid) {
        iInput = stoi(sInput);
      }
      if (bValid && (iInput < 1 || iInput > 6 || stoi(sInput) != stod(sInput))) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
          cout << "Enter a valid option: ";
      }
    } while (!bValid);

    switch (iInput) {
    case 1:
      cout << "\n--Displacement Calculator--" << endl;
      cout << "Enter Final Velocity (m/s): ";
      do {
        getline(cin >> ws, sUserFV);
        bValid = isNumber(sUserFV);
        if (bValid) {
          dUserFV = stod(sUserFV);
        }
        if (bValid && (dUserFV < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      cout << "Enter Initial Velocity (m/s): ";
      do {
        getline(cin >> ws, sUserIV);
        bValid = isNumber(sUserIV);
        if (bValid) {
          dUserIV = stod(sUserIV);
        }
        if (bValid && (dUserIV < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      cout << "Enter Time (s): ";
      do {
        getline(cin >> ws, sUserTime);
        bValid = isNumber(sUserTime);
        if (bValid) {
          dUserTime = stod(sUserTime);
        }
        if (bValid && (dUserTime < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid time: ";
        }
      } while (!bValid);

      dResult = (0.5) * (dUserFV + dUserIV) * dUserTime;
      cout << "**************" << endl;
      cout << "Displacement: " << dResult << " m\n";
      break;
    case 2:
      cout << "\n--Final Velocity Calculator--" << endl;
      cout << "Enter Displacement (m): ";
      do {
        getline(cin >> ws, sUserDisplacement);
        bValid = isNumber(sUserDisplacement);
        if (bValid) {
          dUserDisplacement = stod(sUserDisplacement);
        }
        if (bValid && (dUserDisplacement < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      cout << "Enter Initial Velocity (m/s): ";
      do {
        getline(cin >> ws, sUserIV);
        bValid = isNumber(sUserIV);
        if (bValid) {
          dUserIV = stod(sUserIV);
        }
        if (bValid && (dUserIV < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      cout << "Enter Time (s): ";
      do {
        getline(cin >> ws, sUserTime);
        bValid = isNumber(sUserTime);
        if (bValid) {
          dUserTime = stod(sUserTime);
        }
        if (bValid && (dUserTime < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid time: ";
        }
      } while (!bValid);

      dResult = ((2.0 * dUserDisplacement) / dUserTime) - dUserIV;
      cout << "**************" << endl;
      cout << "Final Velocity: " << dResult << " m/s\n";
      break;
    case 3: 
      cout << "\n--Initial Velocity Calculator--" << endl;
      cout << "Enter Displacement (m): ";
      do {
        getline(cin >> ws, sUserDisplacement);
        bValid = isNumber(sUserDisplacement);
        if (bValid) {
          dUserDisplacement = stod(sUserDisplacement);
        }
        if (bValid && (dUserDisplacement < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      cout << "Enter Final Velocity (m/s): ";
      do {
        getline(cin >> ws, sUserFV);
        bValid = isNumber(sUserFV);
        if (bValid) {
          dUserFV = stod(sUserFV);
        }
        if (bValid && (dUserFV < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      cout << "Enter Time (s): ";
      do {
        getline(cin >> ws, sUserTime);
        bValid = isNumber(sUserTime);
        if (bValid) {
          dUserTime = stod(sUserTime);
        }
        if (bValid && (dUserTime < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid time: ";
        }
      } while (!bValid);

      dResult = (2.0 * dUserDisplacement) / (dUserTime - dUserIV);
      cout << "**************" << endl;
      cout << "Initial Velocity: " << dResult << " m/s\n";
      break;
    case 4:
      cout << "\n--Time Calculator--" << endl;
      cout << "Enter Displacement (m): ";
      do {
        getline(cin >> ws, sUserDisplacement);
        bValid = isNumber(sUserDisplacement);
        if (bValid) {
          dUserDisplacement = stod(sUserDisplacement);
        }
        if (bValid && (dUserDisplacement < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      cout << "Enter Initial Velocity (m/s): ";
      do {
        getline(cin >> ws, sUserIV);
        bValid = isNumber(sUserIV);
        if (bValid) {
          dUserIV = stod(sUserIV);
        }
        if (bValid && (dUserIV < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      cout << "Enter Final Velocity (m/s): ";
      do {
        getline(cin >> ws, sUserFV);
        bValid = isNumber(sUserFV);
        if (bValid) {
          dUserFV = stod(sUserFV);
        }
        if (bValid && (dUserFV < 0)) {            //Additional condition: Mass must be positive.
          bValid = false;
          cout << "Error\n";
        }
        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      dResult = (2.0 * dUserDisplacement) / (dUserTime - dUserIV);
      cout << "**************" << endl;
      cout << "Time: " << dResult << " s\n";
      break;
    case 5:
      function01();
      break;
    case 6:
      cout << "Thank You!" << endl;
      exit(0);
      
  
  }
  case 3:
    cout << "\nWhat would you like to solve for?" << endl;
    cout << "\t1] Acceleration	" << endl;
    cout << "\t2] Final Velocity" << endl;
    cout << "\t3] Initial Velocity" << endl;
    cout << "\t4] Time" << endl;
    cout << "\t5] -Back" << endl;
    cout << "\t6] -Quit" << endl;
    cout << "Enter an option: ";

    do {
      getline(cin >> ws, sInput);
      bValid = isNumber(sInput);
      if (bValid) {
        iInput = stoi(sInput);
      }
      if (bValid && (iInput < 1 || iInput > 6 || stoi(sInput) != stod(sInput))) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
          cout << "Enter a valid option: ";
      }
    } while (!bValid);

    switch (iInput) {
      case 1:
        cout << "\n--Acceleration Calculator--" << endl;
        cout << "Enter Final Velocity (m/s): ";
        do {
          getline(cin >> ws, sUserFV);
          bValid = isNumber(sUserFV);
          if (bValid) {
            dUserFV = stod(sUserFV);
          }
          if (bValid && (dUserFV < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid final velocity: ";
          }
        } while (!bValid);

        cout << "Enter Initial Velocity (m/s): ";
        do {
          getline(cin >> ws, sUserIV);
          bValid = isNumber(sUserIV);
          if (bValid) {
            dUserIV = stod(sUserIV);
          }
          if (bValid && (dUserIV < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid final velocity: ";
          }
        } while (!bValid);

        cout << "Enter Time (s): ";
        do {
          getline(cin >> ws, sUserTime);
          bValid = isNumber(sUserTime);
          if (bValid) {
            dUserTime = stod(sUserTime);
          }
          if (bValid && (dUserTime < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid time: ";
          }
        } while (!bValid);

        dResult = (dUserFV - dUserIV) / dUserTime;
        cout << "**************" << endl;
        cout << "Acceleration: " << dResult << " m/s^2\n";
        break;

      case 2:
        cout << "\n--Final Velocity Calculator--" << endl;
        cout << "Enter Acceleration (m/s^2): ";
        do {
          getline(cin >> ws, sUserFV);
          bValid = isNumber(sUserFV);
          if (bValid) {
            dUserFV = stod(sUserFV);
          }
          if (bValid && (dUserFV < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid final velocity: ";
          }
        } while (!bValid);

        cout << "Enter Initial Velocity (m/s): ";
        do {
          getline(cin >> ws, sUserIV);
          bValid = isNumber(sUserIV);
          if (bValid) {
            dUserIV = stod(sUserIV);
          }
          if (bValid && (dUserIV < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid final velocity: ";
          }
        } while (!bValid);

        cout << "Enter Time (s): ";
        do {
          getline(cin >> ws, sUserTime);
          bValid = isNumber(sUserTime);
          if (bValid) {
            dUserTime = stod(sUserTime);
          }
          if (bValid && (dUserTime < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid time: ";
          }
        } while (!bValid);

        dResult = dUserIV + (dUserAcceleration * dUserTime);
        cout << "**************" << endl;
        cout << "Final Velocity: " << dResult << " m/s\n";
        break;

      case 3:
        cout << "\n--Initial Velocity Calculator--" << endl;
        cout << "Enter Acceleration (m/s^2): ";
        do {
          getline(cin >> ws, sUserFV);
          bValid = isNumber(sUserFV);
          if (bValid) {
            dUserFV = stod(sUserFV);
          }
          if (bValid && (dUserFV < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid final velocity: ";
          }
        } while (!bValid);

        cout << "Enter Final Velocity (m/s): ";
        do {
          getline(cin >> ws, sUserFV);
          bValid = isNumber(sUserFV);
          if (bValid) {
            dUserFV = stod(sUserFV);
          }
          if (bValid && (dUserFV < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid final velocity: ";
          }
        } while (!bValid);

        cout << "Enter Time (s): ";
        do {
          getline(cin >> ws, sUserTime);
          bValid = isNumber(sUserTime);
          if (bValid) {
            dUserTime = stod(sUserTime);
          }
          if (bValid && (dUserTime < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid time: ";
          }
        } while (!bValid);

        dResult = dUserFV - (dUserAcceleration * dUserTime);
        cout << "**************" << endl;
        cout << "Initial Velocity: " << dResult << " m/s\n";
        break;
      case 4:
        cout << "\n--Time Calculator--" << endl;
        cout << "Enter Acceleration (m/s^2): ";
        do {
          getline(cin >> ws, sUserFV);
          bValid = isNumber(sUserFV);
          if (bValid) {
            dUserFV = stod(sUserFV);
          }
          if (bValid && (dUserFV < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid final velocity: ";
          }
        } while (!bValid);

        cout << "Enter Final Velocity (m/s): ";
        do {
          getline(cin >> ws, sUserFV);
          bValid = isNumber(sUserFV);
          if (bValid) {
            dUserFV = stod(sUserFV);
          }
          if (bValid && (dUserFV < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid final velocity: ";
          }
        } while (!bValid);

        cout << "Enter Initial Velocity (m/s): ";
        do {
          getline(cin >> ws, sUserIV);
          bValid = isNumber(sUserIV);
          if (bValid) {
            dUserIV = stod(sUserIV);
          }
          if (bValid && (dUserIV < 0)) {            //Additional condition: Mass must be positive.
            bValid = false;
            cout << "Error\n";
          }
          if (!bValid) {
            cout << "Enter a valid final velocity: ";
          }
        } while (!bValid);

        dResult = (dUserFV - dUserIV) / dUserAcceleration;
        cout << "**************" << endl;
        cout << "Time: " << dResult << " m/s^2\n";
        break;

      case 5:
        function01();
        break;
      case 6:
        cout << "Thank You!" << endl;
        exit(0);
    }
  }
}


//2D kinematics: projectile motion.
//still need to finish menu options 5 & 6, incorporate input validation, and fix some issues with 
//negative distance/ accounting for pos vs neg delta_y
void function02() {

    char ans;
    int choice, ans1;
    bool flag = true;
    const double G = 9.807;
    float v_f, v_fx, v_fy, v_0, theta, v_0x, v_0y, y, delta_x, delta_y, maxh, t_maxh, t_fall, t,
          d, dx, t_dx, h_dx, spx, t_spx, h_spx, spy, t_spy1, t_spy2, d_spy1, d_spy2, spt, h_spt, d_spt;
    
    cout << "Select value to solve for: \n(1) Final velocity \n(2) Maximum height"
         << "\n(3) Distance traveled \n(4) Time of flight "
         << "\n(5) Time & distance for a specific height \n(6) Time & height for a specific distance"
         << "\n(7) Distance & height at a specific time" << endl;
    
    while (true) {
      const int UPPER = 7, LOWER = 0; //valid range:
      ans1 = returnIntInput(); // integer or float

      if ((ans1 < LOWER || ans1 > UPPER) && ans1 != 9) { // check range    
        cout << "Invalid entry. Enter a choice 1 through 7: ";
        continue;
      }
      else
        break;
    }
    //determine type of projectile

    cout << "Does the projectile land at the same height it is launched from? (enter 1 for yes or 2 for no) ";
    
    while (true) {
      const int UPPER = 2, LOWER = 1; //valid range:
      ans = returnIntInput(); // integer or float

      if (ans < LOWER || ans > UPPER) { // check range    
        cout << "Enter a choice 1 or 2: ";
        continue;
      }
      else
        break;
    }

    if (ans == 1)// class I
    {   
        delta_y = 0;
        cout << "What is the object's intital velocity (in m/s)? ";
        while (true) {
          const int UPPER = 11200, LOWER = 0; //valid range:
          v_0 = returnNumInput();

          if (v_0 < LOWER || v_0 > UPPER) { // check range    
            cout << "Enter a velocity between 0 m/s and 11,200 m/s: "; 
            continue;
          }
          else
            break;
        }
        cout << "What is the launch angle (degrees)? ";
        
        while (true) {
          const int UPPER = 90, LOWER = 0; //valid range:
          theta = returnNumInput();

          if (theta < LOWER || theta > UPPER) { // check range    
            cout << "Enter an angle 0 through 90 degrees: ";
            continue;
          }
          else
            break;
        }
    }

    else // class II or III
    {   
        cout << "Does the projectile land at an elevated height (1) or a lower height (2)? ";
        while (true) {
          const int UPPER = 2, LOWER = 1; //valid range:
          choice = returnIntInput();

          if (choice < LOWER || choice > UPPER) { // check range    
            cout << "Enter an option 1 or 2: ";
            continue;
          }
          else
            break;
        }
        if (choice == 1)
        {   
            cout << "What is the height of the landing height relative to launch height (m)? ";
            while (true) {
              const int UPPER = 300000, LOWER = 0; //valid range:
              delta_y = returnNumInput();
              
              if (delta_y <= LOWER || delta_y > UPPER) { // check range    
                cout << "Enter a height above 0 m and under 300,000 m: ";
                continue;
              }
              else
                break;
            }
          cout << "How far away from the launching site (m, horizontally) does the new elevated height begin? ";
          while (true) {
            const int UPPER = 300000, LOWER = 0; //valid range:
            dx = returnNumInput();
            
            if (dx <= LOWER || dx > UPPER) { // check range    
              cout << "Enter a height above 0 m and under 300,000 m: ";
              continue;
            }
            else
              break;
          }
        }
        else
        {
          flag = false;
          cout << "How far below the launch height is the landing height (m)? ";
          while (true) {
            const int UPPER = 300000, LOWER = 0; //valid range:
            delta_y = returnNumInput();
            
            if (delta_y <= LOWER || delta_y > UPPER) { // check range    
              cout << "Enter a depth greater than 0 m and less than 300,000 m: ";
              continue;
            }
            else
              break;
          }
          delta_y = -delta_y;
        }
        cout << "Is the projectile launched at an angle (1 for yes, 2 for no?) ";
        while (true) {
          const int UPPER = 2, LOWER = 1; //valid range:
          ans = returnIntInput();
          
          if (ans < LOWER || ans > UPPER) { // check range    
            cout << "Enter an option 1 or 2: ";
            continue;
          }
          else
            break;
        }
        if (ans == 1)
        {
            cout << "What is the launch angle? ";
            while (true) {
              const int UPPER = 90, LOWER = 0; //valid range:
              theta = returnNumInput();

              if (theta < LOWER || theta > UPPER) { // check range    
                cout << "Enter an angle between 0 and 90 degrees: "; //technically could be a negative angle from horizontal...
                continue;
              }
              else
                break;
            }
        }
        else
          theta = 0;

        cout << "What is the object's intital velocity (in m/s)? ";
        while (true) {
          const int UPPER = 11200, LOWER = 0; //valid range:
          v_0 = returnNumInput();

          if (v_0 < LOWER || v_0 > UPPER) { // check range    
            cout << "Enter a velocity between 0 m/s and 11,200 m/s: "; //Earth's escape velocity
            continue;
          }
          else
            break;
        }
    }
    if (ans1 == 5)
    {
      cout << "Enter the height (m) for which to calculate time and distance: ";
      while (true) {
          const int UPPER = 300000, LOWER = 0; //valid range:
          spy = returnNumInput();

          if (spy < LOWER || spy > UPPER) { // check range    
            cout << "Enter a height between 0 and 300,000 m: "; //height for which G is within 5% of 9.81
            continue;
          }
          else
            break;
        }
    }
    else if (ans1 == 6)
    {
      cout << "Enter the horizontal distance (m) for which to calculate time and height: ";
      while (true) {
          const int UPPER = 300000, LOWER = 0; //valid range:
          spx = returnNumInput();

          if (spx < LOWER || spx > UPPER) { // check range    
            cout << "Enter a distance over 0 and under 20,000,000 m: "; //technically could be a negative angle from horizontal...
            continue;
          }
          else
            break;
        }
    }
    else if (ans1 == 7)
    {
      cout << "Enter the time (s) for which to calculate height and distance: ";
      while (true) {
          const int UPPER = 84000, LOWER = 0; //valid range:
          spt = returnNumInput();

          if (spt < LOWER || spt > UPPER) { // check range    
            cout << "Enter a time between 0 and 84000 s: "; //technically could be a negative angle from horizontal...
            continue;
          }
          else
            break;
        }
    }
    //formulas: 

    v_0x = v_0 * cos(theta * (M_PI / 180));
    v_0y = v_0 * sin(theta * (M_PI / 180));

    //flight time!! = time at which the projectile reaches landing
    //t = (2 * delta_y)/(v_0 + v_fy);
    t_maxh = v_0y/G; // when v_y = 0
    maxh = (v_0y * t_maxh) - ((1/2) * G * pow(t_maxh, 2));

    //t_fall = (maxh - delta_y)/G; 
    // assumes that the max height is above the landing height. still need to validate input.
    //t = t_maxh + t_fall;
    if (pow(v_0y, 2) >= 2 * G * delta_y) {
    t = (v_0y + sqrt(pow(v_0y, 2) - (2 * G * delta_y))) / G; // Positive root
    }
    else
      t = 99999;

    v_fx = v_0x;
    v_fy = v_0y - G * t;
    v_f = pow(v_fx, 2) + pow(v_fy, 2);

    d = v_0x * t;

    //time to reach the location of the elevated height:
    t_dx = dx / v_0x;
    //height of projectile at first elevated height:
    h_dx = (v_0y * t_dx) - ((1/2) * G * pow(t_dx, 2));

    //time(s) a projectile reaches a particular distance:
    t_spx = spx / v_0x;
    //height of projectile at that particular distance:
    h_spx = (v_0y * t_spx) - ((1/2) * G * pow(t_spx, 2));

    //time(s) a projectile reaches a particular height:
    if (pow(v_0y, 2) >= 2 * G * spy) {
    t_spy1 = (-1/G) * ((-v_0y) + sqrt(pow(v_0y, 2) - (2 * G * spy)));
    t_spy2 = (-1/G) * ((-v_0y) - sqrt(pow(v_0y, 2) - (2 * G * spy)));
    }
    else {
      t_spy1 = 9999999;
      t_spy2 = 9999999;
    }
    //distance traveled by the object at those heights:
    d_spy1 = v_0x * t_spy1;
    d_spy2 = v_0x * t_spy2;

    //the distance the object traveled by a certain time t_sp;
    d_spt = v_0x * spt;
    //the height the object has at a certain time t_sp;
    h_spt = (v_0y * spt) - (.5 * G * pow(spt, 2));
    
    if (!flag) // we are launching to an elevated height
    {
      if (h_dx < delta_y)
        cout << "The projectile does not have a high enough initial velocity \n"
             << "or the correct angle to reach a height of " << delta_y << " m" 
             << " a distance of " << dx << " m away. ";
    }
    else if (t == 9999999)
    {
      cout << "Complex flight time. Invalid parameters, no real solution. ";
    }
    else {
      switch (ans1)
      {
      case 1:
        cout << "The final velocity is " << v_f << " m/s. " << endl;
        break;
      case 2:
        //maxh
        cout << "The object reaches a maximum height of " << maxh << " m from the launch height. ";
        break;
      case 3:
        //dist traveled
        cout << "The object travels " << d << " m horizontally. ";
        break;
      case 4:
        cout << "The object is in the air for " << t << " s. ";
        break;
      case 5:
        if (maxh < spy){
          cout << "The object does not reach the specified height " << spy << " m. ";
        }
        else if (t_spy1 == 9999999 && t_spy2 == 9999999)
        {
          cout << "Complex time at height of " << spy << " m. No real solution for the "
               << "given parameters. ";
        }
        else {
        cout << "The object reaches a height of " << spy << " m after "
            << t_spy1 << " s at a distance of " << d_spy1 << " m \nand again after"
            << t_spy2 << " s at a distance of " << d_spy2 << " m from the launching point. ";
        }
        break;
      case 6:
        if (dx > d) {
        cout << "The projectile does not reach the horizontal distance " << dx << " m. ";
        return;
        }
        else {
          cout << "The object reaches a distance of " << spx << " m after "
              << t_spx << " s at a height of " << h_spx << " m. ";
        }
        break;
      case 7:
        if (spt > t) // the object lands before the specified time
        {
          cout << "The specified time " << spt << " s exceeds the time of flight. \n";
          cout << "That is, the object is at the landing height, " << delta_y << " m, "
               << "at a distance " << d << " m from the launch site. ";
        }
        else {
          cout << "At " << spt << " s after launch, the object is at height " << h_spt
               << " m, and a horizontal distance " << d_spt << " m from the launch site. "; 
        }
        break;
      default:
        cout << "Error. Did not choose options 1 - 7. ";
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


int returnIntInput() // just tp shorten the appearance of input validation
{
  string sInput;
  int iInput = 0;
  bool bValid = false;

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid && stoi(sInput) != stod(sInput)) {
      bValid = false;
      cout << "Error, not an integer. \n";
    }
    if (!bValid) {
      cout << "Enter a valid integer option: ";
    }

  } while (!bValid);

  return iInput;
}

float returnNumInput() // (accepts int or float, returns as float)
{
  string sInput;
  float fInput = 0.00;
  bool bValid = false;

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      fInput = stod(sInput);
    }
    if (!bValid) {
      cout << "Enter a valid number (integer or decimal): ";
    }
  } while (!bValid);
  
  return fInput;
}
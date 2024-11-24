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


//void function02() {}

//final (oops) velocity function. This will determine the class of projectile

/*// (I, II, or III) and calculate final velocity before hitting the ground
void function02() {

    char ans;
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
    //v_fy = v_0y + G * 

}
*/

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

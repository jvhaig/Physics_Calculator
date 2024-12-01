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

int Kinematics();           //Kinematics functions

int OneDKinematics();
void OneDVelDispAccTime();
void OneDViVfAccTime();

int TwoDKinematics();
void TwoDProjectileMotion();
void TwoDVelDispAccTime();
void TwoDViVfAccTime();

int ThreeDKinematics();
void ThreeDProjectileMotion();
void ThreeDVelDispAccTime();
void ThreeDViVfAccTime();

int AngularKinematics();
void AngVelDispAccTime();
void AngViVfAccTime();

int Dynamics();           //Dynamics functions

int OneDDynamics();
void OneDMomMassVel();
void OneDForceMassAcc();
void OneDAvgForceMomTime();
void OneDWorkForceDisp();
void Weight();
void Gravity();

int TwoDDynamics();
void TwoDMomMassVel();
void TwoDForceMassAcc();
void TwoDAvgForceMomTime();
void TwoDWorkForceDisp();
void Pressure();


int ThreeDDynamics();
void ThreeDMomMassVel();
void ThreeDForceMassAcc();
void ThreeDAvgForceMomTime();
void ThreeDWorkForceDisp();


int RotationalDynamics();
void AngMomInertiaAngVel();
void TorqueInertiaAngAcc();
void AvgTorqueAngMomTime();
void WorkTorqueAngDisp();

int Energy();           //Energy functions

int OneDEnergy();
void OneDKinMassVel();
void GravMassAcc();
void ElasSpringDisp();
void WorkEnergy();

int TwoDEnergy();
void TwoDKinMassVel();

int ThreeDEnergy();
void ThreeDKinMassVel();

int RotationalEnergy();
void RotationalKinIntertiaAngVel();

bool isNumber(string);            //Input Validation function
int returnIntInput();
float returnNumInput();

int main() {

  int iMainMenuChoice = 0;              //Main Menu choice variable

  int iKinematicsChoice = 0;            //Kinematics choice variables
  int iOneDKinematicsChoice = 0;
  int iTwoDKinematicsChoice = 0;
  int iThreeDKinematicsChoice = 0;
  int iAngularKinematicsChoice = 0;

  int iDynamicsChoice = 0;              //Dynamics choice variables
  int iOneDDynamicsChoice = 0;
  int iTwoDDynamicsChoice = 0;
  int iThreeDDynamicsChoice = 0;
  int iRotationalDynamicsChoice = 0;

  int iEnergyChoice = 0;
  int iOneDEnergyChoice = 0;
  int iTwoDEnergyChoice = 0;
  int iThreeDEnergyChoice = 0;
  int iRotationalEnergyChoice = 0;

  bool bChoice = false;           //bChoice set to false by default, becomes true when user selects an option other than quit. Becomes false when user selects Back.
  bool bSubChoice = false;
  bool bSubSubChoice = false;

  while (!bChoice) {
    iMainMenuChoice = displayCalculator();

    switch (iMainMenuChoice) {
    case 0:           //Occurs when Quit option is selected in main menu.
      bChoice = true;
      cout << "See you next time!" << endl;
    case 1:           //Occurs when Kinematics is selected in Main Menu.
      bChoice = true;
      bSubChoice = false;

      while (!bSubChoice) {
        iKinematicsChoice = Kinematics();

        switch (iKinematicsChoice) {
        case 0:
          cout << "See you next time!" << endl;
          return 0;
          break;
        case 1:           //Occurs when 1D Kinematics is selected in Kinematics Menu.
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iOneDKinematicsChoice = OneDKinematics();

            switch (iOneDKinematicsChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              OneDVelDispAccTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              OneDViVfAccTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 2:           //Occurs when 2D Kinematics is selected in Kinematics Menu.
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iTwoDKinematicsChoice = TwoDKinematics();

            switch (iTwoDKinematicsChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              TwoDProjectileMotion();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              TwoDVelDispAccTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 3:
              TwoDViVfAccTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 3:           //Occurs when 3D Kinematics is selected in Kinematics Menu.
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iThreeDKinematicsChoice = ThreeDKinematics();

            switch (iThreeDKinematicsChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              ThreeDProjectileMotion();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              ThreeDVelDispAccTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 3:
              ThreeDViVfAccTime();
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 4:           //Occurs when Angular Kinematics is selected in Kinematics Menu.
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iAngularKinematicsChoice = AngularKinematics();

            switch (iAngularKinematicsChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              AngVelDispAccTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              AngViVfAccTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 9:
          bChoice = false;
          bSubChoice = true;
          break;
        default:
          cout << "Error";
          break;
        }
      }
      break;
    case 2:           //Occurs when Dynamics is selected in main menu.
      bChoice = true;
      bSubChoice = false;

      while (!bSubChoice) {
        iDynamicsChoice = Dynamics();

        switch (iDynamicsChoice) {
        case 0:
          cout << "See you next time!" << endl;
          return 0;
          break;
        case 1:           //Occurs when 1D Dynamics is selected in Dynamics Menu.
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iOneDDynamicsChoice = OneDDynamics();

            switch (iOneDDynamicsChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              OneDMomMassVel();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              OneDForceMassAcc();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 3:
              OneDAvgForceMomTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 4:
              OneDWorkForceDisp();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 5:
              Weight();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 6:
              Gravity();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 2:           //Occurs when 2D Dynamics is selected in the Dynamics Menu.
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iTwoDDynamicsChoice = TwoDDynamics();

            switch (iTwoDDynamicsChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              TwoDMomMassVel();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              TwoDForceMassAcc();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 3:
              TwoDAvgForceMomTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 4:
              TwoDWorkForceDisp();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 5:
              Pressure();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 6:
              Weight();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 7:
              Gravity();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 3:           //Occurs when 3D Dynamics is selected in the Dynamics Menu
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iThreeDDynamicsChoice = ThreeDDynamics();

            switch (iThreeDDynamicsChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              ThreeDMomMassVel();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              ThreeDForceMassAcc();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 3:
              ThreeDAvgForceMomTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 4:
              ThreeDWorkForceDisp();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 5:
              Pressure();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 6:
              Weight();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 7:
              Gravity();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 4:           //Occurs when Rotational Dynamics is selected from the Dynamics menu
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iRotationalDynamicsChoice = RotationalDynamics();

            switch (iRotationalDynamicsChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              AngMomInertiaAngVel();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              TorqueInertiaAngAcc();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 3:
              AvgTorqueAngMomTime();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 4:
              WorkTorqueAngDisp();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 9:
          bChoice = false;
          bSubChoice = true;
          break;
        default:
          cout << "Error";
          break;
        }
      }
      break;
    case 3:           //Occurs when Energy is selected in main menu.
      bChoice = true;
      bSubChoice = false;

      while (!bSubChoice) {
        iEnergyChoice = Energy();

        switch (iEnergyChoice) {
        case 0:
          cout << "See you next time!" << endl;
          return 0;
          break;
        case 1:           //Occurs when Energy 1D is selected in Energy Menu.
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iOneDEnergyChoice = OneDEnergy();

            switch (iOneDEnergyChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              OneDKinMassVel();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              GravMassAcc();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 3:
              ElasSpringDisp();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 4:
              WorkEnergy();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 2:           //Occurs when Energy 2D is selected in the Energy Menu.
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iTwoDEnergyChoice = TwoDEnergy();

            switch (iTwoDEnergyChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              TwoDKinMassVel();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              GravMassAcc();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 3:
              ElasSpringDisp();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 4:
              WorkEnergy();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 3:           //Occurs when Energy 3D is selected in the Energy Menu
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iThreeDEnergyChoice = ThreeDEnergy();

            switch (iThreeDEnergyChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              ThreeDKinMassVel();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 2:
              GravMassAcc();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 3:
              ElasSpringDisp();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 4:
              WorkEnergy();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 4:           //Occurs when Rotational Energy is selected in the Energy Menu
          bChoice = false;
          bSubChoice = true;
          bSubSubChoice = false;

          while (!bSubSubChoice) {
            iRotationalEnergyChoice = RotationalEnergy();

            switch (iRotationalEnergyChoice) {
            case 0:
              cout << "See you next time!" << endl;
              return 0;
              break;
            case 1:
              RotationalKinIntertiaAngVel();
              bChoice = false;
              bSubChoice = true;
              bSubSubChoice = true;
              break;
            case 9:
              bChoice = true;
              bSubChoice = false;
              bSubSubChoice = true;
              break;
            default:
              cout << "Error";
              break;
            }
          }
          break;
        case 9:
          bChoice = false;
          bSubChoice = true;
          break;
        default:
          cout << "Error";
          break;
        }
      }
      break;
    }
  }
  return 0;
}

int displayCalculator() {             //Main Menu
  string sInput;
  int iInput = 0;
  bool bValid = false;

  cout << "========================" << endl;
  cout << "   PHYSICS CALCULATOR   " << endl;
  cout << "========================" << endl;
  cout << "|     1] Kinematics    |" << endl;
  cout << "+----------------------+" << endl;
  cout << "|     2] Dynamics      |" << endl;
  cout << "+----------------------+" << endl;
  cout << "|     3] Energy        |" << endl;
  cout << "========================" << endl;
  cout << "       (0 to quit)      " << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput); //accepts input, removes whitespace
    bValid = isNumber(sInput); //bValid checks through isNumber function
    if (bValid) {
      iInput = stoi(sInput); // converts iInput to int
    }
    if (bValid) {
      if ((iInput < 0 || iInput > 3) || stoi(sInput) != stod(sInput)) { //checks if 1-3 and if not double
        bValid = false; // intitialize bool if fails check
        cout << "Error\n";
      }
    }
    if (!bValid) { //if fails check
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}

int Kinematics() {            //Menu for Kinematics
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subMENU
  cout << "======================" << endl;
  cout << "--Kinematics--" << endl;
  cout << "1] 1D Kinematics" << endl;
  cout << "2] 2D Kinematics" << endl;
  cout << "3] 3D Kinematics" << endl;
  cout << "4] Angular Kinematics" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 4) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}

int OneDKinematics() {            //Menu for 1D Kinematics
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--1D Kinematics--" << endl;
  cout << "1] Velocity/Displacement/Acceleration/Time" << endl;
  cout << "2] Initial Velocity/Final Velocity/Acceleration/Time" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 2) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}

//int OneDMomMassVel() {
//  string sInput;
//  int iInput = 0;
//  bool bValid = false;
//
//  //subsubsubmenu
//  cout << "======================" << endl;
//  cout << "\nWhat would you like to solve for?" << endl;
//  cout << "\t1] Momentum" << endl;
//  cout << "\t2] Mass" << endl;
//  cout << "\t3] Velocity" << endl;
//  cout << "Enter an option: ";
//
//  do {
//    getline(cin >> ws, sInput);
//    bValid = isNumber(sInput);
//    if (bValid) {
//      iInput = stoi(sInput);
//    }
//    if (bValid && ((iInput < 0 || (iInput > 3))) || stoi(sInput) != stod(sInput)) {
//      bValid = false;
//      cout << "Error\n";
//    }
//    if (!bValid) {
//      cout << "Enter a valid option: ";
//    }
//
//  } while (!bValid);
//
//  return iInput;
//
//}
                                                            //1D Kinematics functions
void OneDVelDispAccTime() {
  string sInput, sUserIV, sUserTime, sUserDisplacement, sUserAcceleration;
  double dResult = 0.0, dUserIV = 0.0, dUserTime = 0.0, dUserDisplacement = 0.0, dUserAcceleration = 0.0;
  int iInput = 0;
  bool bValid = false;

  //subsubsubmenu
  cout << "======================" << endl;
  cout << "\nWhat would you like to solve for?" << endl;
  cout << "\t1] Displacement" << endl;
  cout << "\t2] Initial Velocity" << endl;
  cout << "\t3] Acceleration" << endl;
  cout << "\t4] Time" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if ((iInput < 0 || iInput > 4) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  switch (iInput) {
  case 1:
    cout << "\n--Displacement Calculator--" << endl;
    cout << "Enter Initial Velocity (m/s): ";
    do {
      getline(cin >> ws, sUserIV);
      bValid = isNumber(sUserIV);
      if (bValid) {
        dUserIV = stod(sUserIV);
      }

      if (!bValid) {
        cout << "Enter a valid initial velocity: ";
      }
    } while (!bValid);

    cout << "Enter acceleration (m/s^2): ";
    do {
      getline(cin >> ws, sUserAcceleration);
      bValid = isNumber(sUserAcceleration);
      if (bValid) {
        dUserAcceleration = stod(sUserAcceleration);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResult = dUserIV * dUserTime + 0.5 * dUserAcceleration * dUserTime * dUserTime;
    cout << "\n**************" << endl;
    cout << "Displacement: " << dResult << " m\n";
    cout << "**************\n" << endl;
    break;
  case 2:
    cout << "\n--Initial Velocity Calculator--" << endl;
    cout << "Enter Displacement (m): ";
    do {
      getline(cin >> ws, sUserDisplacement);
      bValid = isNumber(sUserDisplacement);
      if (bValid) {
        dUserDisplacement = stod(sUserDisplacement);

      }
      if (!bValid) {
        cout << "Enter a valid displacement: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration (m/s^2): ";
    do {
      getline(cin >> ws, sUserAcceleration);
      bValid = isNumber(sUserAcceleration);
      if (bValid) {
        dUserAcceleration = stod(sUserAcceleration);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResult = (dUserDisplacement - 0.5 * dUserAcceleration * dUserTime * dUserTime) / dUserTime;
    cout << "\n**************" << endl;
    cout << "Initial Velocity: " << dResult << " m/s\n";
    cout << "**************\n" << endl;
    break;
  case 3:
    cout << "\n--Acceleration Calculator--" << endl;
    cout << "Enter Displacement (m): ";
    do {
      getline(cin >> ws, sUserDisplacement);
      bValid = isNumber(sUserIV);
      if (bValid) {
        dUserDisplacement = stod(sUserDisplacement);
      }
      if (!bValid) {
        cout << "Enter a valid displacement: ";
      }
    } while (!bValid);

    cout << "Enter Initial Velocity (m/s): ";
    do {
      getline(cin >> ws, sUserIV);
      bValid = isNumber(sUserIV);
      if (bValid) {
        dUserIV = stod(sUserIV);
      }
      if (!bValid) {
        cout << "Enter a valid intial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResult = 2 * (dUserDisplacement - dUserIV * dUserTime) / (dUserTime * dUserTime);
    cout << "\n**************" << endl;
    cout << "Acceleration: " << dResult << " m/s^2\n";
    cout << "**************\n" << endl;
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
      if (!bValid) {
        cout << "Enter a valid displacement: ";
      }
    } while (!bValid);

    cout << "Enter Initial Velocity (m/s): ";
    do {
      getline(cin >> ws, sUserIV);
      bValid = isNumber(sUserIV);
      if (bValid) {
        dUserIV = stod(sUserIV);

      }
      if (!bValid) {
        cout << "Enter a valid intitial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration (m/s^2): ";
    do {
      getline(cin >> ws, sUserAcceleration);
      bValid = isNumber(sUserAcceleration);
      if (bValid) {
        dUserAcceleration = stod(sUserAcceleration);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);



    dResult = (-dUserIV + sqrt(dUserIV * dUserIV - (2 * dUserAcceleration * dUserDisplacement))) / dUserAcceleration;           //Not sure about this formula
    cout << "\n**************" << endl;
    cout << "Time: " << dResult << " s\n";

    if (dUserIV * dUserIV - (2 * dUserAcceleration * dUserDisplacement) < 0) {
      cout << "Input values may be incorrect. Please try again.";
    }
    else if (dUserAcceleration == 0) {
      cout << "0 Acceleration is not allowed for this calculation";
    }

    cout << "**************\n" << endl;
    break;
  }

}

void OneDViVfAccTime() {
  string sInput, sUserFV, sUserIV, sUserTime, sUserAcceleration;
  double dResult = 0.0, dUserFV = 0.0, dUserIV = 0.0, dUserTime = 0.0, dUserAcceleration = 0.0;
  int iInput = 0;
  bool bValid = false;

  //subsubsubmenu
  cout << "======================" << endl;
  cout << "\nWhat would you like to solve for?" << endl;
  cout << "\t1] Final Velocity" << endl;
  cout << "\t2] Initial Velocity" << endl;
  cout << "\t3] Acceleration" << endl;
  cout << "\t4] Time" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if ((iInput < 0 || iInput > 4) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  switch (iInput) {
  case 1:
    cout << "\n--Final Velocity Calculator--" << endl;
    cout << "Enter Initial Velocity (m/s): ";
    do {
      getline(cin >> ws, sUserIV);
      bValid = isNumber(sUserIV);
      if (bValid) {
        dUserIV = stod(sUserIV);
      }
      if (!bValid) {
        cout << "Enter a valid intitial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration (m/s^2): ";
    do {
      getline(cin >> ws, sUserIV);
      bValid = isNumber(sUserIV);
      if (bValid) {
        dUserIV = stod(sUserIV);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResult = dUserIV + dUserAcceleration * dUserTime;
    cout << "\n**************" << endl;
    cout << "Final Velocity: " << dResult << " m/s\n";
    cout << "**************\n" << endl;
    break;
  case 2:
    cout << "\n--Initial Velocity Calculator--" << endl;
    cout << "Enter Final Velocity (m/s): ";
    do {
      getline(cin >> ws, sUserFV);
      bValid = isNumber(sUserFV);
      if (bValid) {
        dUserFV = stod(sUserFV);
      }

      if (!bValid) {
        cout << "Enter a valid final velocity: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration (m/s^2): ";
    do {
      getline(cin >> ws, sUserAcceleration);
      bValid = isNumber(sUserAcceleration);
      if (bValid) {
        dUserAcceleration = stod(sUserAcceleration);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResult = dUserFV - (dUserAcceleration * dUserTime);
    cout << "\n**************" << endl;
    cout << "Initial Velocity: " << dResult << " m/s\n";
    cout << "**************\n" << endl;
    break;
  case 3:
    cout << "\n--Acceleration Calculator--" << endl;
    cout << "Enter Final Velocity (m/s): ";
    do {
      getline(cin >> ws, sUserFV);
      bValid = isNumber(sUserFV);
      if (bValid) {
        dUserFV = stod(sUserFV);
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

      if (!bValid) {
        cout << "Enter a valid initial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResult = dUserFV - (dUserAcceleration * dUserTime);
    cout << "\n**************" << endl;
    cout << "Acceleration: " << dResult << " m/s^2\n";
    cout << "**************\n" << endl;
    break;
  case 4:
    cout << "\n--Time Calculator--" << endl;
    cout << "Enter Final Velocity (m/s): ";
    do {
      getline(cin >> ws, sUserFV);
      bValid = isNumber(sUserFV);
      if (bValid) {
        dUserFV = stod(sUserFV);
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

      if (!bValid) {
        cout << "Enter a valid intitial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration (m/s^2): ";
    do {
      getline(cin >> ws, sUserAcceleration);
      bValid = isNumber(sUserAcceleration);
      if (bValid) {
        dUserAcceleration = stod(sUserAcceleration);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    dResult = (dUserFV - dUserIV) / dUserAcceleration;
    cout << "\n**************" << endl;
    cout << "Time: " << dResult << " s\n";
    cout << "**************\n" << endl;
    break;
  }

}

int TwoDKinematics() {            //Menu for 2D Kinematics.
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--2D Kinematics--" << endl;
  cout << "1] Projectile Motion" << endl;
  cout << "2] Velocity/Displacement/Acceleration/Time" << endl;
  cout << "3] Initial Velocity/Final Velocity/Acceleration/Time" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 3) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
//2D Kinematics functions
void TwoDProjectileMotion() {
    char ans;
    int choice, ans1;
    bool flag = true;
    bool flag2 = false;
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
        flag2 = true;
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
            cout << "Enter an angle 0 through 90 degrees: "; // does not accept downward launch or "backwards"
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
            flag = false;
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

    if (theta == 90)
      v_0x = 0;
    else
      v_0x = v_0 * cos(theta * (M_PI / 180));
    //if (theta == 0 && flag2) // if no angle and flat ground
    //  v_0y = 0;
    //else
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
    v_f = sqrt(pow(v_fx, 2) + pow(v_fy, 2));

    d = v_0x * t;

    //time to reach the location of the elevated height:
    t_dx = dx / v_0x;
    //height of projectile at first elevated height:
    h_dx = (v_0y * t_dx) - ((1/2) * G * pow(t_dx, 2));

    //time(s) a projectile reaches a particular distance:
    t_spx = spx / v_0x;
    //height of projectile at that particular distance:
    h_spx = (v_0y * t_spx) - ((1/2) * G * pow(t_spx, 2));

    //time(s) a projectile reaches a particular height: /// Need to fix if they choose a negative spy!!
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
    
    //For debugging, comment out when done:
    cout << endl 
         << "\nv_0x " << v_0x
         << "\nv_0y " << v_0y
         << "\nv_0 " << v_0
         << "\ndelta_y" << delta_y
         << "\nv_f " << v_f
         << "\nt " << t
         << "\nmaxh " << maxh
         << "\nd " << d 
         << "\ncase " << ans1
         << "\nh_spx" << h_spx
         << "\nt_spx" << t_spx
         << "\nspx" << spx
         << endl << endl;

    if (!flag && (h_dx < delta_y)) // we are launching to an elevated height, and it does not reach it
    {
        cout << "The projectile does not have a high enough initial velocity \n"
             << "or the correct angle to reach a height of " << delta_y << " m" 
             << " a distance of " << dx << " m away. \n";
    }
    else if (t == 9999999)
    {
      cout << "Complex flight time. Invalid parameters no real solution. \n";
    }
    else {
      switch (ans1)
      {
      case 1:
        cout << "The final velocity is " << v_f << " m/s. \n" << endl;
        break;
      case 2:
        //maxh
        cout << "The object reaches a maximum height of " << maxh << " m from the launch height. \n";
        break;
      case 3:
        //dist traveled
        cout << "The object travels " << d << " m horizontally. \n";
        break;
      case 4:
        cout << "The object is in the air for " << t << " s. \n";
        break;
      case 5:
        if (maxh < spy){
          cout << "The object does not reach the specified height " << spy << " m. \n";
        }
        else if (t_spy1 == 9999999 && t_spy2 == 9999999)
        {
          cout << "Complex time at height of " << spy << " m. No real solution for the "
               << "given parameters. \n";
        }
        else {
        cout << "The object reaches a height of " << spy << " m after "
            << t_spy1 << " s at a distance of " << d_spy1 << " m \nfrom the launching point and again after "
            << t_spy2 << " s at a distance of " << d_spy2 << " m. \n";
        }
        break;
      case 6:
        if (spx > d) {
        cout << "The projectile does not reach the horizontal distance " << spx << " m. \n";
        return;
        }
        else { cout << endl << h_spx << endl;
          cout << "The object reaches a distance of " << spx << " m after \n"
              << t_spx << " s at a height of " << h_spx << " m. \n";
        }
        break;
      case 7:
        if (spt > t) // the object lands before the specified time
        {
          cout << "The specified time " << spt << " s exceeds the time of flight. \n";
          cout << "That is, the object is at the landing height, " << delta_y << " m, "
               << "at a distance " << d << " m from the launch site. \n";
        }
        else {
          cout << "At " << spt << " s after launch, the object is at height " << h_spt
               << " m, and a horizontal distance " << d_spt << " m from the launch site. \n"; 
        }
        break;
      default:
        cout << "Error. Did not choose options 1 - 7. \n";
        break;
      }
    }


}

void TwoDVelDispAccTime() {
  string sInput, sUserIVX, sUserIVY, sUserTime, sUserDisplacementX, sUserDisplacementY, sUserAccelerationX, sUserAccelerationY, sUserDimension;
  double dResult = 0.0, dResultX = 0.0, dResultY = 0.0, dUserIVX = 0.0, dUserIVY = 0.0, dUserTime = 0.0, dUserDisplacementX = 0.0, dUserDisplacementY = 0.0, dUserAccelerationX = 0.0, dUserAccelerationY = 0.0;
  int iInput = 0;
  bool bValid = false;

  //subsubsubmenu
  cout << "======================" << endl;
  cout << "\nWhat would you like to solve for?" << endl;
  cout << "\t1] Displacement" << endl;
  cout << "\t2] Initial Velocity" << endl;
  cout << "\t3] Acceleration" << endl;
  cout << "\t4] Time" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if ((iInput < 0 || iInput > 4) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  switch (iInput) {
  case 1:
    cout << "\n--Displacement Calculator--" << endl;
    cout << "Enter Initial Velocity in the x-direction (m/s): ";
    do {
      getline(cin >> ws, sUserIVX);
      bValid = isNumber(sUserIVX);
      if (bValid) {
        dUserIVX = stod(sUserIVX);
      }

      if (!bValid) {
        cout << "Enter a valid velocity: ";
      }
    } while (!bValid);

    cout << "Enter Initial Velocity in the y-direction (m/s): ";
    do {
      getline(cin >> ws, sUserIVY);
      bValid = isNumber(sUserIVY);
      if (bValid) {
        dUserIVY = stod(sUserIVY);
      }

      if (!bValid) {
        cout << "Enter a valid velocity: ";
      }
    } while (!bValid);

    cout << "Enter acceleration in the x-direction (m/s^2): ";
    do {
      getline(cin >> ws, sUserAccelerationX);
      bValid = isNumber(sUserAccelerationX);
      if (bValid) {
        dUserAccelerationX = stod(sUserAccelerationX);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter acceleration in the y-direction (m/s^2): ";
    do {
      getline(cin >> ws, sUserAccelerationY);
      bValid = isNumber(sUserAccelerationY);
      if (bValid) {
        dUserAccelerationY = stod(sUserAccelerationY);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResultX = dUserIVX * dUserTime + 0.5 * dUserAccelerationX * dUserTime * dUserTime;
    dResultY = dUserIVY * dUserTime + 0.5 * dUserAccelerationY * dUserTime * dUserTime;
    dResult = abs(sqrt(dResultX * dResultX + dResultY * dResultY));
    cout << "\n**************" << endl;
    cout << "Displacement in the x-direction: " << dResultX << " m\n";
    cout << "Displacement in the y-direction: " << dResultY << " m\n";
    cout << "Total Displacement: " << dResult << " m\n";
    cout << "**************\n" << endl;
    break;
  case 2:
    cout << "\n--Initial Velocity Calculator--" << endl;
    cout << "Enter Displacement in the x-direction (m): ";
    do {
      getline(cin >> ws, sUserDisplacementX);
      bValid = isNumber(sUserDisplacementX);
      if (bValid) {
        dUserDisplacementX = stod(sUserDisplacementX);

      }
      if (!bValid) {
        cout << "Enter a valid displacement: ";
      }
    } while (!bValid);

    cout << "Enter Displacement in the y-direction (m): ";
    do {
      getline(cin >> ws, sUserDisplacementY);
      bValid = isNumber(sUserDisplacementY);
      if (bValid) {
        dUserDisplacementY = stod(sUserDisplacementY);

      }
      if (!bValid) {
        cout << "Enter a valid displacement: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration in the x-direction (m/s^2): ";
    do {
      getline(cin >> ws, sUserAccelerationX);
      bValid = isNumber(sUserAccelerationX);
      if (bValid) {
        dUserAccelerationX = stod(sUserAccelerationX);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration in the y-direction (m/s^2): ";
    do {
      getline(cin >> ws, sUserAccelerationY);
      bValid = isNumber(sUserAccelerationY);
      if (bValid) {
        dUserAccelerationY = stod(sUserAccelerationY);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResultX = (dUserDisplacementX - 0.5 * dUserAccelerationX * dUserTime * dUserTime) / dUserTime;
    dResultY = (dUserDisplacementY - 0.5 * dUserAccelerationY * dUserTime * dUserTime) / dUserTime;
    dResult = abs(sqrt(dResultX * dResultX + dResultY * dResultY));
    cout << "\n**************" << endl;
    cout << "Initial Velocity in the x-direction: " << dResultX << " m/s\n";
    cout << "Initial Velocity in the y-direction: " << dResultY << " m/s\n";
    cout << "Total Initial Velocity: " << dResult << " m/s\n";
    cout << "**************\n" << endl;
    break;
  case 3:
    cout << "\n--Acceleration Calculator--" << endl;
    cout << "Enter Displacement in the x-direction (m): ";
    do {
      getline(cin >> ws, sUserDisplacementX);
      bValid = isNumber(sUserIVX);
      if (bValid) {
        dUserDisplacementX = stod(sUserDisplacementX);
      }
      if (!bValid) {
        cout << "Enter a valid displacement: ";
      }
    } while (!bValid);

    cout << "Enter Displacement in the y-direction (m): ";
    do {
      getline(cin >> ws, sUserDisplacementY);
      bValid = isNumber(sUserIVX);
      if (bValid) {
        dUserDisplacementY = stod(sUserDisplacementY);
      }
      if (!bValid) {
        cout << "Enter a valid displacement: ";
      }
    } while (!bValid);

    cout << "Enter Initial Velocity in the x-direction (m/s): ";
    do {
      getline(cin >> ws, sUserIVX);
      bValid = isNumber(sUserIVX);
      if (bValid) {
        dUserIVX = stod(sUserIVX);
      }
      if (!bValid) {
        cout << "Enter a valid intial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Initial Velocity in the y-direction (m/s): ";
    do {
      getline(cin >> ws, sUserIVY);
      bValid = isNumber(sUserIVY);
      if (bValid) {
        dUserIVY = stod(sUserIVY);
      }
      if (!bValid) {
        cout << "Enter a valid intial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResultX = 2 * (dUserDisplacementX - dUserIVX * dUserTime) / (dUserTime * dUserTime);
    dResultY = 2 * (dUserDisplacementY - dUserIVY * dUserTime) / (dUserTime * dUserTime);
    dResult = abs(sqrt(dResultX * dResultX + dResultY * dResultY));
    cout << "\n**************" << endl;
    cout << "Acceleration in the x-direction: " << dResultX << " m/s^2\n";
    cout << "Acceleration in the y-direction: " << dResultY << " m/s^2\n";
    cout << "Total Acceleration: " << dResult << " m/s^2\n";
    cout << "**************\n" << endl;
    break;
  case 4:
    cout << "\n--Time Calculator--" << endl;
    cout << "Choose a dimension in which to calculate time (x or y): ";

    do {
      getline(cin >> ws, sUserDimension);

      if (sUserDimension == "x" || sUserDimension == "y") {
        bValid = true;
      }

      else {
        bValid = false;
        cout << "Error\n";
        cout << "Enter a valid dimension (x or y): ";
      }

    } while (!bValid);

    if (sUserDimension == "x") {

      cout << "Enter Displacement in the x-direction (m): ";
      do {
        getline(cin >> ws, sUserDisplacementX);
        bValid = isNumber(sUserDisplacementX);
        if (bValid) {
          dUserDisplacementX = stod(sUserDisplacementX);

        }
        if (!bValid) {
          cout << "Enter a valid displacement: ";
        }
      } while (!bValid);

      cout << "Enter Initial Velocity in the x-direction (m/s): ";
      do {
        getline(cin >> ws, sUserIVX);
        bValid = isNumber(sUserIVX);
        if (bValid) {
          dUserIVX = stod(sUserIVX);

        }
        if (!bValid) {
          cout << "Enter a valid intitial velocity: ";
        }
      } while (!bValid);

      cout << "Enter Acceleration in the x-direction (m/s^2): ";
      do {
        getline(cin >> ws, sUserAccelerationX);
        bValid = isNumber(sUserAccelerationX);
        if (bValid) {
          dUserAccelerationX = stod(sUserAccelerationX);
        }

        if (!bValid) {
          cout << "Enter a valid acceleration: ";
        }
      } while (!bValid);



      dResult = (-dUserIVX + sqrt(dUserIVX * dUserIVX - (2 * dUserAccelerationX * dUserDisplacementX))) / dUserAccelerationX;           //Not sure about this formula

      cout << "\n**************" << endl;
      cout << "Time: " << dResult << " s\n";

      if (dUserIVX * dUserIVX - (2 * dUserAccelerationX * dUserDisplacementX) < 0) {
        cout << "Input values may be incorrect. Please try again.";
      }
      else if (dUserAccelerationX == 0) {
        cout << "0 Acceleration is not allowed for this calculation";
      }

      cout << "**************\n" << endl;
      break;
    }
    else if (sUserDimension == "y") {
      cout << "Enter Displacement in the y-direction (m): ";
      do {
        getline(cin >> ws, sUserDisplacementY);
        bValid = isNumber(sUserDisplacementY);
        if (bValid) {
          dUserDisplacementX = stod(sUserDisplacementY);

        }
        if (!bValid) {
          cout << "Enter a valid displacement: ";
        }
      } while (!bValid);

      cout << "Enter Initial Velocity in the y-direction (m/s): ";
      do {
        getline(cin >> ws, sUserIVY);
        bValid = isNumber(sUserIVY);
        if (bValid) {
          dUserIVY = stod(sUserIVY);

        }
        if (!bValid) {
          cout << "Enter a valid intitial velocity: ";
        }
      } while (!bValid);

      cout << "Enter Acceleration in the y-direction (m/s^2): ";
      do {
        getline(cin >> ws, sUserAccelerationY);
        bValid = isNumber(sUserAccelerationY);
        if (bValid) {
          dUserAccelerationY = stod(sUserAccelerationY);
        }

        if (!bValid) {
          cout << "Enter a valid acceleration: ";
        }
      } while (!bValid);



      dResult = (-dUserIVY + sqrt(dUserIVY * dUserIVY - (2 * dUserAccelerationY * dUserDisplacementY))) / dUserAccelerationY;           //Not sure about this formula
      cout << "\n**************" << endl;
      cout << "Time: " << dResult << " s\n";

      if (dUserIVY * dUserIVY - (2 * dUserAccelerationY * dUserDisplacementY) < 0) {
        cout << "Input values may be incorrect. Please try again.";
      }
      else if (dUserAccelerationY == 0) {
        cout << "0 Acceleration is not allowed for this calculation";
      }

      cout << "**************\n" << endl;
      break;
    }
  }

}

void TwoDViVfAccTime() {
  string sInput, sUserFVX, sUserIVX, sUserTime, sUserAccelerationX, sUserFVY, sUserIVY, sUserAccelerationY, sUserDimension;
  double dResult = 0.0, dResultX = 0.0, dUserFVX = 0.0, dUserIVX = 0.0, dUserTime = 0.0, dUserAccelerationX = 0.0, dResultY = 0.0, dUserFVY = 0.0, dUserIVY = 0.0, dUserAccelerationY = 0.0;
  int iInput = 0;
  bool bValid = false;

  //subsubsubmenu
  cout << "======================" << endl;
  cout << "\nWhat would you like to solve for?" << endl;
  cout << "\t1] Final Velocity" << endl;
  cout << "\t2] Initial Velocity" << endl;
  cout << "\t3] Acceleration" << endl;
  cout << "\t4] Time" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if ((iInput < 0 || iInput > 4) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  switch (iInput) {
  case 1:
    cout << "\n--Final Velocity Calculator--" << endl;
    cout << "Enter Initial Velocity in the x-direction (m/s): ";
    do {
      getline(cin >> ws, sUserIVX);
      bValid = isNumber(sUserIVX);
      if (bValid) {
        dUserIVX = stod(sUserIVX);
      }
      if (!bValid) {
        cout << "Enter a valid intitial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Initial Velocity in the y-direction (m/s): ";
    do {
      getline(cin >> ws, sUserIVY);
      bValid = isNumber(sUserIVY);
      if (bValid) {
        dUserIVY = stod(sUserIVY);
      }
      if (!bValid) {
        cout << "Enter a valid intitial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration in the x-direction (m/s^2): ";
    do {
      getline(cin >> ws, sUserAccelerationX);
      bValid = isNumber(sUserAccelerationX);
      if (bValid) {
        dUserAccelerationX = stod(sUserAccelerationX);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration in the y-direction (m/s^2): ";
    do {
      getline(cin >> ws, sUserAccelerationY);
      bValid = isNumber(sUserAccelerationY);
      if (bValid) {
        dUserAccelerationY = stod(sUserAccelerationY);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResultX = dUserIVX + dUserAccelerationX * dUserTime;
    dResultY = dUserIVY + dUserAccelerationY * dUserTime;
    dResult = sqrt(dResultX * dResultX + dResultY * dResultY);

    cout << "\n**************" << endl;
    cout << "Final Velocity in the x-direction: " << dResultX << " m/s\n";
    cout << "Final Velocity in the y-direction: " << dResultY << " m/s\n";
    cout << "Total Final Velocity: " << dResult << " m/s\n";
    cout << "**************\n" << endl;
    break;
  case 2:
    cout << "\n--Initial Velocity Calculator--" << endl;
    cout << "Enter Final Velocity in the x-direction (m/s): ";
    do {
      getline(cin >> ws, sUserFVX);
      bValid = isNumber(sUserFVX);
      if (bValid) {
        dUserFVX = stod(sUserFVX);
      }

      if (!bValid) {
        cout << "Enter a valid final velocity: ";
      }
    } while (!bValid);

    cout << "Enter Final Velocity in the y-direction (m/s): ";
    do {
      getline(cin >> ws, sUserFVY);
      bValid = isNumber(sUserFVY);
      if (bValid) {
        dUserFVY = stod(sUserFVY);
      }

      if (!bValid) {
        cout << "Enter a valid final velocity: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration in the x-direction (m/s^2): ";
    do {
      getline(cin >> ws, sUserAccelerationX);
      bValid = isNumber(sUserAccelerationX);
      if (bValid) {
        dUserAccelerationX = stod(sUserAccelerationX);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Acceleration in the y-direction (m/s^2): ";
    do {
      getline(cin >> ws, sUserAccelerationY);
      bValid = isNumber(sUserAccelerationY);
      if (bValid) {
        dUserAccelerationY = stod(sUserAccelerationY);
      }

      if (!bValid) {
        cout << "Enter a valid acceleration: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResultX = dUserFVX - (dUserAccelerationX * dUserTime);
    dResultY = dUserFVY - (dUserAccelerationY * dUserTime);
    dResult = sqrt(dResultX * dResultX + dResultY * dResultY);

    cout << "\n**************" << endl;
    cout << "Initial Velocity in the x-direction: " << dResultX << " m/s\n";
    cout << "Initial Velocity in the y-direction: " << dResultY << " m/s\n";
    cout << "Total Initial Velocity: " << dResult << " m/s\n";
    cout << "**************\n" << endl;
    break;
  case 3:
    cout << "\n--Acceleration Calculator--" << endl;
    cout << "Enter Final Velocity in the x-direction (m/s): ";
    do {
      getline(cin >> ws, sUserFVX);
      bValid = isNumber(sUserFVX);
      if (bValid) {
        dUserFVX = stod(sUserFVX);
      }

      if (!bValid) {
        cout << "Enter a valid final velocity: ";
      }
    } while (!bValid);

    cout << "Enter Final Velocity in the y-direction (m/s): ";
    do {
      getline(cin >> ws, sUserFVY);
      bValid = isNumber(sUserFVY);
      if (bValid) {
        dUserFVY = stod(sUserFVY);
      }

      if (!bValid) {
        cout << "Enter a valid final velocity: ";
      }
    } while (!bValid);

    cout << "Enter Initial Velocity in the x-direction (m/s): ";
    do {
      getline(cin >> ws, sUserIVX);
      bValid = isNumber(sUserIVX);
      if (bValid) {
        dUserIVX = stod(sUserIVX);
      }

      if (!bValid) {
        cout << "Enter a valid initial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Initial Velocity in the y-direction (m/s): ";
    do {
      getline(cin >> ws, sUserIVY);
      bValid = isNumber(sUserIVY);
      if (bValid) {
        dUserIVY = stod(sUserIVY);
      }

      if (!bValid) {
        cout << "Enter a valid initial velocity: ";
      }
    } while (!bValid);

    cout << "Enter Time (s): ";
    do {
      getline(cin >> ws, sUserTime);
      bValid = isNumber(sUserTime);
      if (bValid) {
        dUserTime = stod(sUserTime);
      }
      if (bValid && (dUserTime < 0)) {
        bValid = false;
        cout << "Error\n";
      }
      if (!bValid) {
        cout << "Enter a valid time: ";
      }
    } while (!bValid);

    dResultX = dUserFVX - (dUserAccelerationX * dUserTime);
    dResultY = dUserFVY - (dUserAccelerationY * dUserTime);
    dResult = sqrt(dResultX * dResultX + dResultY * dResultY);
    cout << "\n**************" << endl;
    cout << "Acceleration in the x-direction: " << dResultX << " m/s^2\n";
    cout << "Acceleration in the y-direction: " << dResultY << " m/s^2\n";
    cout << "Total Acceleration: " << dResult << " m/s^2\n";
    cout << "**************\n" << endl;
    break;
  case 4:
    cout << "\n--Time Calculator--" << endl;

    cout << "Choose a dimension in which to calculate time (x or y): ";

    do {
      getline(cin >> ws, sUserDimension);

      if (sUserDimension == "x" || sUserDimension == "y") {
        bValid = true;
      }

      else {
        bValid = false;
        cout << "Error\n";
        cout << "Enter a valid dimension (x or y): ";
      }

    } while (!bValid);

    if (sUserDimension == "x") {
      cout << "Enter Final Velocity in the x-direction (m/s): ";
      do {
        getline(cin >> ws, sUserFVX);
        bValid = isNumber(sUserFVX);
        if (bValid) {
          dUserFVX = stod(sUserFVX);
        }

        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      cout << "Enter Initial Velocity in the x-direction (m/s): ";
      do {
        getline(cin >> ws, sUserIVX);
        bValid = isNumber(sUserIVX);
        if (bValid) {
          dUserIVX = stod(sUserIVX);
        }

        if (!bValid) {
          cout << "Enter a valid intitial velocity: ";
        }
      } while (!bValid);

      cout << "Enter Acceleration in the x-direction (m/s^2): ";
      do {
        getline(cin >> ws, sUserAccelerationX);
        bValid = isNumber(sUserAccelerationX);
        if (bValid) {
          dUserAccelerationX = stod(sUserAccelerationX);
        }

        if (!bValid) {
          cout << "Enter a valid acceleration: ";
        }
      } while (!bValid);

      dResult = (dUserFVX - dUserIVX) / dUserAccelerationX;
      cout << "\n**************" << endl;
      cout << "Time: " << dResult << " s\n";
      cout << "**************\n" << endl;
      break;
    }
    else if (sUserDimension == "y") {
      cout << "Enter Final Velocity in the y-direction (m/s): ";
      do {
        getline(cin >> ws, sUserFVY);
        bValid = isNumber(sUserFVY);
        if (bValid) {
          dUserFVY = stod(sUserFVY);
        }

        if (!bValid) {
          cout << "Enter a valid final velocity: ";
        }
      } while (!bValid);

      cout << "Enter Initial Velocity in the y-direction (m/s): ";
      do {
        getline(cin >> ws, sUserIVY);
        bValid = isNumber(sUserIVY);
        if (bValid) {
          dUserIVY = stod(sUserIVY);
        }

        if (!bValid) {
          cout << "Enter a valid intitial velocity: ";
        }
      } while (!bValid);

      cout << "Enter Acceleration in the y-direction (m/s^2): ";
      do {
        getline(cin >> ws, sUserAccelerationY);
        bValid = isNumber(sUserAccelerationY);
        if (bValid) {
          dUserAccelerationY = stod(sUserAccelerationY);
        }

        if (!bValid) {
          cout << "Enter a valid acceleration: ";
        }
      } while (!bValid);

      dResult = (dUserFVY - dUserIVY) / dUserAccelerationY;
      cout << "\n**************" << endl;
      cout << "Time: " << dResult << " s\n";
      cout << "**************\n" << endl;
      break;
    }
  }
}

int ThreeDKinematics() {            //Menu for 3D Kinematics.
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--3D Kinematics--" << endl;
  cout << "1] Projectile Motion" << endl;
  cout << "2] Velocity/Displacement/Acceleration/Time" << endl;
  cout << "3] Initial Velocity/Final Velocity/Acceleration/Time" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 3) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
//3D Kinematics functions
void ThreeDProjectileMotion() {
  cout << "no code\n";
}

void ThreeDVelDispAccTime() {
  cout << "no code\n";
}

void ThreeDViVfAccTime() {
  cout << "no code\n";
}

int AngularKinematics() {           //Menu for Angular Kinematics
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--Angular Kinematics--" << endl;
  cout << "1] Angular Velocity/Angular Displacement/Angular Acceleration/Time" << endl;
  cout << "2] Initial Angular Velocity/Final Angular Velocity/Angular Acceleration/Time" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 2) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
//Angular Kinematics functions
void AngVelDispAccTime() {
  cout << "no code\n";
}

void AngViVfAccTime() {
  cout << "no code\n";
}

int Dynamics() {            //Menu for dynamics
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subMENU
  cout << "======================" << endl;
  cout << "--Dynamics--" << endl;
  cout << "1] 1D Dynamics" << endl;
  cout << "2] 2D Dynamics" << endl;
  cout << "3] 3D Dynamics" << endl;
  cout << "4] Rotational Dynamics" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 4) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}

int OneDDynamics() {            //Menu for 1D Dynamics
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--1D Dynamics--" << endl;
  cout << "1] Momentum/Mass/Velocity" << endl;
  cout << "2] Force/Mass/Acceleration" << endl;
  cout << "3] Average Force/Change in Momentum/Change in Time" << endl;
  cout << "4] Work/Force/Displacement" << endl;
  cout << "5] Weight/Mass/Acceleration due to Gravity" << endl;
  cout << "6] Gravity/G/Mass 1/Mass 2/Radius" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 6) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
//1D Dynamics functions   
void OneDMomMassVel() {
  cout << "no code\n";
}

void OneDForceMassAcc() {
  cout << "no code\n";
}

void OneDAvgForceMomTime() {
  cout << "no code\n";
}

void OneDWorkForceDisp() {
  cout << "no code\n";
}

void Weight() {
  cout << "no code\n";
}

void Gravity() {
  cout << "no code\n";
}

int TwoDDynamics() {            //Menu for 2D Dynamics
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--2D Dynamics--" << endl;
  cout << "1] Momentum/Mass/Velocity" << endl;
  cout << "2] Force/Mass/Acceleration" << endl;
  cout << "3] Average Force/Change in Momentum/Change in Time" << endl;
  cout << "4] Work/Force/Displacement" << endl;
  cout << "5] Pressure/Force/Area" << endl;
  cout << "6] Weight/Mass/Acceleration due to Gravity" << endl;
  cout << "7] Gravity/G/Mass 1/Mass 2/Radius" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 7) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
//2D Dynamics functions
void TwoDMomMassVel() {
  cout << "no code\n";
}

void TwoDForceMassAcc() {
  cout << "no code\n";
}

void TwoDAvgForceMomTime() {
  cout << "no code\n";
}

void TwoDWorkForceDisp() {
  cout << "no code\n";
}

void Pressure() {
  cout << "no code\n";
}

int ThreeDDynamics() {            //Menu for 3D Dynamics
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--3D Dynamics--" << endl;
  cout << "1] Momentum/Mass/Velocity" << endl;
  cout << "2] Force/Mass/Acceleration" << endl;
  cout << "3] Average Force/Change in Momentum/Change in Time" << endl;
  cout << "4] Work/Force/Displacement" << endl;
  cout << "5] Pressure/Force/Area" << endl;
  cout << "6] Weight/Mass/Acceleration due to Gravity" << endl;
  cout << "7] Gravity/G/Mass 1/Mass 2/Radius" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 7) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
//3D Dynamics functions
void ThreeDMomMassVel() {
  cout << "no code\n";
}

void ThreeDForceMassAcc() {
  cout << "no code\n";
}

void ThreeDAvgForceMomTime() {
  cout << "no code\n";
}

void ThreeDWorkForceDisp() {
  cout << "no code\n";
}

int RotationalDynamics() {            //Menu for rotational dynamics
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--Rotational Dynamics--" << endl;
  cout << "1] Angular Momentum/Rotational Inertia/Angular Velocity" << endl;
  cout << "2] Torque/Rotational Inertia/Angular Acceleration" << endl;
  cout << "3] Average Torque/Change in Angular Momentum/Change in Time" << endl;
  cout << "4] Work/Torque/Angular Displacement" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 4) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
//Rotational Dynamics functions
void AngMomInertiaAngVel() {
  cout << "no code\n";
}

void TorqueInertiaAngAcc() {
  cout << "no code\n";
}

void AvgTorqueAngMomTime() {
  cout << "no code\n";
}

void WorkTorqueAngDisp() {
  cout << "no code\n";
}
//Energy functions
int Energy() {          //Energy Menu function
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subMENU
  cout << "======================" << endl;
  cout << "--Energy--" << endl;
  cout << "1] Energy 1D" << endl;
  cout << "2] Energy 2D" << endl;
  cout << "3] Energy 3D" << endl;
  cout << "4] Rotational Energy" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 4) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}

int OneDEnergy() {
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--Energy 1D--" << endl;
  cout << "1] Kinetic Energy/Mass/Velocity" << endl;
  cout << "2] Gravitational Potential Energy/Mass/Acceleration Due to Gravity" << endl;
  cout << "3] Elastic Potential Energy/Spring Constant/Displacement" << endl;
  cout << "4] Work/Change in Energy" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 4) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
void OneDKinMassVel() {
  string sInput, sUserVelocity, sUserMass, sUserKenEnergy;
  double dResult = 0.0, dUserVelocity = 0.0, dUserMass = 0.0, dUserKenEnergy = 0.0, dGravity = 9.8;
  int iInput = 0;
  bool bValid = false;
  cout << "======================" << endl;
  cout << "-Kinetic Energy/Mass/Velocity-" << endl;
  cout << "1] Kinetic Energy" << endl;
  cout << "2] Mass" << endl;
  cout << "3] Velocity" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 2) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  //kinetic energy, mass, velocity
  switch (iInput) {
  case 1:
    cout << "\n--1DEnergy: Kinetic Energy Calculator--" << endl;
    cout << "Enter Mass (kg): ";
    do {
      getline(cin >> ws, sUserMass);
      bValid = isNumber(sUserMass);
      if (bValid) {
        dUserMass = stod(sUserMass);
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

    //CALCULATE
    dResult = 0.5 * dUserMass * (dUserVelocity * dUserVelocity);
    cout << "\n**************" << endl;
    cout << "Kinetic Energy: " << dResult << " J\n";
    cout << "**************\n" << endl;
    break;

  case 2:
    cout << "\n--1DEnergy: Mass Calculator--" << endl;
    cout << "Enter Kinetic Energy (J): ";
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

    dResult = (2 * dUserKenEnergy) / (dUserVelocity * dUserVelocity);
    cout << "\n**************" << endl;
    cout << "Mass: " << dResult << " kg\n";
    cout << "**************\n" << endl;
    break;

  case 3: 
    cout << "\n--1DEnergy: Velocity Calculator--" << endl;
    cout << "Enter Mass (kg): ";
    do {
      getline(cin >> ws, sUserMass);
      bValid = isNumber(sUserMass);
      if (bValid) {
        dUserMass = stod(sUserMass);
      }

      if (!bValid) {
        cout << "Enter a valid mass: ";
      }
    } while (!bValid);

    cout << "Enter Kinetic Energy (J): ";
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

    dResult = sqrt((2 * dUserKenEnergy) / dUserMass);
    cout << "\n**************" << endl;
    cout << "Velocity: " << dResult << " m/s\n";
    cout << "**************\n" << endl;
    break;
};
}

void GravMassAcc() {
  string sInput, sUserAcceleration, sUserMass, sUserPEnergy, sUserHeight;
  double dResult = 0.0, dUserAcceleration = 0.0, dUserMass = 0.0, dUserPEnergy = 0.0, dGravity = 9.8, dUserHeight;
  int iInput = 0;
  bool bValid = false;
  cout << "======================" << endl;
  cout << "-Gravitational Potential Energy/Mass/Acceleration Due to Gravity-" << endl;
  cout << "1] Potential Energy" << endl;
  cout << "2] Mass" << endl;
  cout << "3] Acceleration w/ Gravity" << endl;
  cout << "4] Height" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 4) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);  

  switch (iInput) {
  case 1:
    cout << "\n--1DEnergy: Potential Energy Calculator--" << endl;
    cout << "Enter Mass (kg): ";
    do {
      getline(cin >> ws, sUserMass);
      bValid = isNumber(sUserMass);
      if (bValid) {
        dUserMass = stod(sUserMass);
      }

      if (!bValid) {
        cout << "Enter a valid mass: ";
      }
    } while (!bValid);

    cout << "Enter Height (m): ";
    do {
      getline(cin >> ws, sUserMass);
      bValid = isNumber(sUserMass);
      if (bValid) {
        dUserMass = stod(sUserMass);
      }

      if (!bValid) {
        cout << "Enter a valid height: ";
      }
    } while (!bValid);

    //CALCULATE
    dResult = 0.5 * dUserMass * dGravity * dUserHeight;
    cout << "\n**************" << endl;
    cout << "Potential Energy: " << dResult << " J\n";
    cout << "**************\n" << endl;
    break;

  case 2:
    cout << "\n--1DEnergy: Mass Calculator--" << endl;
    cout << "Enter Potential Energy (J): ";
    do {
      getline(cin >> ws, sUserPEnergy);
      bValid = isNumber(sUserPEnergy);
      if (bValid) {
        dUserPEnergy = stod(sUserPEnergy);
      }

      if (!bValid) {
        cout << "Enter a valid potential energy: ";
      }
    } while (!bValid);

    cout << "Enter Height (m): ";
    do {
      getline(cin >> ws, sUserHeight);
      bValid = isNumber(sUserHeight);
      if (bValid) {
        dUserHeight = stod(sUserHeight);
      }

      if (!bValid) {
        cout << "Enter a valid height: ";
      }
    } while (!bValid);

    // CALCULATE
    dResult = dUserPEnergy / (dGravity * dUserHeight);
    cout << "\n**************" << endl;
    cout << "Mass: " << dResult << " kg\n";
    cout << "**************\n" << endl;
    break;

  case 3: 
    cout << "\n--1DEnergy: Acceleration w/ Gravity Calculator--" << endl;
    cout << "Enter Potential Energy (J): ";
    do {
      getline(cin >> ws, sUserPEnergy);
      bValid = isNumber(sUserPEnergy);
      if (bValid) {
        dUserPEnergy = stod(sUserPEnergy);
      }

      if (!bValid) {
        cout << "Enter a valid potential energy: ";
      }
    } while (!bValid);

    cout << "Enter Mass (kg): ";
    do {
      getline(cin >> ws, sUserMass);
      bValid = isNumber(sUserMass);
      if (bValid) {
        dUserMass = stod(sUserMass);
      }

      if (!bValid) {
        cout << "Enter a valid mass: ";
      }
    } while (!bValid);

    cout << "Enter Height (m): ";
    do {
      getline(cin >> ws, sUserHeight);
      bValid = isNumber(sUserHeight);
      if (bValid) {
        dUserHeight = stod(sUserHeight);
      }

      if (!bValid) {
        cout << "Enter a valid height: ";
      }
    } while (!bValid);

      // CALCULATE
      dResult = dUserPEnergy / (dUserMass * dUserHeight);
      cout << "\n**************" << endl;
      cout << "Acceleration w/ Gravity: " << dResult << " m/s^2\n";
      cout << "**************\n" << endl;
      break;

  case 4:
    cout << "\n--1DEnergy: Height Calculator--" << endl;
    cout << "Enter Potential Energy (J): ";
    do {
      getline(cin >> ws, sUserPEnergy);
      bValid = isNumber(sUserPEnergy);
      if (bValid) {
        dUserPEnergy = stod(sUserPEnergy);
      }

      if (!bValid) {
        cout << "Enter a valid potential energy: ";
      }
    } while (!bValid);

    cout << "Enter Mass (kg): ";
    do {
      getline(cin >> ws, sUserMass);
      bValid = isNumber(sUserMass);
      if (bValid) {
        dUserMass = stod(sUserMass);
      }

      if (!bValid) {
        cout << "Enter a valid mass: ";
      }
    } while (!bValid);

    // CALCULATE
    dResult = dUserPEnergy / (dGravity * dUserMass);
    cout << "\n**************" << endl;
    cout << "Height: " << dResult << " m\n";
    cout << "**************\n" << endl;
    break;
  }
}

void ElasSpringDisp() {
  string sInput, sUserElasticPEnergy, sUserSpringConstant, sUserDisplacement;
  double dResult = 0.0, dUserElasticPEnergy = 0.0, dUserSpringConstant = 0.0, dUserDisplacement = 0.0;
  int iInput = 0;
  bool bValid = false;

  cout << "======================" << endl;
  cout << "--Energy 1D--" << endl;
  cout << "-Elastic Potential Energy/Spring Constant/Displacement-" << endl;
  cout << "1] Elastic Potential Energy Calculator" << endl;
  cout << "2] Spring Constant Calculator" << endl;
  cout << "3] Displacement Calculator" << endl;
  cout << "9] -Back" << endl;
  cout << "-------------------" << endl;

  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 3) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }
  } while (!bValid);

  switch (iInput) {
    case 1:
      cout << "\n--Elastic Potential Energy Calculator--" << endl;
      cout << "Enter Spring Constant (N/m): ";
      do {
        getline(cin >> ws, sUserSpringConstant);
        bValid = isNumber(sUserSpringConstant);
        if (bValid) {
          dUserSpringConstant = stod(sUserSpringConstant);
        }
        if (!bValid) {
          cout << "Enter a valid spring constant: ";
        }
      } while (!bValid);

      cout << "Enter Displacement (m): ";
      do {
        getline(cin >> ws, sUserDisplacement);
        bValid = isNumber(sUserDisplacement);
        if (bValid) {
          dUserDisplacement = stod(sUserDisplacement);
        }
        if (!bValid) {
          cout << "Enter a valid displacement: ";
        }
      } while (!bValid);

      // Calculate Elastic Potential Energy
      dResult = 0.5 * dUserSpringConstant * dUserDisplacement * dUserDisplacement;
      cout << "\n**************" << endl;
      cout << "Elastic Potential Energy: " << dResult << " J\n";
      cout << "**************\n" << endl;
      break;

    case 2:
      cout << "\n--Spring Constant Calculator--" << endl;
      cout << "Enter Elastic Potential Energy (J): ";
      do {
        getline(cin >> ws, sUserElasticPEnergy);
        bValid = isNumber(sUserElasticPEnergy);
        if (bValid) {
          dUserElasticPEnergy = stod(sUserElasticPEnergy);
        }
        if (!bValid) {
          cout << "Enter a valid elastic potential energy: ";
        }
      } while (!bValid);

      cout << "Enter Displacement (m): ";
      do {
        getline(cin >> ws, sUserDisplacement);
        bValid = isNumber(sUserDisplacement);
        if (bValid) {
          dUserDisplacement = stod(sUserDisplacement);
        }
        if (!bValid) {
          cout << "Enter a valid displacement: ";
        }
      } while (!bValid);

      // Calculate Spring Constant
      dResult = (2 * dUserElasticPEnergy) / (dUserDisplacement * dUserDisplacement);
      cout << "\n**************" << endl;
      cout << "Spring Constant: " << dResult << " N/m\n";
      cout << "**************\n" << endl;
      break;

    case 3:
      cout << "\n--Displacement Calculator--" << endl;
      cout << "Enter Elastic Potential Energy (J): ";
      do {
        getline(cin >> ws, sUserElasticPEnergy);
        bValid = isNumber(sUserElasticPEnergy);
        if (bValid) {
          dUserElasticPEnergy = stod(sUserElasticPEnergy);
        }
        if (!bValid) {
          cout << "Enter a valid elastic potential energy: ";
        }
      } while (!bValid);

      cout << "Enter Spring Constant (N/m): ";
      do {
        getline(cin >> ws, sUserSpringConstant);
        bValid = isNumber(sUserSpringConstant);
        if (bValid) {
          dUserSpringConstant = stod(sUserSpringConstant);
        }
        if (!bValid) {
          cout << "Enter a valid spring constant: ";
        }
      } while (!bValid);

      // Calculate Displacement
      dResult = sqrt((2 * dUserElasticPEnergy) / dUserSpringConstant);
      cout << "\n**************" << endl;
      cout << "Displacement: " << dResult << " m\n";
      cout << "**************\n" << endl;
      break;

    case 4 :
      break;
  }
}

void WorkEnergy() {
  string sInput, sUserForce, sUserDistance, sUserWork, sUserChangeInEnergy;
  double dResult = 0.0, dUserForce = 0.0, dUserDistance = 0.0, dUserWork = 0.0, dUserChangeInEnergy = 0.0;
  int iInput = 0;
  bool bValid = false;

  cout << "======================" << endl;
  cout << "-Work/Change in Energy-" << endl;
  cout << "1] Work Calculator" << endl;
  cout << "2] Force Calculator" << endl;
  cout << "3] Distance Calculator" << endl;
  cout << "9] -Back" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 3) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }
  } while (!bValid);

  switch (iInput) {
    case 1:
      cout << "\n--Work Calculator--" << endl;
      cout << "Enter Force (N): ";
      do {
        getline(cin >> ws, sUserForce);
        bValid = isNumber(sUserForce);
        if (bValid) {
          dUserForce = stod(sUserForce);
        }
        if (!bValid) {
          cout << "Enter a valid force: ";
        }
      } while (!bValid);

      cout << "Enter Distance (m): ";
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

    //WORK
      dResult = dUserForce * dUserDistance;
      cout << "\n**************" << endl;
      cout << "Work: " << dResult << " J\n";
      cout << "**************\n" << endl;
      break;

    case 2:
      cout << "\n--Force Calculator--" << endl;
      cout << "Enter Work (J): ";
      do {
        getline(cin >> ws, sUserWork);
        bValid = isNumber(sUserWork);
        if (bValid) {
          dUserWork = stod(sUserWork);
        }
        if (!bValid) {
          cout << "Enter a valid work: ";
        }
      } while (!bValid);

      cout << "Enter Distance (m): ";
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

    //FORCE
      dResult = dUserWork / dUserDistance;
      cout << "\n**************" << endl;
      cout << "Force: " << dResult << " N\n";
      cout << "**************\n" << endl;
      break;

    case 3:
      cout << "\n--Distance Calculator--" << endl;
      cout << "Enter Work (J): ";
      do {
        getline(cin >> ws, sUserWork);
        bValid = isNumber(sUserWork);
        if (bValid) {
          dUserWork = stod(sUserWork);
        }
        if (!bValid) {
          cout << "Enter a valid work: ";
        }
      } while (!bValid);

      cout << "Enter Force (N): ";
      do {
        getline(cin >> ws, sUserForce);
        bValid = isNumber(sUserForce);
        if (bValid) {
          dUserForce = stod(sUserForce);
        }
        if (!bValid) {
          cout << "Enter a valid force: ";
        }
      } while (!bValid);

    //DISTANCE
      dResult = dUserWork / dUserForce;
      cout << "\n**************" << endl;
      cout << "Distance: " << dResult << " m\n";
      cout << "**************\n" << endl;
      break;

    case 9:
      break;
  }
}

int TwoDEnergy() {
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--Energy 2D--" << endl;
  cout << "1] Kinetic Energy/Mass/Velocity" << endl;
  cout << "2] Gravitational Potential Energy/Mass/Acceleration Due to Gravity" << endl;
  cout << "3] Elastic Potential Energy/Spring Constant/Displacement" << endl;
  cout << "4] Work/Change in Energy" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 4) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
void TwoDKinMassVel() {
  string sInput, sUserMass, sUserVx, sUserVy, sUserKenEnergy;
  double dResult = 0.0, dUserMass = 0.0, dUserVx = 0.0, dUserVy = 0.0, dUserKenEnergy = 0.0;
  int iInput = 0;
  bool bValid = false;

  cout << "======================" << endl;
  cout << "-Kinetic Energy/Mass/Velocity-" << endl;
  cout << "1] Kinetic Energy" << endl;
  cout << "2] Mass" << endl;
  cout << "3] Velocity" << endl;
  cout << "9] -Back" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 3) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }
  } while (!bValid);

  //KINETIC ENERGY
  switch (iInput) {
    case 1:
      cout << "\n--2DEnergy: Kinetic Energy Calculator--" << endl;
      cout << "Enter Mass (kg): ";
      do {
        getline(cin >> ws, sUserMass);
        bValid = isNumber(sUserMass);
        if (bValid) {
          dUserMass = stod(sUserMass);
        }
        if (!bValid) {
          cout << "Enter a valid mass: ";
        }
      } while (!bValid);

      cout << "Enter Velocity in X direction (m/s): ";
      do {
        getline(cin >> ws, sUserVx);
        bValid = isNumber(sUserVx);
        if (bValid) {
          dUserVx = stod(sUserVx);
        }
        if (!bValid) {
          cout << "Enter a valid velocity: ";
        }
      } while (!bValid);

      cout << "Enter Velocity in Y direction (m/s): ";
      do {
        getline(cin >> ws, sUserVy);
        bValid = isNumber(sUserVy);
        if (bValid) {
          dUserVy = stod(sUserVy);
        }
        if (!bValid) {
          cout << "Enter a valid velocity: ";
        }
      } while (!bValid);

      //CALCULTE KINETIC ENERGY; X, Y
      dResult = 0.5 * dUserMass * (dUserVx * dUserVx + dUserVy * dUserVy);
      cout << "\n**************" << endl;
      cout << "Kinetic Energy: " << dResult << " J\n";
      cout << "**************\n" << endl;
      break;

    //MASS
    case 2:
      cout << "\n--2DEnergy: Mass Calculator--" << endl;
      cout << "Enter Kinetic Energy (J): ";
      do {
        getline(cin >> ws, sUserKenEnergy);
        bValid = isNumber(sUserKenEnergy);
        if (bValid) {
          dUserKenEnergy = stod(sUserKenEnergy);
        }
        if (!bValid) {
          cout << "Enter a valid kinetic energy: ";
        }
      } while (!bValid);

      cout << "Enter Velocity in X direction (m/s): ";
      do {
        getline(cin >> ws, sUserVx);
        bValid = isNumber(sUserVx);
        if (bValid) {
          dUserVx = stod(sUserVx);
        }
        if (!bValid) {
          cout << "Enter a valid velocity: ";
        }
      } while (!bValid);

      cout << "Enter Velocity in Y direction (m/s): ";
      do {
        getline(cin >> ws, sUserVy);
        bValid = isNumber(sUserVy);
        if (bValid) {
          dUserVy = stod(sUserVy);
        }
        if (!bValid) {
          cout << "Enter a valid velocity: ";
        }
      } while (!bValid);

      //CALCULATE MASS; X, Y
      dResult = (2 * dUserKenEnergy) / (dUserVx * dUserVx + dUserVy * dUserVy);
      cout << "\n**************" << endl;
      cout << "Mass: " << dResult << " kg\n";
      cout << "**************\n" << endl;
      break;

    //VELOCITY
    case 3:
      cout << "\n--2DEnergy: Velocity Calculator--" << endl;
      cout << "Enter Mass (kg): ";
      do {
        getline(cin >> ws, sUserMass);
        bValid = isNumber(sUserMass);
        if (bValid) {
          dUserMass = stod(sUserMass);
        }
        if (!bValid) {
          cout << "Enter a valid mass: ";
        }
      } while (!bValid);

      cout << "Enter Kinetic Energy (J): ";
      do {
        getline(cin >> ws, sUserKenEnergy);
        bValid = isNumber(sUserKenEnergy);
        if (bValid) {
          dUserKenEnergy = stod(sUserKenEnergy);
        }
        if (!bValid) {
          cout << "Enter a valid kinetic energy: ";
        }
      } while (!bValid);

      // CALCULATE VELOCITY
      dResult = sqrt((2 * dUserKenEnergy) / dUserMass);
      cout << "\n**************" << endl;
      cout << "Velocity: " << dResult << " m/s\n";
      cout << "**************\n" << endl;
      break;

      case 9 :
        break;
  }
}

int ThreeDEnergy() {
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--Energy 3D--" << endl;
  cout << "1] Kinetic Energy/Mass/Velocity" << endl;
  cout << "2] Gravitational Potential Energy/Mass/Acceleration Due to Gravity" << endl;
  cout << "3] Elastic Potential Energy/Spring Constant/Displacement" << endl;
  cout << "4] Work/Change in Energy" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 4) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
void ThreeDKinMassVel() {
  string sInput, sUserMass, sUserVx, sUserVy, sUserVz, sUserKenEnergy;
  double dResult = 0.0, dUserMass = 0.0, dUserVx = 0.0, dUserVy = 0.0, dUserVz = 0.0, dUserKenEnergy = 0.0;
  int iInput = 0;
  bool bValid = false;

  cout << "======================" << endl;
  cout << "-Kinetic Energy/Mass/Velocity-" << endl;
  cout << "1] Kinetic Energy" << endl;
  cout << "2] Mass" << endl;
  cout << "3] Velocity" << endl;
  cout << "9] -Back" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 3) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }
  } while (!bValid);

  //KINETIC ENERGY
  switch (iInput) {
    case 1:
      cout << "\n--3DEnergy: Kinetic Energy Calculator--" << endl;
      cout << "Enter Mass (kg): ";
      do {
        getline(cin >> ws, sUserMass);
        bValid = isNumber(sUserMass);
        if (bValid) {
          dUserMass = stod(sUserMass);
        }
        if (!bValid) {
          cout << "Enter a valid mass: ";
        }
      } while (!bValid);

      cout << "Enter Velocity in X direction (m/s): ";
      do {
        getline(cin >> ws, sUserVx);
        bValid = isNumber(sUserVx);
        if (bValid) {
          dUserVx = stod(sUserVx);
        }
        if (!bValid) {
          cout << "Enter a valid velocity: ";
        }
      } while (!bValid);

      cout << "Enter Velocity in Y direction (m/s): ";
      do {
        getline(cin >> ws, sUserVy);
        bValid = isNumber(sUserVy);
        if (bValid) {
          dUserVy = stod(sUserVy);
        }
        if (!bValid) {
          cout << "Enter a valid velocity: ";
        }
      } while (!bValid);

      cout << "Enter Velocity in Z direction (m/s): ";
      do {
        getline(cin >> ws, sUserVz);
        bValid = isNumber(sUserVz);
        if (bValid) {
          dUserVz = stod(sUserVz);
        }
        if (!bValid) {
          cout << "Enter a valid velocity: ";
        }
      } while (!bValid);

      //CALCULATE KINETIC ENERGY; X, Y, Z
      dResult = 0.5 * dUserMass * (dUserVx * dUserVx + dUserVy * dUserVy + dUserVz * dUserVz);
      cout << "\n**************" << endl;
      cout << "Kinetic Energy: " << dResult << " J\n";
      cout << "**************\n" << endl;
      break;

    //MASS
    case 2:
      cout << "\n--3DEnergy: Mass Calculator--" << endl;
      cout << "Enter Kinetic Energy (J): ";
      do {
        getline(cin >> ws, sUserKenEnergy);
        bValid = isNumber(sUserKenEnergy);
        if (bValid) {
          dUserKenEnergy = stod(sUserKenEnergy);
        }
        if (!bValid) {
          cout << "Enter a valid kinetic energy: ";
        }
      } while (!bValid);

      cout << "Enter Velocity in X direction (m/s): ";
      do {
        getline(cin >> ws, sUserVx);
        bValid = isNumber(sUserVx);
        if (bValid) {
          dUserVx = stod(sUserVx);
        }
        if (!bValid) {
          cout << "Enter a valid velocity: ";
        }
      } while (!bValid);

      cout << "Enter Velocity in Y direction (m/s): ";
      do {
        getline(cin >> ws, sUserVy);
        bValid = isNumber(sUserVy);
        if (bValid) {
          dUserVy = stod(sUserVy);
        }
        if (!bValid) {
          cout << "Enter a valid velocity: ";
        }
      } while (!bValid);

      cout << "Enter Velocity in Z direction (m/s): ";
      do {
        getline(cin >> ws, sUserVz);
        bValid = isNumber(sUserVz);
        if (bValid) {
          dUserVz = stod(sUserVz);
        }
        if (!bValid) {
          cout << "Enter a valid velocity: ";
        }
      } while (!bValid);

      //CALCULATE MASS; X, Y, Z
      dResult = (2 * dUserKenEnergy) / (dUserVx * dUserVx + dUserVy * dUserVy + dUserVz * dUserVz);
      cout << "\n**************" << endl;
      cout << "Mass: " << dResult << " kg\n";
      cout << "**************\n" << endl;
      break;

    //VELOCITY
    case 3:
      cout << "\n--3DEnergy: Velocity Calculator--" << endl;
      cout << "Enter Mass (kg): ";
      do {
        getline(cin >> ws, sUserMass);
        bValid = isNumber(sUserMass);
        if (bValid) {
          dUserMass = stod(sUserMass);
        }
        if (!bValid) {
          cout << "Enter a valid mass: ";
        }
      } while (!bValid);

      cout << "Enter Kinetic Energy (J): ";
      do {
        getline(cin >> ws, sUserKenEnergy);
        bValid = isNumber(sUserKenEnergy);
        if (bValid) {
          dUserKenEnergy = stod(sUserKenEnergy);
        }
        if (!bValid) {
          cout << "Enter a valid kinetic energy: ";
        }
      } while (!bValid);

      //CALCULATE VELOCITY
      dResult = sqrt((2 * dUserKenEnergy) / dUserMass);
      cout << "\n**************" << endl;
      cout << "Velocity: " << dResult << " m/s\n";
      cout << "**************\n" << endl;
      break;

    case 9:
      break;
  }
}


int RotationalEnergy() {
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubMENU
  cout << "======================" << endl;
  cout << "--Rotational Energy--" << endl;
  cout << "1] Rotational Kinetic Energy/Rotational Inertia/Angular Velocity" << endl;
  cout << "9] -Back" << endl;
  cout << "0] -Quit" << endl;
  cout << "-------------------" << endl;
  cout << "Enter an option: ";

  do {
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if (((iInput < 0 || iInput > 1) && iInput != 9) || stoi(sInput) != stod(sInput)) {
        bValid = false;
        cout << "Error\n";
      }
    }
    if (!bValid) {
      cout << "Enter a valid option: ";
    }

  } while (!bValid);

  return iInput;
}
void RotationalKinIntertiaAngVel() {
  cout << "no code\n";
}



//Input Validation function
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

int returnIntInput() //using this in 2D projectile motion, 
//slightly shortens appearance of input validations
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

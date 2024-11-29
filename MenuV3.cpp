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
  cout << "no code\n";
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
  cout << "no code\n";
}

void GravMassAcc() {
  cout << "no code\n";
}

void ElasSpringDisp() {
  cout << "no code\n";
}

void WorkEnergy() {
  cout << "no code\n";
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
  cout << "no code\n";
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
  cout << "no code\n";
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

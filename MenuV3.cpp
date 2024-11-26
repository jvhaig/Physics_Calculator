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
    getline(cin >> ws, sInput);
    bValid = isNumber(sInput);
    if (bValid) {
      iInput = stoi(sInput);
    }
    if (bValid) {
      if ((iInput < 0 || iInput > 3) || stoi(sInput) != stod(sInput)) {
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
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubsubmenu
  cout << "======================" << endl;
  cout << "\nWhat would you like to solve for?" << endl;
  cout << "\t1] Displacement" << endl;
  cout << "\t2] Velocity" << endl;
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

}

void OneDViVfAccTime() {
  string sInput;
  int iInput = 0;
  bool bValid = false;

  //subsubsubmenu
  cout << "======================" << endl;
  cout << "\nWhat would you like to solve for?" << endl;
  cout << "\t1] Initial Velocity	" << endl;
  cout << "\t2] Final Velocity" << endl;
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
  cout << "no code\n";
}

void TwoDViVfAccTime() {
  cout << "no code\n";
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

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
using namespace std;

void displayCalculator(int &userFunctionNum);
void function01();
void function02();
void functionWriteOut();

int main()
{
    //DECLARE
    int userFunctionNum;

    displayCalculator(userFunctionNum);
    //INPUTS
    switch (userFunctionNum) {
        case 1:
            function01();
        case 2:
            function02();
        default: 
            functionWriteOut();
    }

    //RETURN
    return 0;
}

void displayCalculator(int &userFunctionNum) {
    bool isValid;

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
    
    do {
        bool isValid = true;
        cout << setw(25) << "Enter Option: ";
        cin >> userFunctionNum;

        if (!isdigit (userFunctionNum)) {
            cout << "INVALID ENTRY" << endl;
            isValid = false;
            break;
        }
    } while(!isValid);
    
}

void function01() {

}
void function02() {

}

void functionWriteOut() {
    ofstream outFile("results.txt");


    outFile.close();
}

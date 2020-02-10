/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    int menChoi;
    float airCon, watCon, steCon, distance, seconds;
    airCon = 1100;
    watCon = 4900;
    steCon = 16400;
    std::cout << "Choose which medium the sound wave will travel in." << std::endl;
    std::cout << "1.Air" << std::endl;
    std::cout << "2.Water" << std::endl;
    std::cout << "3.Steel"<< std::endl;
    cin >> menChoi;
    switch(menChoi){
        case 1:
            std::cout << "Enter the distance the wave will travel:" << std::endl;
            cin >> distance;
            seconds = distance / airCon;
            std::cout << "The wave will take " << seconds << " seconds";
            break;
        case 2:
            std::cout << "Enter the distance the wave will travel:" << std::endl;
            cin >> distance;
            seconds = distance / watCon;
            std::cout << "The wave will take " << seconds << " seconds";
            break;
        case 3:
            std::cout << "Enter the distance the wave will travel:" << std::endl;
            cin >> distance;
            seconds = distance / steCon;
            std::cout << "The wave will take " << seconds << " seconds";
            break;
    }
    return 0;
}
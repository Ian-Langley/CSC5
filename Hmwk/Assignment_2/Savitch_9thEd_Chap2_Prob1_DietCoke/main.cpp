/* 
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
const float percSug = .001;
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    float massMou = 35, massMan, massCan = 350, sugKMou = 5, lbsToG = 45359.2, gSugCan, sugKMan, mouKRat;
    int numCans;
    std::cout << "Program to calculate the limit of Soda Pop Consumption." << std::endl;
    std::cout << "Input the desired dieters weight in lbs." << std::endl;
    std::cin >> massMan;
    
    mouKRat = sugKMou / massMou;
    massMan = massMan * lbsToG / 100;
    gSugCan = percSug * massCan;
    sugKMan = mouKRat * massMan;
    numCans = sugKMan / gSugCan;
    
    std::cout << "The maximum number of soda pop cans" << std::endl;
    std::cout << "which can be consumed is " << numCans << " cans";
    
    return 0;
}
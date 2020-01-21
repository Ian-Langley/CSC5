/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <math.h>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    int angleDEG;
    double angleRAD, sineOut, cosineOut, tangentOut;
    std::cout << "Calculate trig functions" << std::endl;
    std::cout << "Input the angle in degrees." << std::endl;
    cin >> angleDEG;
    angleRAD = angleDEG*(M_PI/180);
    sineOut = sin(angleRAD);
    cosineOut = cos(angleRAD);
    tangentOut = tan(angleRAD);
    std::cout << "sin(" << angleDEG << ") = "<< sineOut << std::endl;
    std::cout << "cos(" << angleDEG << ") = "<< cosineOut << std::endl;
    std::cout << "tan(" << angleDEG << ") = "<< tangentOut;
    return 0;
}
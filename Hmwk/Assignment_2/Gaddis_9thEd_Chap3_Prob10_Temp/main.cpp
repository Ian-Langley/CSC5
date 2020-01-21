/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    double fTemp, cTemp;
    std::cout <<"Temperature Converter"  << std::endl;
    std::cout << "Input Degrees Fahrenheit" << std::endl;
    cin >> fTemp;
    cTemp = (5.0/9.0)*(fTemp - 32.0);
    std::cout << fTemp << " Degrees Fahrenheit = " << cTemp << " Degrees Centigrade";
    
    return 0;
}
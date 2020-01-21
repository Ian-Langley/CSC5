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
    double percentage, replaceCost, minInsurance;
    std::cout << "Insurance Calculator" << std::endl;
    std::cout << "How much is your house worth?" << std::endl;
    cin >> replaceCost;
    percentage = .80;
    minInsurance = replaceCost * percentage;
    std::cout << "You need $" << minInsurance<< " of insurance.";
    return 0;
}
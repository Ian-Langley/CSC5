/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
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
   float scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive, scoreTotal, scoreAverage;
   std::cout << "Input 5 numbers to average." << std::endl;
   cin >> scoreOne >> scoreTwo >> scoreThree >> scoreFour >> scoreFive;
   scoreTotal = scoreOne + scoreTwo + scoreThree + scoreFour + scoreFive;
   scoreAverage = scoreTotal / 5.0;
   std::cout << "The average = " << setprecision(1) << scoreAverage;
   
   
   
   
   
   
    return 0;
}
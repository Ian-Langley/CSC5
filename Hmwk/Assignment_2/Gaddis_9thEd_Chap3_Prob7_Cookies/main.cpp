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
    //Set the random number seed
    
    //Declare Variables
    double cookiesTotal, servingTotal, cookiesServing, cookiesAte, servingCalories, totalCalories;
    cout << "Calorie Counter\n";
    cout << "How many cookies did you eat?\n";
    cin >> cookiesAte;
    cookiesTotal = 40;
    servingTotal = 10;
    cookiesServing = cookiesTotal/servingTotal;
    servingCalories = 300;
    totalCalories = cookiesAte * (servingCalories/cookiesServing);

    cout << "You consumed " << totalCalories << " calories.";
    //Exit stage right or left!
    return 0;
}
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
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int numOne, numTwo;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs
    std::cout << "Enter a number:" << std::endl;
    std::cin >> numOne;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> numTwo;
    if(numOne > numTwo){
    std::cout << numOne << " is larger";
    }
     if(numTwo > numOne){
    std::cout << numTwo << " is larger";
    }
    //Exit stage right!
    return 0;
}
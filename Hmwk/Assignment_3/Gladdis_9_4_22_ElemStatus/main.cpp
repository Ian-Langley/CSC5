/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    string mercWill = "Mercury will ";
    string ethWill = "Ethyl alcohol will ";
    string oxyWill = "Oxygen will ";
    string watWill = "Water will ";
    string boil = "boil";
    string freeze = "freeze";
    int targTemp, eFree, mFree, oFree, wFree, eBoil, mBoil, oBoil, wBoil;
    eFree = -173;
    mFree = -38;
    oFree = -362;
    wFree = 32;
    eBoil = 172;
    mBoil = 676;
    oBoil = -306;
    wBoil = 212;
    
    
    std::cout << "Enter a temperature:" << std::endl;
    std::cin >> targTemp;
    
    if(targTemp <= eFree){
        std::cout << ethWill << freeze << std::endl;
    }
    if(targTemp >= eBoil){
        std::cout << ethWill << boil << std::endl;
    }
    if(targTemp <= mFree){
        std::cout << mercWill << freeze << std::endl;
    }
    if(targTemp >= mBoil){
        std::cout << mercWill << boil << std::endl;
    }
      if(targTemp <= oFree){
        std::cout << oxyWill << freeze << std::endl;
    }
    if(targTemp >= oBoil){
        std::cout << oxyWill << boil << std::endl;
    }
    if(targTemp <= wFree){
        std::cout << watWill << freeze << std::endl;
    }
    if(targTemp >= wBoil){
        std::cout << watWill << boil << std::endl;
    }
    
    
    
    
    
    
    return 0;
}
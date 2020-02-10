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
    int day, month, yearTwo, result;
    std::cout << "Enter a month:" << std::endl;
    std::cin >> month;
    std::cout << "Enter a day:" << std::endl;
    std::cin >> day;
    std::cout << "Enter a year:" << std::endl;
    std::cin >> yearTwo;
    result = day * month;
    if (result = yearTwo){
        std::cout << "The date is magic";
    }
    else{
        std::cout << "The date is not magic";
    }
    return 0;
}
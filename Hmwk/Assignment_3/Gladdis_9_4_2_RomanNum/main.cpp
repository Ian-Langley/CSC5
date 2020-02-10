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
    int inputNum;
    std::cout << "Enter a number between 1 and 10:" << std::endl;
    std::cin >> inputNum;
    if (inputNum > 10 || inputNum < 1) {
    std::cout << "Entered number is not valid, reenter number:" << std::endl;
    std::cin >> inputNum;
    }
    switch(inputNum){
        case 1:
            std::cout << "1 is I in Roman numerals";
            break;
        case 2:
            std::cout << "2 is II in Roman numerals";
            break;
        case 3:
            std::cout << "3 is III in Roman numerals";
            break;
        case 4:
            std::cout << "4 is IV in Roman numerals";
            break;
        case 5:
            std::cout << "5 is V in Roman numerals";
            break;
        case 6:
            std::cout << "6 is VI in Roman numerals";
            break;
        case 7:
            std::cout << "7 is VII in Roman numerals";
            break;
        case 8:
            std::cout << "8 is VIII in Roman numerals";
            break;
        case 9:
            std::cout << "9 is IX in Roman numerals";
            break;
        case 10:
            std::cout << "10 is X in Roman numerals";
            break;
        }
    return 0;
}

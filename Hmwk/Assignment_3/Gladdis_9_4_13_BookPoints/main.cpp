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
    int bookCount, points;
    std::cout << "Enter how many books you purchased this month:" << std::endl;
    std::cin >> bookCount;
    if(bookCount < 4){
     switch (bookCount){
        case 0:
            points = 0;
            break;
        case 1:
            points = 5;
            break;
        case 2:
            points = 15;
            break;
        case 3: 
            points = 30;
            break;
        }
    }
    else{
        points = 60;
    }
    std::cout << "You earned " << points << " points.";
    return 0;
}
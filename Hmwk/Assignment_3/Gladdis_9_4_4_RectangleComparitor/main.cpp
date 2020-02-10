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
    int rectOneH, rectTwoH, rectOneW, rectTwoW, rectOneA, rectTwoA;
    std::cout << "Enter the width of rectangle 1:" << std::endl;
    std::cout << "Enter the height of rectangle 1:" << std::endl;
    std::cout << "Enter the width of rectangle 2:" << std::endl;
    std::cout << "Enter the height of rectangle 2:" << std::endl;
    cin >> rectOneW;
    cin >> rectOneH;
    cin >> rectTwoW;
    cin >> rectTwoH;
    rectOneA = (rectOneW * rectOneH);
    rectTwoA = (rectTwoW * rectTwoH);
    if(rectOneA > rectTwoA){
        std::cout << "Rectangle 1 has the greater area";
    }
    else if (rectOneA < rectTwoA){
        std::cout << "Rectangle 2 has the greater area";
    }
    else{
        std::cout << "The rectangles have the same area";
    }
    return 0;
}
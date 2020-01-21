/* 
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    int maxCap, numPeop, difPeop;
    std::cout << "Input the maximum room capacity and the number of people" << std::endl;
    std::cin >> maxCap >> numPeop;
    if (maxCap > numPeop){
        difPeop = maxCap - numPeop;
        std::cout << "Meeting can be held." << std::endl;
        std::cout << "Increase number of people by " << difPeop << " will be allowed without violation.";
    }
    if (maxCap < numPeop || maxCap == numPeop){
        difPeop = numPeop - maxCap;
        std::cout << "Meeting cannot be held." << std::endl;
        std::cout << "Reduce number of people by " << difPeop << " to avoid fire violation.";
    }
    return 0;
}
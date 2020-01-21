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
    float val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, sumPos, sumNeg = 0, sumTot;
    std::cout <<"Input 10 numbers, any order, positive or negative" << std::endl;
    std::cin >> val1 >> val2 >> val3 >> val4 >> val5 >> val6 >> val7 >> val8 >> val9 >> val10;
    if (val1 > 0){
        sumPos = sumPos + val1;
    }
    if (val1 < 0){
        sumNeg = sumNeg + val1;
    }
    if (val2 > 0){
        sumPos = sumPos + val2;
    }
    if (val2 < 0){
        sumNeg = sumNeg + val2;
    }
    if (val3 > 0){
        sumPos = sumPos + val3;
    }
    if (val3 < 0){
        sumNeg = sumNeg + val3;
    }
    if (val4 > 0){
        sumPos = sumPos + val4;
    }
    if (val4 < 0){
        sumNeg = sumNeg + val4;
    }
    if (val5 > 0){
        sumPos = sumPos + val5;
    }
    if (val5 < 0){
        sumNeg = sumNeg + val5;
    }
    if (val6 > 0){
        sumPos = sumPos + val6;
    }
    if (val6 < 0){
        sumNeg = sumNeg + val6;
    }
    if (val7 > 0){
        sumPos = sumPos + val7;
    }
    if (val7 < 0){
        sumNeg = sumNeg + val7;
    }
    if (val8 > 0){
        sumPos = sumPos + val8;
    }
    if (val8 < 0){
        sumNeg = sumNeg + val8;
    }
    if (val9 > 0){
        sumPos = sumPos + val9;
    }
    if (val9 < 0){
        sumNeg = sumNeg + val9;
    }
    if (val10 > 0){
        sumPos = sumPos + val10;
    }
    if (val10 < 0){
        sumNeg = sumNeg + val10;
    }
    sumTot = sumNeg + sumPos;
    std::cout << "Negative sum = " << sumNeg << std::endl;
    std::cout << "Positive sum =  " << sumPos << std::endl;
    std::cout << "Total sum    =   " << sumTot;
    return 0;
}
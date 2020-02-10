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
    int end, sum, start;
    start = 1;
    std::cout << "Enter a positive integer value:" << std::endl;
    cin >> end;
    for(int i = 1; i < end+1; i++){
        sum = start + sum;
        start++;
    }
    std::cout << "The sum of all the integers from 1 to "<< end <<" is " << sum;
    return 0;
}
/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);
   float rate, rise;
   int year;
   year = 1;
   std::cout << "Enter how many millimeters the ocean is rising per year:" << std::endl;
   cin >> rate;
   std::cout << "Year" << "\t"<< "Rise(mm)" << std::endl;
   for(int i = 0; i < 30; i++){
    std::cout << year;
    rise = rate * year;
    std::cout << "\t";
    std::cout << rise << std::endl;
    year++;
   }
    return 0;
}
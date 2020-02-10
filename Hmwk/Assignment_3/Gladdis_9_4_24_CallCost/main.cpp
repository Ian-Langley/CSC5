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
   float startTime, startTimeH, startTimeS, runTime, charge, rate1, rate2, rate3;
   rate1 = 0.05;
   rate2 = 0.45;
   rate3 = 0.20;
   
   std::cout << "Enter the starting time:" << std::endl;
   std::cin >> startTime;
   startTimeH = static_cast<int>(startTime);
   startTimeS = startTime - startTimeH;
   if (startTimeS > .59){
       std::cout << "The time you entered is invalid, reenter:" << std::endl;
       std::cin >> startTime;
   }
   std::cout << "Enter the number of minutes of the call:" << std::endl;
   std::cin >> runTime;
   startTimeH = static_cast<int>(startTimeH);
   if (startTimeH >= 0 && startTimeH <=6){
   charge = runTime * rate1;}
   if (startTimeH >= 7 && startTimeH <=19){
   charge = runTime * rate2;}
   if (startTimeH >= 20 && startTimeH <=23){
   charge = runTime * rate3;}
   std::cout << "The charges are $"<< charge;
}
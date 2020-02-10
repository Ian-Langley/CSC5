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
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);
   double weight, mass, gConst;
   gConst = 9.8;
   std::cout << "Enter the mass of an object:" << std::endl;
   cin >> mass;
   weight = mass * gConst;
   if(weight > 1000){
       std::cout << "The object is too heavy";
   }
   else if(weight < 10){
       std::cout << "The object is too light";
   }
   else{
       std::cout << "The object weighs " << weight << " newtons";
   }
    return 0;
}
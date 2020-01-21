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
const float payRais = 1.076;
const float retrPay = 0.076;
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   float prevSal, newSal, montSal, retrSal, bonus;
   std::cout << "Input previous annual salary." << std::endl;
   std::cin >> prevSal;
   retrSal = prevSal / 2.0;
   newSal = prevSal * payRais;
   montSal = newSal / 12.0;
   bonus = retrSal * retrPay;
   
   std::cout << "Retroactive pay    = $  " << bonus << std::endl;
   std::cout << "New annual salary  = $" << newSal << std::endl;
   std::cout << "New monthly salary = $ " << montSal;
    return 0;
}
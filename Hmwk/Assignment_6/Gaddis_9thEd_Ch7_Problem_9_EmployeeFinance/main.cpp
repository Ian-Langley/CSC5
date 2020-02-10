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
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    long iD[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    float rate[7];
    float hours[7];
    float wages[7];
    cout << fixed << showpoint << setprecision(2);
    for(int i = 0 ; i < 7 ; i++){
        std::cout << "Enter employee "<< iD[i] <<"'s pay rate:" << std::endl;
        cin >> rate[i];
        std::cout << "Enter employee "<< iD[i] <<"'s hours work:" << std::endl;
        cin >> hours[i];
        
        wages[i] = rate[i] * hours[i];
    }
    
    
    for(int i = 0 ; i < 7 ; i ++){
        cout << "Employee " << iD[i] << "'s gross pay $" << wages[i] << endl;
    }
    return 0;
}
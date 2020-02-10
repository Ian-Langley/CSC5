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
void swapCalc(int[] lrgtosm);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int lrgtosm[10];
    
    //Initialize Variables

    //Process or map Inputs to Outputs
    cout << "Enter 10 integers:" << endl;
    cin >> lrgtosm[0];
    cin >> lrgtosm[1];
    cin >> lrgtosm[2];
    cin >> lrgtosm[3];
    cin >> lrgtosm[4];
    cin >> lrgtosm[5];
    cin >> lrgtosm[6];
    cin >> lrgtosm[7];
    cin >> lrgtosm[8];
    cin >> lrgtosm[9];
    //Display Outputs
    swapCalc(lrgtosm);
    cout << lrgtosm[0] << " is the highest number." << endl;
    cout << lrgtosm[9] << " is the highest number.";
    
    //Exit stage right!
    return 0;
}

void swapCalc(int[] lrgtosm){
    int a;
    int b;
    int temp;
    for(int i = 0;i<10;i++){
        a = lrgtosm[i];
        b = lrgtosm[i+1];
        if(a < b){
            temp = a;
            a = b;
            b = temp;
        }
    }
}
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
bool find(int[], int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int winners[10]={13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int input;
    bool winning = false;
    //Initialize Variables
    cout << "Enter the winning number:" << endl;
    cin >> input; 
    //Process or map Inputs to Outputs
    winning = find(winners,input);
    
    //Display Outputs
    if(winning == true){
        cout << "Congratulations you have won!";
    }
    if(winning == false){
        cout << "No winning numbers.";
    }
    //Exit stage right!
    return 0;
}


bool find(int winners[], int input){
    bool found = false;
    for(int i = 0; i<11; i++){
        if(winners[i]==input){
            found = true;
        }
    }
    if(found != true){
        found = false;
    }
    return found;
}
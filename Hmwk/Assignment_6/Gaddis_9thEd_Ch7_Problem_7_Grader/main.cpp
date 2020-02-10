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
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    
    //Initialize Variables
    char correct[20] = {'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'},
         input[20],
         grade[20];
         
    bool pass;
    int right=0,
        wrong=0;
    //Process or map Inputs to Outputs
    cout << "Enter the student's test answers:" << endl;
    for(int i = 0; i <= 19 ; i++){
    cin >> input[i];
    }
    for(int i = 0; i <= 19 ; i++){
        if(input[i] == correct[i]){
            grade[i] = 'C';
        }
        else{
            grade[i] = 'W';
        }
    }
    for(int i = 0; i <= 19 ; i++){
        if(grade[i] == 'C'){
            right++;
        }
        else{
            wrong++;
        }
    }
    //Display Outputs
    if(right >= 15){
        cout << "The student passed." << endl;
    }
    else{
        cout << "The student failed." << endl;
    }
    
    cout << "There were "<< right << " correct answers." << endl;
    cout << "There were "<< wrong << " incorrect answers." << endl;
    cout << "Incorrect questions:" << endl;
    for(int i = 0; i <= 19 ; i++){
        if(grade[i] == 'W'){
            cout << i+1 << endl;
        }
    }
    //Exit stage right!
    return 0;
}
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
    float distance, speed, timeTrav, timePer;
    cout << "What is the speed of the vehicle in mph?" << endl;
    cin >> speed;
    cout << "How many hours has it traveled?" << endl;
    cin >> timeTrav;
    
    cout << "Hour   Distance Traveled" << endl;
    for(timePer =1; timePer <= timeTrav; timePer++){
        distance= speed*timePer;
        cout <<timePer <<setw(15)<<distance<<endl;
    }
    return 0;
}

/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
bool find(string names[],int count, string input);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int NUM_NAMES=20;
	string names[NUM_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
							 "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
							 "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							 "James, Jean", "Weaver, Jim", "Pore, Bob",
							 "Rutherford, Greg", "Javens, Renee",
							 "Harrison, Rose", "Setzer, Cathy",
							 "Pike, Gordon", "Holland, Beth" };
    bool found = false;
    string nmREQF, nmREQL, nameREQ;
    
    cout << "Enter a name to search for:" << endl;
    cin >> nmREQF >> nmREQL;
    nameREQ += nmREQF;
    nameREQ += " ";
    nameREQ += nmREQL;
    
    found = find(names, NUM_NAMES, nameREQ);
    
    if( found == true){
        cout << "The name was found";
    }
    if( found != true){
        cout << "The name was not found";
    }
    
    
    
    
    return 0;
}




bool find(string names[],int count, string input){
    bool found = false;
    int high=count-1,
        low=0;
    do{
        int middle = (high + low)/2;
        if(names[middle] == input){
            found = true;
        }
        else if(names[middle] < input){
            low = middle + 1;
        }
        else{   
            high = middle - 1;
        }
    }while(found == false && low <= high);
    return found;
}
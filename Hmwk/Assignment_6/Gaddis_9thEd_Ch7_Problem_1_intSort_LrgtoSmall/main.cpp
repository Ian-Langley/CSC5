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
void sort(int a[], int n);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    int set[10];
    
    //Declare Variable Data Types and Constants
    std::cout << "Enter 10 integers:" << std::endl;
    cin >> set[0] >> set[1] >> set[2] >> set[3] >> set[4] >> set[5] >> set[6] >> set[7] >> set[8] >> set[9];
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    sort(set, 10);
    //Display Outputs
    cout << set[9] << " is the highest number." << endl;
    cout << set[0] << " is the lowest number.";
    //Exit stage right!
    return 0;
}
void sort(int a[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(a[j]>a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
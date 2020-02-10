/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

void sort(float a[],int n);
void naming(float saleHtL[], float sales[], string salsas[], string &maxName, string &minName);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float sales[5];
    float saleHtL[5];
    float total;
    float max;
    float min;
    string maxName;
    string minName;
    string salsas[5];
    //Initialize Variables
    salsas[0]= "mild";
    salsas[1]= "medium";
    salsas[2]= "sweet";
    salsas[3]= "hot";
    salsas[4]= "zesty";
    //Process or map Inputs to Outputs
    for(int i = 0; i<5; i++){
        cout << "Enter the sales of " << salsas[i] << " salsa:$" << endl;
        cin >> sales[i];
    }
    
    total = sales[0] + sales[1] + sales[2] + sales[3] + sales [4];
    for(int i = 0; i < 5; i++){
        saleHtL[i] = sales[i];
    }

    sort(saleHtL,5);
    naming(saleHtL, sales, salsas, maxName, minName);
    //Display Outputs
    cout <<setw(9) << left << "Type" << "Sales" << endl;
    for(int i = 0; i<5; i++){
        cout << left << setw(9) << salsas[i] << "$" << sales[i] << endl;
    }
    
    
    
    cout << "Total Sales was $" << total << endl;
    cout << minName << " was the lowest selling product." << endl;
    cout << maxName << " was the highest selling product.";
    //Exit stage right!
    return 0;
}


void sort(float ary[], int count){
    float temp;
    for(int j=0;j<count-1;j++){
        for(int i=j+1;i<count;i++){
            if(ary[j] > ary[i]){
                temp=ary[j];
                ary[j]=ary[i];
                ary[i]=temp;
            }
        }
    }
}
void naming(float saleHtL[], float sales[], string salsas[], string &maxName, string &minName){
    sort(saleHtL,5);
    for(int i=0; i < 5; i++){
        if(saleHtL[0] == sales[i]){
            minName = salsas[i];
        }
        if(saleHtL[4] == sales[i]){
            maxName = salsas[i];
        }
    }
}

/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3rd, 2020, 12:33 PM
 * Purpose:  Municipal Bond Savings
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <vector>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVDCML=100.0f;//Conversion to Decimal from Percent

//Function Prototypes
void savings(vector<float>&,vector<int>&,vector<int>&,float &);
void display(vector<float>&,vector<int>&,vector<int>&,float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float intRate;//Interest Rate % 
    const int NYEARS=31;//Number of Years, remember array size + 1
    vector<float> balance(NYEARS);//Savings Balance $'s  Parallel Array
    vector<int> year(NYEARS),     //Year counter  Parallel Array
        dYear(NYEARS);    //Year date  Parallel Array
    float interest;       //Interest Calculation
    
    
    //Initialize Variables
    balance[0]=100.0f;//Savings in $'s
    intRate=6;        //Yearly Interest Rate
    year[0]=0;        //Initialize counter to 0
    dYear[0]=2020;    //Initialize date year to now
    
    //Process or map Inputs to Outputs
    savings(balance,year,dYear,intRate);
    
    //Display the Heading
    display(balance,year,dYear,intRate);

    //Exit stage right!
    return 0;
}

void display(vector<float> &balance,vector<int> &year,
                    vector<int> &dYear,float intRate){
    //Display the Heading
    float interest=balance[0]*intRate;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year  Balance Interest"<<endl;
    cout<<setw(4)<<year[0]<<setw(6)<<dYear[0]
            <<setw(9)<<balance[0]<<setw(9)<<interest<<endl;
    
    //Loop and Display for all years
    for(int cnt=1;cnt<balance.size();cnt++){
        interest=balance[cnt]*intRate;
        cout<<setw(4)<<year[cnt]<<setw(6)<<dYear[cnt]
            <<setw(9)<<balance[cnt]<<setw(9)<<interest<<endl;
    }
}

void savings(vector<float> &balance,vector<int> &year,
                    vector<int> &dYear,float &intRate){
    //Process or map Inputs to Outputs
    //Create the Heading for the Savings Account
    intRate/=CNVDCML;
    
    //Loop and Calculate for all years
    for(int cnt=1;cnt<balance.size();cnt++){
        year[cnt]=year[cnt-1]+1;
        dYear[cnt]=dYear[cnt-1]+1;
        balance[cnt]=balance[cnt-1]*(1+intRate);
    }
}
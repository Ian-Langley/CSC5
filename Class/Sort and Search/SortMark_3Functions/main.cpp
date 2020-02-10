/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 6th, 2020, 10:30 AM
 * Purpose:  Mark Sort
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time to set random number seed
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void fillAry(int [],int);     //Fill an array with the index
void prntAry(int [],int,int); //Print the array
void swap1(int&,int&);        //Swap with temp
void swap2(int&,int&);        //Swap Logical
void lstMin(int [],int,int);  //Find the minimum in a list
void markSrt(int [],int);     //Repeat min in list swap to the end

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    fillAry(array,SIZE);
    
    //Output the original array
    prntAry(array,SIZE,10);
    
    //Process or map Inputs to Outputs
    markSrt(array,SIZE);

    //Display Outputs
    prntAry(array,SIZE,10);

    //Exit stage right!
    return 0;
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        lstMin(a,n,i);
    }
}

void lstMin(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        //if(a[pos]>a[i])swap(a[pos],a[i]);
        //if(a[pos]>a[i])swap1(a[pos],a[i]);
        if(a[pos]>a[i])swap2(a[pos],a[i]);
    }
}

void swap2(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if((i%perLine)==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Random [10,99] 
        //a[i]=i;//Ordered[0,n-1]
    }
}
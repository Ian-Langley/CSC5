/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 6th, 2020, 10:30 AM
 * Purpose:  1 function vs. 3 function timing
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
void markSrt1(int [],int);    //1 Function call
void markSrt3(int [],int);    //3 Function calls
void cpyAry(int [],int [],int);//Just copy the array

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    const int SIZE=50000;
    int array[SIZE];
    int brray[SIZE];
    
    //Initialize Variables
    fillAry(array,SIZE);
    cpyAry(brray,array,SIZE);
    
    //Output the original array
    //prntAry(array,SIZE,10);
    //prntAry(brray,SIZE,10);
    
    //Process or map Inputs to Outputs
    int beg=time(0);
    markSrt3(array,SIZE);
    int end=time(0);
    cout<<"The total time for 3 function sort = "<<end-beg<<" secs"<<endl;
    
    beg=time(0);
    markSrt1(brray,SIZE);
    end=time(0);
    cout<<"The total time for 1 function sort = "<<end-beg<<" secs"<<endl;

    //Display Outputs
    //prntAry(array,SIZE,10);
    //Exit stage right!
    return 0;
}

void cpyAry(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}

void markSrt1(int a[],int n){
    int temp;
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(a[j]>a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}

void markSrt3(int a[],int n){
    for(int j=0;j<n-1;j++){
        lstMin(a,n,j);
    }
}

void lstMin(int a[],int n,int pos){
    int temp;
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i]){
            temp=a[pos];
            a[pos]=a[i];
            a[i]=temp;
        }
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
        a[i]=rand();//Random 
        //a[i]=i;//Ordered[0,n-1]
    }
}
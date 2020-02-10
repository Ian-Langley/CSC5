/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 6th, 2020, 10:30 AM
 * Purpose:  Mark, Bubble and Selection timing comparison
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
void markSrt(int [],int);     //Cross between bubble and selection
void selSrt(int [],int);      //Swap at end of list comparison
void bubSrt(int [],int);      //Keep swapping until 
void cpyAry(int [],int [],int);//Just copy the array

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    const int SIZE=40000;
    int array[SIZE];
    int brray[SIZE];
    int crray[SIZE];
    
    //Initialize Variables
    fillAry(array,SIZE);
    cpyAry(brray,array,SIZE);
    cpyAry(crray,array,SIZE);
    
    //Process or map Inputs to Outputs
    int beg=time(0);
    selSrt(crray,SIZE);
    int end=time(0);
    cout<<"The total time for Selection sort = "<<end-beg<<" secs"<<endl;
    
    beg=time(0);
    markSrt(brray,SIZE);
    end=time(0);
    cout<<"The total time for Mark sort      = "<<end-beg<<" secs"<<endl;
    
    beg=time(0);
    bubSrt(array,SIZE);
    end=time(0);
    cout<<"The total time for Bubble sort    = "<<end-beg<<" secs"<<endl;

    //Exit stage right
    return 0;
}

void cpyAry(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}

void bubSrt(int a[],int n){
    bool swapIt;
    do{
        swapIt=false;
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i]){
                int temp=a[i-1];
                a[i-1]=a[i];
                a[i]=temp;
                swapIt=true;
            } 
        }
    }while(swapIt);
}

void selSrt(int a[],int n){
    for(int j=0;j<n-1;j++){
        int indx=j;
        for(int i=j+1;i<n;i++){
            if(a[indx]>a[i])indx=i;
        }
        int temp=a[j];
        a[j]=a[indx];
        a[indx]=temp;
    }
}

void markSrt(int a[],int n){
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
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
int markSrt(int a[],int n, int start);
int bubSrt(int a[],int stop,int start);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    int arr1 []={
            81,36,37,85,52,70,38,55,31,37,
            27,58,32,40,99,79,92,31,32,64,
            92,35,85,66,27,67,23,11,91,88,
            17,18,71,49,13,82,68,82,23,12
    };
    int arr2 []={
            81,36,37,85,52,70,38,55,31,37,
            27,58,32,40,99,79,92,31,32,64,
            92,35,85,66,27,67,23,11,91,88,
            17,18,71,49,13,82,68,82,23,12
    };
    //Declare Variable Data Types and Constants

    //Initialize Variables
    int selCNT;
    int bubCNT;
    int start, stop;
    
    std::cout << "Enter the starting location to sort:" << std::endl;
    cin >> start;
    std::cout << "Enter the ending location to sort:" << std::endl;
    cin >> stop;
    
    selCNT = markSrt(arr1, stop, start);
    bubCNT = bubSrt(arr2, stop, start);
    
    std::cout << "Selection Sort " << selCNT << std::endl;
    std::cout << "Bubble Sort " << bubCNT;
    return 0;
}

int markSrt(int a[],int stop, int start){
    int swpCNT=0;
    int temp;
    for(int g=start ; g<stop-1;g++){
        int small;
        for(int i=g+1;i<stop;i++){
            if(a[g]>a[i]){
                small = g;
            }
        }
            temp = a[g];
            a[g] = a[small];
            a[small] = temp;
            swpCNT++;
    }
    return swpCNT;
}
int bubSrt(int a[],int stop,int start){
    bool swap;
    int swpCNT = 0;
    do{
        swap=false;
        for(int i=start+1;i<stop;i++){
            if(a[i-1]>a[i]){
                int temp=a[i-1];
                a[i-1]=a[i];
                a[i]=temp;
                swap=true;
                swpCNT++;
            } 
        }
    }while(swap);
    return swpCNT;
}
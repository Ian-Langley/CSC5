/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: valfo
 *
 * Created on January 11, 2020, 11:02 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    int numberOfPods, peasPerPod, totalPeas, width, height,totalLength;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> numberOfPods;
    cout << "Enter the number of peas in the pod:\n";
    cin >> peasPerPod;
    cout << "Enter the number of feet for width:\n";
    cin >> width;
    cout << "Enter the number of feet for height:\n";
    cin >> height;
    totalPeas = numberOfPods * peasPerPod;
    cout << "if you have ";
    cout << numberOfPods;
    cout << " pea pods \n";
    cout << "and ";
    cout << peasPerPod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all the pods.\n";
    
    cout << "if you have a ";
    cout << width;
    cout << " by ";
    cout << height;
    cout << " space, then\n";
    cout << "you will need ";
    totalLength = width*height ;
    cout << totalLength;
    cout << " feet of fencing!\n";
            
            
    return 0;
}


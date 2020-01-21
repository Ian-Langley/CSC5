/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: valfo
 *
 * Created on January 11, 2020, 4:47 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    double numPen, numNic, numDim, numQuar, totalCash, valPen, valNic, valDim, 
            valQuar;
    cout << "Press return after each entry.\n";
    cout << "How many pennies do you have?\n";
    cin >> numPen;
    cout << "How many nickles do you have?\n";
    cin >> numNic;
    cout << "How many dimes do you have?\n";
    cin >> numDim;
    cout << "How many quarters do you have?\n";
    cin >> numQuar;
    valPen = numPen*.01;
    valNic = numNic*.05;
    valDim = numDim*.10;
    valQuar = numQuar*.25;
    cout << "===================================\n";
    totalCash = 
            valPen + valNic + valDim + valQuar;
    cout << "You have $" << totalCash;
    return 0;
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: valfo
 *
 * Created on January 26, 2020, 12:23 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    float calPMin, calTotal;
    cout << "Enter calories burned per minute:" << endl;
    cin >> calPMin;
    cout << "Min\tCalories burned" << endl;
    for(int time=5; time <= 30; time = time+5){
        cout << time << "\t";
        calTotal = calPMin * time;
        cout << calTotal << endl;
    }
    return 0;
}


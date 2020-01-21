/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: valfo
 *
 * Created on January 12, 2020, 11:32 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    long time,gravCon, distance;
    cout << "Press return after each entry\n";
    cout << "How many seconds will you be falling today?\n";
    cin >> time;
    time = time*time;
    gravCon = 32.00; 
    distance = time * gravCon;  
    distance = distance/2;
    cout << "You will fall ";
    cout << distance;
    cout << " feet!";
    return 0;
}


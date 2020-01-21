/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: valfo
 *
 * Created on January 12, 2020, 12:12 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    char input;
    cout << "Press return after each input\n";
    cout << "What letter would you like to use?\n";
    cin >> input;
    cout << "   " << input << " " << input << " " << input
         << "\n  " << input << "    " << input
         << "\n " << input
         << "\n " << input
         << "\n " << input
         << "\n " << input
         << "\n " << input
         << "\n  " << input << "    " << input
         << "\n   " << input << " " << input << " " << input;
    return 0;
}


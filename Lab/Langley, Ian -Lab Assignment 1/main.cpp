/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: valfo
 *
 * Created on January 8, 2020, 12:50 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float milBdgt, fedBdgt, mlPrcnt;
    milBdgt = 7.0e11f;
    fedBdgt =4.1e12f;
    mlPrcnt = milBdgt/fedBdgt;
    cout << fixed;
    std::cout << "Military Budget: $" << milBdgt << std::endl;
    std::cout << "Federal Budget: $" << fedBdgt << std::endl;
    std::cout << "Military Percentage: %" << mlPrcnt*10 << std::endl;
    return 0;
}


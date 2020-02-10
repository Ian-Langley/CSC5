/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: valfo
 *
 * Created on January 26, 2020, 12:44 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int floorCount, roomCountIN, roomCount=0, 
            roomOccupiedIN,roomOccupied=0, roomUnoccupied;
    float percentage;
    cout << "Enter how many floors there are:" << endl;
    cin >> floorCount;
    
    for (int floor = 1; floor<=floorCount; floor++){
        cout << "Enter how many rooms are on floor " << floor <<":"<<endl;
        cin >> roomCountIN;
        roomCount = roomCountIN + roomCount;
        cout << "Enter how many are occupied:" << endl;
        cin >> roomOccupiedIN;
        roomOccupied = roomOccupied + roomOccupiedIN;
        if (floor == 12){
            floor++;
        }
    }
    roomUnoccupied = roomCount - roomOccupied;
    cout << "There are " << roomOccupied <<" rooms occupied." << endl;
    cout << "There are " << roomUnoccupied <<" rooms unoccupied." << endl;
    percentage = static_cast<float>(roomOccupied)/static_cast<float>(roomCount);
    percentage = percentage * 100;
    cout << setprecision(3) << percentage <<"% of rooms are occupied.";
    return 0;
}

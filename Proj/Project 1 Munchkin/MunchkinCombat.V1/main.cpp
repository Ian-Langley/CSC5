/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: valfo
 *
 * Created on February 4, 2020, 8:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;


void kickDTD();
/*
 * 
 */
int main(int argc, char** argv) {
    // Variable for Game play
    //Set Random Number seed
     srand(static_cast<unsigned int>(time(0)));
     int rnd1to3;
     int rnd1to6;

    //Character
    char name1 = 'I', name2 ='A', name3 = 'N';
    int combstr = 1, lvl = 1;
    char sex, chaClass, race;
    float luck;
    bool alive;
    
    //Kick Down the door
    int monSTR;
    int treasure;
    
    //Menu
    int plyrIn;
    
    //Display Dungeon Title
    //Display Player Name / Level
    // Choices (kick down the door or quit game)
    cout << setw(25) << "Game in Progress, Reach Level 10 or Quit" << endl;
    cout << name1 << name2 << name3 <<" Level: " << lvl <<endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(25) << "1. Kick down the door" << setw(25) << "2. Quit Game" << endl;
    cin >> plyrIn;
    switch(plyrIn){
        case 1: //Generate Monster
                rnd1to3 = rand()%3+1;
                if (rnd1to3 == 1){
                    monSTR = 1;
                }
                else if(rnd1to3 == 2){
                    monSTR = 5;
                }
                else if(rnd1to3 == 3){
                    monSTR = 10;
                }
                 //Display Monster Level
                cout << "Monster is a strength level of : " << monSTR << endl;
                //Display player combat power
                cout << "You are a strength level of : " << combstr << endl;
                //Give option to run or fight;
                cout << "Would you like to fight or run away?" << endl << "1. Fight 2. Run" << endl;
                cin >> plyrIn;
                switch(plyrIn){
                    case 1: 
                        if (monSTR > combstr){
                            cout << "BAD STUFF HAPPENS" << endl;
                        }
                        if(monSTR == combstr){
                            cout << "That was close!" << endl << "Here is some treasure!" << endl;
                        }
                        if(monSTR < combstr){
                            cout<<"You beat them!" << endl << "Here is some treasure!" << endl;
                        }
                    case 2:
                        rnd1to6 = rand()%6+1;
                        if(rnd1to6 == 6){
                            cout << "You ran away!" << endl;
                        }
                        if(rnd1to6 != 6 ){
                            cout << "You were caught! BAD STUFF HAPPENS";
                        }
                }
        case 2:  cout << "QUIT"; return 0;
    }

    
    
    
    
    
    
    return 0;
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ian Langley
 *
 * This version of Munchkin will only have the main menu, allowing for the installation of the game play loop later on.
 * Munchkin is card game in which players race to level 10 by battling monsters in the dungeon. Each turn, a player can 
 * "Kick down the door" revealing a monster, curse, or buff card. The players then compare a numerical value related to them 
 * to the monster's level, and if they are higher, they win. In traditional munchkin there are ways to manipulate other players
 * such as adding bonuses to monster, or helping in the fight for money. This version of munchkin will demonstrate the core
 * game play loop with a single player, working essentially as a race against time. 
 * 
 * Created on February 3, 2020, 11:03 AM
 */

/*'
 * To Do
 * 
 * 1. Character Creation: Simply male or female. This will have minor effect on game play for some monsters; Will also
 *                                  initialize the character's combat stats and name.
 * 2. Kick Down The Door: Add a transition to notify player is kicking down the door.Allow player to choose between 
 *                                      run or fight.
 * 3.1. Combat: Screen to display character combat value vs. Monster(now shows bad stuff and gender/race bonus/class);
 * 3.2. Run Away: Screen to display character chance to run away.
 * 4. Treasure: Display the treasure recieved(+1/+2/+3/lvlup/bonus to run/+1 to level of loot/race/class)
 * 5. Monster Generator: allow for the randomization of the monster itself, not the same one scaled repeatedly. 
 
 
 */





//Included Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
//Global Variables

//Created Functions
//string charName();
void mainMenu(bool& playing, bool& playable, bool& quit, bool& chrSel);
void quitCon(bool& quit, bool& running);
void chrCreat(char& sex,char& chaClass, char& race, bool& playable,  bool& chrSel, char& name1, char& name2, char& name3);
using namespace std;

int main(int argc, char** argv) {
   // std::string plyrNm;
    
    //Char Variables
    int combstr = 1, lvl = 1;
    char sex, chaClass, race;
    float luck = 0.01;
    bool alive;
    char name1, name2, name3;
    //Game System Variables
    int monster;
    int treasure;
    //Menu Variables
    char cPlyrIn;
    int plyrIn;
    bool chrMade = false, playable =false, playing =false, quit = false, chrSel = false, running = true;
    
    
    //Game running
    do{
                //Menu
        while(playing == false && running == true){
            //Main Menu Display
            mainMenu(playing, playable, quit,chrSel);
            //Char Creation 
            if(chrSel == true){
                chrCreat(sex, chaClass, race, playable, chrSel, name1, name2, name3);
            }else{
                if (chrSel == false){
                }
            }
            //Quit Game
            quitCon(quit, running);
            }
        while(playing == true){
            continue;
        }
        //Game
        //Start
        //Check for 10
        //Kick Down Door
        //Run or Fight
        //Fight 
        //Treasure + Level UP
        //Run Loop
    }
    while(running == true);
    
    
    return 0;
}




void  mainMenu(bool& playing, bool& playable, bool& quit, bool& chrSel){
    bool chrMade;
    int plyrIn;
    cout << setw(75) << endl << endl <<"Welcome to Munchkin, the dungeon crawling 'card' game!" << endl;
    cout<< endl << endl << endl << endl << endl;
    cout <<setw(25)<< "1. Play Game " <<setw(25) <<" 2. Create Character" <<setw(25)<<"3. Quit"<< endl;
    cin >> plyrIn;
        switch(plyrIn){
            case 1: 
                  if(playable == true){
                               cout << "Are you sure you want to start the game?" << endl;
                               cout << setw(10) << "1. Yes" << setw(10) <<  "2. No" << endl;
                               cin >> plyrIn;
                               switch(plyrIn){
                                   case 1:cout << "GAME START"; playing = true; break;
                                   case 2: break;
                               }
                 }
                 else{
                    cout << "You have yet to make a character! Go to character creation to start!" << endl;
                }break;
            case 2: chrSel = true; break;
            case 3: quit = true;break;
        }
    }
void chrCreat(char& sex,char& chaClass, char& race, bool& playable, bool& chrSel,char& name1, char& name2, char& name3){
    char cPlyrIn;
    cout<< "What is your name? Use only 3 characters:";
    cin >>  name1 >>  name2 >> name3;
    cout<<"'Your name is " << name1 << name2 << name3 << "? y/n";
    cin >>cPlyrIn;
    while(cPlyrIn == 'N' || cPlyrIn == 'n'){
         cout<< "What is your name? Use only 3 characters:";
         cin >>  name1 >>  name2 >> name3;
         cout<< "Your name is " << name1 << name2 << name3 << "? y/n";
         cin >>cPlyrIn;
    }
    cout << "Is your character Male or Female?"<< endl;
    cout << setw(5) << "M/F" << endl;
    cin >> cPlyrIn;
    sex = cPlyrIn;
    chaClass = 'D';
    race = 'H';
    playable = true;
    chrSel = false;
}
void quitCon(bool& quit, bool& running){
    int plyrIn;
    if(quit == true){
        cout << "Are you sure you want to quit?";
        cout << setw(10) << "1. Yes" << setw(10) <<  "2. No" << endl;
        cin >> plyrIn;
        if(plyrIn == 1){
             running = false;
        }
        else{
            quit = false;
        }
    }
}

//Monster Generation
//Treasure Generation
//Level Up


//Gameplay Loop    *do while* *switch*

//Victory Screen     *for loop* *switch*
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
 *Change Name from 3 char to string
 *Create a basic info/guide in text, read into game. Give option to display in main menu
 */

/*
 * Future Tasks:
 * 1. Create a 2D array to generate a large quantity of monsters;
 * 2. Create a 2D array for equipment;
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
void kickDTD(int& plyrIn, int& combstr, bool& playing,char& name1,char& name2, char& name3 ,int& lvl,float& luck );
int genTRES(float luck);
using namespace std;

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
   // std::string plyrNm;
    //Char Variables
    int combstr = 1, lvl = 1;
    char sex, chaClass, race;
    float luck = 1.0f/10.0f;
    bool alive;
    char name1, name2, name3;
    //Game System Variables
     int monSTR,
           numTRS,
           rnd1to3,
           rnd1to6,
           rnd1toH,
           tresRew,
           rounds = 1;
     float prob;
     bool extrTRS=false;
    //Menu Variables
    char cPlyrIn;
    int plyrIn;
    bool chrMade = false, playable =false, playing =false, quit = false, chrSel = false, running = true, rightIn = false;
    
    
    
    
    
    //Game running
    do{
                //Main Menu**************************************************************************************************
          while(playing == false && running == true){
                 //Main Menu Display*****************************************************************************************************
                     cout << setw(100) << endl << endl <<"Welcome to Munchkin, the dungeon crawling 'card' game!" << endl;
                     cout<< endl << endl << endl << endl << endl;
                     cout <<setw(25)<< "1. Play Game " <<setw(25) <<" 2. Create Character"<< setw(25) << "3. Info"
                             <<setw(25)<<"4. Quit"<< endl;
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
                             case 3: break;
                             case 4: quit = true;break;
             }
                 //Char Creation *********************************************************************************************************
                 if(chrSel == true){
                         cout<< "What is your name? Use only 3 letters: ";
                         cin >>  name1 >>  name2 >> name3;
                         cout<<"'Your name is " << name1 << name2 << name3 << "?" << endl  <<  "Y/N  ";
                         cin >>cPlyrIn;
                         while(cPlyrIn == 'N' || cPlyrIn == 'n'){
                              cout<< "What is your name? Use only 3 characters:";
                              cin >>  name1 >>  name2 >> name3;
                              cout<< "Your name is " << name1 << name2 << name3 << "? y/n";
                              cin  >> cPlyrIn;
                         }
                         do{
                             cout << "Is your character Male or Female?"<< endl;
                             cout << "M/F :    ";
                             cin >> cPlyrIn;

                             if(cPlyrIn == 'M' || cPlyrIn == 'm' || cPlyrIn == 'F' || cPlyrIn == 'f'){
                                 rightIn = true;
                             }
                         }
                         while(rightIn == false);
                         sex = cPlyrIn;
                         chaClass = 'D';
                         race = 'H';
                         playable = true;
                         chrSel = false;
                 //Quit Game************************************************************************************************************
                 quitCon(quit, running);
                 }
                 else if(quit == true){
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
                //Game Playing**************************************************************************************************
          while(playing == true){
                     cout <<endl << endl <<  setw(25) << "Game in Progress, Reach Level 10 or Quit" << endl;
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
                                        numTRS = 1;
                                    }
                                          else if(rnd1to3 == 2){
                                        monSTR = 5;
                                        numTRS = 2;
                                    }
                                          else if(rnd1to3 == 3){
                                        monSTR = 10;
                                        numTRS = 3;
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
                                                if(lvl > 1){
                                                cout << "BAD STUFF HAPPENS" << endl;
                                                cout << "You lost a level!";
                                                lvl--;
                                                }
                                                if(lvl = 1){
                                                    cout << "You are too low level for bad stuff to happen!";
                                                }
                                             }
                                                               if(monSTR < combstr){
                                                                     cout<<"You beat them! Level UP!" << endl << "Here is some treasure!" << endl;
                                                                     for(int tCount = 1; tCount <= numTRS; tCount++){
                                                                             rnd1to6 = rand()%6+1;
                                                                             prob = 1.0f*rand()/(pow(2,31)-1);
                                                                             if(luck > prob){
                                                                                 extrTRS = true;
                                                                             }
                                                                             extrTRS == true ? rnd1to6++ : rnd1to6;
                                                                             if(rnd1to6 == 1 || rnd1to6 == 2 || rnd1to6 == 3){
                                                                                 cout << " You got some new gear! + 1 to your fighting level!" << endl;
                                                                                 combstr += 1;
                                                                             }
                                                                             if(rnd1to6 == 4 || rnd1to6 == 5){
                                                                                 cout << " You got some new gear! + 2 to your fighting level!" << endl;
                                                                                 combstr += 2;
                                                                             }
                                                                             if(rnd1to6 > 5){
                                                                                 cout << " You got some new gear! + 3 to your fighting  level!" << endl;
                                                                                 combstr += 3;
                                                                             }
                                                                     }
                                                                     lvl ++;
                                                                  }
                                                               if(monSTR == combstr){
                                                                     cout << "That was close! Level UP!" << endl << "Here is some treasure!" << endl;
                                                                     for(int tCount = 1; tCount <= numTRS; tCount++){
                                                                             rnd1to6 = rand()%6+1;
                                                                             prob = 1.0f*rand()/(pow(2,31)-1);
                                                                             if(luck > prob){
                                                                                 extrTRS = true;
                                                                             }
                                                                             extrTRS == true ? rnd1to6++ : rnd1to6;
                                                                             if(rnd1to6 == 1 || rnd1to6 == 2 || rnd1to6 == 3){
                                                                                 cout << " You got some new gear! + 1 to your fighting level!" << endl;
                                                                                 combstr += 1;
                                                                             }
                                                                             if(rnd1to6 == 4 || rnd1to6 == 5){
                                                                                 cout << " You got some new gear! + 2 to your fighting level!" << endl;
                                                                                 combstr += 2;
                                                                             }
                                                                             if(rnd1to6 > 5){
                                                                                 cout << " You got some new gear! + 3 to your fighting  level!" << endl;
                                                                                 combstr += 3;
                                                                             }
                                                                     }
                                                                     lvl++;
                                                                  }                             
                                                               break;
                                                    case 2:
                                                                rnd1to6 = rand()%6+1;
                                                                if(rnd1to6 == 6){
                                                                     cout << "You ran away!" << endl;
                                                                 }
                                                                if(rnd1to6 != 6 ){
                                                                     if(lvl > 1){
                                                                     cout << "You were caught! BAD STUFF HAPPENS" << endl;
                                                                     cout << "You lost a level!";
                                                                     lvl--;
                                                                     }
                                                                     if(lvl = 1){
                                                                         cout << "You are too low level for bad stuff to happen!";
                                                                     }
                                                                 }
                                                                break;
                                                               }
                                          break;
                               case 2:  playing = false; break;
                       }
                     rounds++;
                     if(lvl == 10){
                            cout << setfill('*') << setw(50) << endl << endl;
                            cout << "You won the game!";
                            cout << "It took " << rounds << " rounds!";
                            playing = false;
                            cout << setfill('*') << setw(50) << endl << endl;
                            setfill(' ');
                        }
             }
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
    bool rightIn=false;
    cout<< "What is your name? Use only 3 letters: ";
    cin >>  name1 >>  name2 >> name3;
    cout<<"'Your name is " << name1 << name2 << name3 << "? y/n";
    cin >>cPlyrIn;
    while(cPlyrIn == 'N' || cPlyrIn == 'n'){
         cout<< "What is your name? Use only 3 characters:";
         cin >>  name1 >>  name2 >> name3;
         cout<< "Your name is " << name1 << name2 << name3 << "? y/n";
         cin  >> cPlyrIn;
    }
    do{
        cout << "Is your character Male or Female?"<< endl;
        cout << "M/F :    ";
        cin >> cPlyrIn;
  
        if(cPlyrIn == 'M' || cPlyrIn == 'm' || cPlyrIn == 'F' || cPlyrIn == 'f'){
            rightIn = true;
        }
    }
    while(rightIn == false);
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
void kickDTD(int& plyrIn, int& combstr, bool& playing,char& name1,char& name2, char& name3,int& lvl, float& luck){
    srand(static_cast<unsigned int>(time(0)));
    int monSTR,
          numTRS;
    int rnd1to3;
    int rnd1to6;
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
                    numTRS = 1;
                }
                else if(rnd1to3 == 2){
                    monSTR = 5;
                    numTRS = 2;
                }
                else if(rnd1to3 == 3){
                    monSTR = 10;
                    numTRS = 3;
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
                            for(int tCount = 1; tCount == numTRS; tCount++){
                            genTRES(luck);}
                        }
                        if(monSTR < combstr){
                            cout<<"You beat them!" << endl << "Here is some treasure!" << endl;
                            for(int tCount = 1; tCount = numTRS; tCount++){
                            genTRES(luck);}
                        }
                        break;
                    case 2:
                        rnd1to6 = rand()%6+1;
                        if(rnd1to6 == 6){
                            cout << "You ran away!" << endl;
                        }
                        if(rnd1to6 != 6 ){
                            cout << "You were caught! BAD STUFF HAPPENS";
                        }
                        break;
                }
                break;
        case 2:  playing = false; break;
    }

    
}
int genTRES(float luck){
    bool extrTRS=false;
    float prob;
    int tresRew;
    int rnd1to6;
    int rnd1toH;
    srand(static_cast<unsigned int>(time(0)));
    //generate number, higher being better
    rnd1to6 = rand()%6+1;
    prob = 1.0f*rand()/(pow(2,31)-1);
    if(luck > prob){
        extrTRS = true;
    }
    extrTRS == true ? rnd1to6++ : rnd1to6;
    if(rnd1to6 == 1 || rnd1to6 == 2 || rnd1to6 == 3){
        cout << " You got some new gear! + 1 to your fighting level!" << endl;
    }
    if(rnd1to6 == 4 || rnd1to6 == 5){
        cout << " You got some new gear! + 2 to your fighting level!" << endl;
    }
    if(rnd1to6 > 5){
        cout << " You got some new gear! + 3 to your fighting  level!" << endl;
    }
    
}

//Monster Generation
//Treasure Generation
//Level Up


//Gameplay Loop    *do while* *switch*

//Victory Screen     *for loop* *switch*
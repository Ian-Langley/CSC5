/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void askformove(int &xpos, int &ypos, bool);
void makeBoard(char board[][3]);
void editboard(char board[][3],int ypos,int xpos,bool &turnOwn);
void checkWinOne(char board[][3], bool &plyrOW);
void checkWinTwo(char board[][3], bool &plyrTW);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    char board[3][3]{
        {'*','*','*'},
        {'*','*','*'},
        {'*','*','*'}
    };
    int xpos;
    int ypos;
    int counter = 0;
    bool turnOwn = true;
    bool plyrOW = false,
         plyrTW = false;
         
    do{
    counter++;
    makeBoard(board);
    askformove(xpos, ypos, turnOwn);
    editboard(board,ypos,xpos,turnOwn);
    checkWinOne(board, plyrOW);
    checkWinTwo(board, plyrTW);
    }while(plyrOW == false && plyrTW == false && counter != 10);
    if(plyrOW == true){
        cout << "Player 1 has won";
    }
    if(plyrTW == true){
        cout << "Player 2 has won";
    }
    if(counter == 10){
        cout << "Tie";
    }
    
    
    
    return 0;
}


void askformove(int &xpos, int &ypos, bool turnOwn){
    cout << "Player ";
    if(turnOwn == true){
        cout << "1";
    }
    if(turnOwn == false){
        cout << "2";
    }
    cout << " select location:" << endl;
    cin >> ypos >> xpos;
    ypos -= 1;
    xpos -= 1;
}
void makeBoard(char board[][3]){
    cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
    cout << "-" << "|" << "-" << "|" << "-" << endl;
    cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
    cout << "-" << "|" << "-" << "|" << "-" << endl;
    cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl;
}
void editboard(char board[][3],int ypos,int xpos,bool &turnOwn){
    if(turnOwn == true){
        board[ypos][xpos] = 'X';
    }
    if(turnOwn == false){
        board[ypos][xpos] = 'O';
    }
    turnOwn = !turnOwn;
}
void checkWinOne(char board[][3], bool &plyrOW){
	if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') plyrOW = true;
	if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') plyrOW = true;
	if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') plyrOW = true;
	if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') plyrOW = true;
	if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') plyrOW = true;
	if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') plyrOW = true;
	if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') plyrOW = true;
	if(board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') plyrOW = true;
}
void checkWinTwo(char board[][3], bool &plyrTW){
	if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') plyrTW = true;
	if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') plyrTW = true;
	if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') plyrTW = true;
	if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') plyrTW = true;
	if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') plyrTW = true;
	if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') plyrTW = true;
	if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') plyrTW = true;
	if(board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') plyrTW = true;
}
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

//Execution Begins Here
int main(int argc, char** argv) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    int menuSel;
    float rectLen, rectHei, radius, triBase, triHeig, rectAre, circAre, triArea, pi;
    pi = 3.14159;
    std::cout << "Geometry Calculator" << std::endl;
    std::cout << "1. Calculate the Area of a Circle" << std::endl;
    std::cout << "2. Calculate the Area of a Rectangle" << std::endl;
    std::cout << "3. Calculate the Area of a Triangle" << std::endl;
    std::cout << "4. Quit" << std::endl;
    std::cin >> menuSel;
    if(menuSel < 1 || menuSel > 4){
                    std::cout << "Invalid entry, Reenter:" << std::endl;
                    cin >> menuSel;
                }
    switch(menuSel){
        case 1:
            std::cout << "Enter the radius of the circle:" << std::endl;
            cin >> radius;
                if(radius < 0){
                    std::cout << "Invalid entry, Reenter:" << std::endl;
                    cin >> radius;
                }
            circAre = pi * radius * radius;
            std::cout << "The area of the circle is " << circAre;
            break;
        case 2:
            std::cout << "Enter the length of the rectangle:" << std::endl;
            cin >> rectLen;
                if(rectLen < 0){
                   std::cout << "Invalid entry, Reenter:" << std::endl;
                   cin >> rectLen;
                }
            std::cout << "Enter the height of the rectangle:" << std::endl;
            cin >> rectHei;
                if(rectHei < 0){
                   std::cout << "Invalid entry, Reenter:" << std::endl;
                   cin >> rectHei;
                }
            rectAre = rectLen * rectHei;
            std::cout << "The area of the rectangle is "<< rectAre;
            break;
        case 3:
            std::cout << "Enter the base of the triangle:" << std::endl;
            cin >> triBase;
                if(triBase < 0){
                    std::cout << "Invalid entry, Reenter:" << std::endl;
                   cin >> triBase;
                }
            std::cout << "Enter the height of the triangle:"<< std::endl;
            cin >> triHeig;
                if(triHeig < 0){
                    std::cout << "Invalid entry, Reenter:" << std::endl;
                   cin >> triHeig;
                }
            triArea = triBase * triHeig *.5;
            std::cout << "The area of the triangle is " << triArea;
        case 4: 
            break;
    }
    return 0;
}
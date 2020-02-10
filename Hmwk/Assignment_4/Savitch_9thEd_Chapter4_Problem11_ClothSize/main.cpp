/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;
float hatSize(float weight, float height){
    float size = 0;
    size = weight / height;
    size = size * 2.9;
    return size;
}
float jacketSize(float weight, float height, float age){
    float size = 0.0, adjustment = 0.0;
    size = height * weight;
    size = size / 288.0;
    adjustment = 1/8;
    age = age / 10.0;
    age = age - 3.0;
    adjustment = adjustment * age;
    if(age > 30){
        adjustment = adjustment;
    }
    if(age < 30){
        adjustment = 0;
    }
    cout << size << endl;
    size = size + adjustment;
    cout << size << endl;
    return size;
}
float waistSize(float weight, float height, float age){
    float size = 0.0, adjustment = 0;
    size = weight /5.7;
    age = age - 28.0;
    for(int i = 0; i <= static_cast<int>(age); i++){
        adjustment = adjustment + 1.0;
        i++;
    }
    cout << adjustment << endl;
    adjustment = adjustment * (.1);
    cout << adjustment << endl;
    size = size + adjustment;
}
int main(int argc, char** argv) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    float weight, height, age, hat, jacket, waist;
    char inputUSR = 'Y';
    bool run = true;
    while(run == true){
        hat = 0;
        jacket = 0;
        waist = 0;
        std::cout << "Enter height(inches):" << std::endl << std::endl;
        cin >> height;
        std::cout << "Enter Weight(pounds):" << std::endl << std::endl;
        cin >> weight;
        std::cout << "Enter age:" << std::endl << std::endl;
        cin >> age;

        hat = hatSize(weight, height);

        jacket = jacketSize(weight, height, age);

        waist = waistSize(weight, height, age);

        cout << "Hat size = " << hat << std::endl;
        cout << "Jacket size = " << jacket << std::endl;
        cout << "Waist size = " << waist << std::endl << std::endl;
        cout << "Run again:" << std::endl;
        cin >> inputUSR;
        if(inputUSR == 'Y' || inputUSR == 'y'){
        run = true;
        }
        else if(inputUSR == 'N' || inputUSR =='n'){
        run = false; 
        }
    }
    return 0;
}
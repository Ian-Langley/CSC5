#include <iostream>  //Input/Output Library
using namespace std;
float maxValue(float first, float second){
    float maximum = 0;
    if(first > second){
        maximum = first;
    }
    if(first < second){
        maximum = second;
    }
    return maximum;
}
float maxValue(float first, float second, float third){
    float maximum = 0;
    if(first > second){
        maximum = first;
    }
    if(first < second){
        maximum = second;
    }
    if(maximum > third){
        maximum = maximum;
    }
    if(maximum < third){
        maximum = third;
    }
    return maximum;
}
int main(int argc, char** argv) {
    float numOne, numTwo, numThree, twoMax, threeMax;
    std::cout << "Enter first number:" << std::endl;
    cin >> numOne;
    std::cout << std::endl << "Enter Second number:" << std::endl;
    cin >> numTwo;
    std::cout << std::endl << "Enter third number:" << std::endl;
    cin >> numThree;
    std::cout << std::endl << "Largest number from two parameter function:" << std::endl;
    twoMax = maxValue(numOne, numTwo);
    std::cout << twoMax << std::endl;
    std::cout << std::endl;
    std::cout << "Largest number from three parameter function:" << std::endl;
    threeMax = maxValue(numOne, numTwo, numThree);
    std::cout << threeMax << std::endl;
    
    
    return 0;
}
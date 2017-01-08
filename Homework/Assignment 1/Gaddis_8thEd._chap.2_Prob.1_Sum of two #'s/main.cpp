/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 4, 2017, 10:00 PM
  Purpose:  Write a program that calculates the sum of two numbers stored
 *          as variables.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char numb1=50,
    numb2=100;
    short total;
    //Input values
    
    //Process by mapping inputs to outputs
    total =numb1 + numb2;
    //Output values
    cout<<"The sum of the two numbers is = "<<total<<endl;
    //Exit stage right!
    return 0;
}
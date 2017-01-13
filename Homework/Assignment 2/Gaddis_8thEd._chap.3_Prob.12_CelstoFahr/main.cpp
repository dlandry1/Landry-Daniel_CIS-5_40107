/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 11, 2017, 8:35 PM
  Purpose:  This program will convert Fahrenheit to Celsius.
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
    float celsval, fahrval;
    //Input values
    cout<<"This program will convert Celsius temperature to Fahrenheit."<<endl;
    cout<<"Enter the Celsius temperature value you wish to convert."<<endl;
    cin>>celsval;
    
    //Process by mapping inputs to outputs
    fahrval=(9/5)*celsval+32;  //conversion equations from F to C
    
    //Output values
    cout<<"The Fahrenheit value is = "<<fahrval<<" degrees."<<endl;
    //Exit stage right!
   return 0;
}
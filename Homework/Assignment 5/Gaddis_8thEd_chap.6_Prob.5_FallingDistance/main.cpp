/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 31, 2017, 7:15 PM
  Purpose:  
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
float Fallingdistance(float);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float d;
    //Input values
    cout<<"Input the objects falling time to calculate the distance fallen.\n";
    
    //Process by mapping inputs to outputs
    for (float t=1;t<=10;t++) {
        d=Fallingdistance(t);    
        cout<<" The distance fallen at "<<t<<" seconds is "<<d<<" meters.\n";
    }
      
    //Output values

    //Exit stage right!
   return 0;
}

float Fallingdistance(float t) {
    float g= 9.8, //gravity on earth
          d; //distance
    d=(.5)*g*t*t;
   return d;
}
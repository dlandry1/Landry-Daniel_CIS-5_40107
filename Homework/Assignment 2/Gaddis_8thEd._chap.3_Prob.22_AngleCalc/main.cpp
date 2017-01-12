/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 11, 2017, 7:15 PM
  Purpose:  This program will display the sine, cosine, and tangent of a 
 *          user entered angle.
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    float radian, cosval, sinval, tanval;
    //Input values
    cout<<"This program will calculate the sine, cosine, and tangent values";
    cout<<" of any angle."<<endl;
    cout<<"Enter your angle value in radians."<<endl;
    cin>>radian;
    
    //Process by mapping inputs to outputs
    cosval= cos(radian);
    sinval= sin(radian);
    tanval= tan(radian);
    
    //Output values
    cout<<"The cosine value is = "<<cosval<<endl;
    cout<<"The sine value is = "<<sinval<<endl;
    cout<<"The tangent value is = "<<tanval<<endl;
    //Exit stage right!
   return 0;
}
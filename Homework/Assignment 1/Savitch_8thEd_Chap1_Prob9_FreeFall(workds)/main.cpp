/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 5, 2017, 12:15 PM
  Purpose:  Program that will calculate the distance fallen after x amount of
 *          seconds.
 
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
const float GRAVITY= 3.2174e1f;  //the force of gravity

//Executable code begins here!!!
 int main(int argc, char** argv) {
    //Declare Variables
        float time,       //time in sec
            distnce;      //in ft
        int rndoff;      //the number of decimals you want to round to
    //Input values
    cout<<"This problem solves the distance traveled"<<endl;
    cout<<"in free-fall under earth gravity"<<endl;
    cout<<"input the time during free-fall in seconds"<<endl;
    cin>>time;
    cout<<"How many decimal places 0,1,2 or 3 for the answer"<<endl;
    cin>>rndoff;
    //Process by mapping inputs to outputs
    distnce=GRAVITY*time*time/2;  //formula for gravity
    int id=distnce*pow(10,rndoff)+0.5; //adds 10^(#), forms large whole#
                                       //+ 0.5 to round up
    distnce=id/pow(10,rndoff);  //removes 10^(#)power function, makes decimal
    //Output values
    cout<<"The distance fallen = "<<distnce<<"ft"<<endl;
    //Exit stage right!
    return 0;
}

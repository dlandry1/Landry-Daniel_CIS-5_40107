/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float GRAVITY=3.217e1f;
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Input values
    cout<<"This problem solves the distance traveled"<<endl;
    cout<<"in free-fall under earth gravity"<<endl;
    cout<<"input the time during free-fall in seconds"<<endl;
    cin<<time;
        //Process by mapping inputs to outputs
    distance=GRAVITY*time*time/2;
    //Output values
    cout<<"The distance fallen = "<<distance<<"ft"<<endl;
    //Exit stage right!
    return 0;
}
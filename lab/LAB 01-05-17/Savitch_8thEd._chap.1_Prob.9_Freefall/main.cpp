/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
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
const GRAVITY=3.2174e1f
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    
    float time,       //time in sec
            distance,//in ft
            rndoff;
    //Input values
    cout<<"This problem solves the distance traveled"<<endl;
    cout<<"in free-fall under earth gravity"<<endl;
    cout<<"input the time during free-fall in seconds"<<endl;
    cin>>time;
    cout<<"How many decimal places 0,1,2 or 3 for the answer"<<endl;
    cin>>rndoff
    //Process by mapping inputs to outputs
    distance= GRAVITY*time*time/2;
    int id=distance*pow(10,rndoff)+0.5; //round to 2 decimal
    distance=id/pow(10,rndoff);
    //Output values
    cout<<"The distance fallen = "<<distance<<"ft"<<endl;
    //Exit stage right!
    return 0;
}
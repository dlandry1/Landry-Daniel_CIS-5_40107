/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 9, 2017, 2:58 PM
  Purpose:  This program will calculate the number of calories ingested
 *          from a bag of cookies.
 */
// 30 cookies= 3000 calories
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
    float bag,ncokies;
    float calores, srvngs;
    //Input values
    cout<<"This program will calculate the number of calories you ";
    cout<<"ingested from a bag of cookies."<<endl;
    cout<<"How many cookies have you eaten?"<<endl;
    cin>>ncokies;
    
    //Process by mapping inputs to outputs
    calores= 100*ncokies; //conversion from cookies to calories
    //1 bag= 30 cookies
    //30 cookies= 3000 calories
    //1 cookies= 100 calories
    
    //Output values
    cout<<"You have ingested "<<calores<<" calories."<<endl;
    //Exit stage right!
    return 0;
}
/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 4, 2017, 12:15 PM
  Purpose:  Produce a large C using any variable.
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
    char c;
    //Input values
    cout<<"This program outputs a larg c,"<<endl;
    cout<<"With a letter the user chooses."<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"A Big C with the letter "<<c<<endl;
    cout<<"   "<<c<<" "<<c<<"  "<<c<<endl;
    cout<<"  "<<c<<"        "<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<"  "<<c<<"        "<<c<<endl;
    cout<<"   "<<c<<" "<<c<<"  "<<c<<endl;
    //Exit stage right!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 16, 2017, 2:16 PM
 * Purpose: This program will display the amount of time it will take for sound
 *          to travel through the selected medium of gas.
 */
//system Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//user Libraries
//Global Constants
//such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to
//another
const int CarbonDioxide= 1,  //Constance for menu choices
        Air= 2,
        Helium= 3,
        Hydrogen= 4;

//Function Prototype 
//Executable code begins here!!

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int medium;  //medium the sound is traveling through
    float distnc, time;  //distance sound is traveling
    
    
    //input values
    cout<<"\t\t The Speed of Sound in Gas \n\n";
    cout<<"Select the gas you want sound to travel through"<<endl;
    cout<<"1. Carbon Dioxide"<<endl;
    cout<<"2. Air"<<endl;
    cout<<"3. Helium"<<endl;
    cout<<"4. Hydrogen"<<endl;
    cin>>medium;  //the medium
       
    //Process by mapping inputs to outputs
    
    //output
    cout<<setprecision(4)<<fixed;

    
    switch(medium)   {
        case CarbonDioxide:
            cout<<"How many seconds did it take for the sound to travel"<<endl;
            cin>>time;
            if (time<0){ 
               cout<<"This program does not accept negative time values."<<endl;
            }
            if (time>30){
                cout<<"This program does not accept time values greater ";
                cout<<"than 30 seconds.";
            }
            if (time>=0 && time<=30) {
            distnc= time*(258.0); //using conversion factor of 258.0m per sec
            cout<<"The source if the sound is = "<<distnc<<" meters away"<<endl;
            }
            break;
        case Air:
           cout<<"How many seconds did it take for the sound to travel"<<endl;
            cin>>time;
            if (time<0){ 
               cout<<"This program does not accept negative time values."<<endl;
            }
            if (time>30){
                cout<<"This program does not accept time values greater ";
                cout<<"than 30 seconds.";
            }
            if (time>=0 && time<=30) {
            distnc= time*(331.5); //using conversion factor of 331.5m per sec
            cout<<"The source of the sound is = "<<distnc<<" meters away"<<endl;
            }
            break;
        case Helium:
           cout<<"How many seconds did it take for the sound to travel"<<endl;
            cin>>time;
            if (time<0){ 
               cout<<"This program does not accept negative time values."<<endl;
            }
            if (time>30){
                cout<<"This program does not accept time values greater ";
                cout<<"than 30 seconds.";
            }
            if (time>=0 && time<=30) {
            distnc= time*(972.0); //using conversion factor of 972.0m per sec
            cout<<"The source of the sound is = "<<distnc<<" meters away"<<endl;
            }
            break;
        case Hydrogen:
            cout<<"How many seconds did it take for the sound to travel"<<endl;
            cin>>time;
            if (time<0){ 
               cout<<"This program does not accept negative time values."<<endl;
            }
            if (time>30){
                cout<<"This program does not accept time values greater ";
                cout<<"than 30 seconds.";
            }
            if (time>=0 && time<=30) {
            distnc= time*(1270.0); //using conversion factor of 1270.0m per sec
            cout<<"The source of the sound is = "<<distnc<<" meters away"<<endl;
            }
            break;
        default:
            cout<<"Input not valid. Run again and enter either 1, 2, or 3.";
    }
    //Exit stage right!
    return 0;
}


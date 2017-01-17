/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 16, 2017, 12:16 PM
 * Purpose: This program will display the amount of time it will take for sound
 *          to travel through the selected medium.
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
const int AIR= 1,  //Constance for menu choices
        WATER= 2,
        STEEL= 3;

//Function Prototype 
//Executable code begins here!!

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int medium;  //medium the sound is traveling through
    float distnc, time;  //distance sound is traveling
    
    
    //input values
    cout<<"\t\t The Speed of Sound \n\n";
    cout<<"Select the medium you want sound to travel through"<<endl;
    cout<<"1. Air"<<endl;
    cout<<"2. Water"<<endl;
    cout<<"3. Steel"<<endl;
    cin>>medium;  //the medium
       
    //Process by mapping inputs to outputs
    
    //output
    cout<<setprecision(4)<<fixed;

    
    switch(medium)   {
        case AIR:
            cout<<"How far is the sound traveling in feet."<<endl;
            cin>>distnc;
            
            if (distnc<0){ 
                cout<<"This program does not accept negative values."<<endl;
            }
            if (distnc>=0){
            time= distnc/(1100); //using conversion factor of 1100ft/sec
            cout<<"Sound reaches that distance in = "<<time<<" seconds."<<endl;
            }
            break;
        case WATER:
            cout<<"How far is the sound traveling in feet."<<endl;
            cin>>distnc;
            if (distnc>=0) {
            time= distnc/(4900);  //using conversion factor of 4900ft/sec
            cout<<"Sound reaches that distance in = "<<time<<" seconds."<<endl;
            }
            if (distnc<0) {
                cout<<"This program does not accept negative values."<<endl;
            }
            break;
        case STEEL:
            cout<<"How far is the sound traveling in feet."<<endl;
            cin>>distnc;
            if (distnc>=0) {
            time= distnc/(16400); //using conversion factor of 16,400ft/sec
            cout<<"Sound reaches that distance in = "<<time<<" seconds."<<endl;
            }
            if (distnc<0) {
                cout<<"This program does not accept negative values."<<endl;
            }
            break;
        default:
            cout<<"Input not valid. Run again and enter either 1, 2, or 3.";
    }
    //Exit stage right!
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 17, 2017, 6:36 PM
 * Purpose: To display the distance a vehicle has traveled for each
 *          hour.
 */
//system Libraries
#include <iostream>
using namespace std;
//user Libraries
//Global Constants
//such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to
//another

//Function Prototype 
//Executable code begins here!!

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int speed; //the speed of the vehicle in piles per hour
    float trvltim;  //travel time on the vehicle
    float distnc,  //distance traveled
            hours;  //hours to be displayed
    //input values
    cout<<"This program will calculate and display the distance traveled ";
    cout<<"each hour for a given time period."<<endl;
    cout<<"What is the speed of the vehicle in miles per hour."<<endl;
    cin>>speed;
    cout<<"How many hours has it been traveling?"<<endl;
    cin>>trvltim;
    
    //Process by mapping inputs to outputs
    
     
    //output
    
    for (hours= 1; hours<= trvltim; ++hours)  {
        distnc= speed*hours;
   cout<<"The distance traveled: "<<distnc<<" miles after "<<hours<<" hours.\n";
    }
    //Exit stage right!
    
    
    return 0;
}


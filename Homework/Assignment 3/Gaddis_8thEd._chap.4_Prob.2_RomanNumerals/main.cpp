/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 16, 2017, 5:16 PM
 * Purpose: Coverts numbers between 1-10 to Roman numerals.
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
    unsigned int number;
    //input values
    cout<<"This program will convert any number into Roman Numeral."<<endl;
    cout<<"Enter a number 1-10"<<endl;
    cin>>number;  //number entered (1-10)
    
        if (number==1)
            cout<<"That number converts too: I"<<endl;
        else if (number==2)
            cout<<"That number converts too: II"<<endl;
        else if (number==3)
            cout<<"That number converts too: III"<<endl;
        else if (number==4)
            cout<<"That number converts too: IV"<<endl;
        else if (number==5)
            cout<<"That number converts too: V"<<endl;
        else if (number==6)
            cout<<"That number converts too: VI"<<endl;
        else if (number==7)
            cout<<"That number converts too: VII"<<endl;
        else if (number==8)
            cout<<"That number converts too: VIII"<<endl;
        else if (number==9)
            cout<<"That number converts too: IX"<<endl;
        else if (number==10)
            cout<<"That number converts too: X"<<endl;
    else
      cout<<"This program does not accept numbers >10 or <1. "<<endl;
    
     
    //Process by mapping inputs to outputs
    //Exit stage right!
    return 0;
}


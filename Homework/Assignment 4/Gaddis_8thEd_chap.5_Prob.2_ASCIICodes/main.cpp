/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 17, 2017, 5:16 PM
 * Purpose: Print characters 0 - 127 of ASCII
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


//Function Prototype 
//Executable code begins here!!

int main(int argc, char** argv) {
    //Declare Variables
    int x;
    //input values
   
    //Process by mapping inputs to outputs
    
    //output
    while (x<= 127) {
        if(x%16== 0)
            cout<<endl;
        
        cout<<static_cast<char>(x)<<"    ";
        ++x;
}
    //Exit stage right!
    return 0;
}


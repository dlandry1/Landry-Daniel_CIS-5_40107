/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 11, 2017, 4:16 PM
 * Purpose: To calculate the number of slices a pizza of any size can be 
 *          divided into.
 */
//system Libraries
#include <iostream>
using namespace std;
//user Libraries
//Global Constants
//such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to
//another
const float PIE= 3.14159; //the value of Pie
//Function Prototype 
//Executable code begins here!!

int main(int argc, char** argv) {
    //Declare Variables
    float diametr, perslic= 14.125,// inches squared, surface area of a slice
            area, radius, slices;
    //input values
    cout<<"This programs will calculate the number of slices a pizza of any";
    cout<<" size can be divided into."<<endl;
    cout<<"What is the diameter of the pizza in inches?"<<endl;
    cin>>diametr;
    
    //Process by mapping inputs to outputs
    radius= diametr/2;  //convert diameter to radius
    area= PIE*radius*radius;  //find the total area
    slices= area/perslic;  //dived the total area by the area of a single slice
    //output
    cout<<"This pizza can produce = "<<slices<<" slices"<<endl;
    cout<<"area = "<<area<<" inches squared."<<endl;
    cout<<"radius = "<<radius<<endl;
    //Exit stage right!
    return 0;
}


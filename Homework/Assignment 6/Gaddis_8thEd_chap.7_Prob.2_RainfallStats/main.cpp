/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Feb 3, 2017, 9:16 PM
 * Purpose: calculate the total rainfall
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
const int Size=12;
//Executable code begins here!!

int main(int argc, char** argv) {
    //Declare Variables
    float RnFall[Size];
    float Total= 0,   //Total initialized to 0
            least,  //least rainfall value
            highest,  //highest rainfall value
            monthL=1,  //month number with the least rainfall
            monthH=1;  //month number with the highest rainfall
    
    //input values
    for (int count=1; count<=Size;count++){
    cout<<"Enter the total rainfall in inches for month "<<count<<" ?"<<endl;
    cin>>RnFall[count]; //input rainfall
}
    least=highest= RnFall[1]; // least and highest rainfall equal to 
    
    for (int j=1; j<=Size; j++){ //loop to number of months
        if (RnFall[j] > highest){
            highest= RnFall[j];  //highest is the highest inputed value
            monthH=j; //the month number that the highest rainfall occured
        }
        if (RnFall[j] < least) { //loop to number of months
            least= RnFall[j]; //least equals lowest rainfall value
            monthL=j; //month number that the lowest rainfall occured
        }
    Total= Total + RnFall[j]; //add all the inputed numbers 
    }
    
    
    cout<<"Total rainfall for the year = "<<Total<<" inches."<<endl;
    cout<<"The average rainfall per month = "<<Total/12.0f<<" inches."<<endl;
    cout<<"The month with the most rainfall = "<<monthH<<endl;
    cout<<"The month with the least rainfall = "<<monthL<<endl;
    //Process by mapping inputs to outputs
    
    //Exit stage right!
    
    return 0;
}


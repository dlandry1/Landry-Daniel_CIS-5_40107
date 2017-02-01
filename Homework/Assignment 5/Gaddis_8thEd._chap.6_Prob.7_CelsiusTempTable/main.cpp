/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 31, 2017, 9:15 PM
  Purpose:  This program converts fahrenheit to Celsius
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
float celcius(float);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float C;
    
    //Input values
    cout<<"This program will convert Fahrenheit to Celsius."<<endl; 
    
    //Process by mapping inputs to outputs
    for (float tempF=0; tempF<=20; tempF++){
        C=celcius(tempF);
        cout<<"Fahrenheit | Celsius "<<endl;
        cout<<tempF<<"F        "<<C<<"C"<<endl;
    }
    
    //Output values

    //Exit stage right!
   return 0;
}

//******************************************************************************
float celcius(float tempF){
    float C;
    cout<<setprecision(1)<<fixed;
    C= (5*tempF-32)/9;
    return C;
}
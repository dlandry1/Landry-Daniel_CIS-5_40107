/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 9, 2017, 12:15 PM
  Purpose:  Conversion from the US dollar to the Japanese yen and euros.
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
const float Yen_Per_Dollar= 115.93,  //conversions of 1 USD to yen
        Euros_Per_Dollar= 0.94;  //conversion of 1 USD to euros
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float USdolr,yen,euros;  //the US dollars 
    
    //Input values
    cout<<"This program will convert the US dollar to the Japanese yen and";
    cout<<" euro."<<endl;
    cout<<"Please input the amount of US dollars you wish to convert."<<endl;
    cin>>USdolr;
    //Process by mapping inputs to outputs
    yen= USdolr*Yen_Per_Dollar;  //conversion equation to yen
    euros= USdolr*Euros_Per_Dollar;  //conversion equation to euros
    //Output values
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"Your US Dollars converted into euros = ";
    cout<<euros<<" euros."<<endl;
    cout<<"Your US Dollars converted into yen = ";
    cout<<yen<<" yen."<<endl;
    
    //Exit stage right!
    return 0;
}
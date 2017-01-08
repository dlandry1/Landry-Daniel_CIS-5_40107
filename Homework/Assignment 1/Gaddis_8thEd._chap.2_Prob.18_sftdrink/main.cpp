/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 6, 2017, 11:10 PM
  Purpose:  Calculate the percent of customers that drink more that 1 energy 
 * drink per week and what percentage prefer citrus.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const short PERCENT=100; //conversion of percents
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    short totCust=16500,  //total customers
            morthn1=15,  //percent of those that drink more than 1
            citrus=58;  //percent of those that prefer citrus
    short nmbmor,//those that drink more than 1 drink a day
          lkctrs;  //those that like citrus
        
    //Input values
    
    //Process by mapping inputs to outputs
    nmbmor=totCust*morthn1/PERCENT;
    // # of total customers who drink 1 or more drinks a week
    lkctrs=nmbmor*citrus/PERCENT;
    // those who drink 1 or more drinks a week who prefer citrus.
    //Output values
    cout<<"In a survey given to " <<totCust<<" customers, it was found that \n";
    cout<<nmbmor<<" of them drink one or more soft drinks a week."<<endl;
    cout<<"Of those "<<nmbmor<<", "<<lkctrs<<" prefer citrus flavor.\n";
   
    //Exit stage right!
   return 0;
}
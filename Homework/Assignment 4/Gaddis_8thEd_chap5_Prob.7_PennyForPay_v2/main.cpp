/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 19, 2017, 6:15 PM
  Purpose:  To double the rate of pay from one penny to a desired number of days
 * 
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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float salry = .01, //representing a penny in dollars
            DaysWkd, //days worked
            totPay; //total pay
    
    //Input values
    cout<<"This program will calculate how much you would make over time if \n";
    cout<<"your salary was a penny the first day and doubled ever day "
            "after.\n";
    cout<<"Enter the number of days you wish work."<<endl;
    cin>>DaysWkd; //days worked
    
    //Process by mapping inputs to output
    
    //looping
    for (int days=1;days<=DaysWkd;days++,salry*=2) {
        cout<<setprecision(2)<<fixed; //show to only 2 decimal places
         totPay+=salry;  //add all the salaries to form a total
        cout<<"On day "<<days<<" you earned =$"<<salry<<endl;
        cout<<"The total =          $"<<totPay<<endl;
        cout<<endl;
    } //inaccurate due to float
    cout<<endl;
    cout<<"The overall total earned = $"<<totPay<<endl;
  
    //Output values

    //Exit stage right!
   return 0;
}
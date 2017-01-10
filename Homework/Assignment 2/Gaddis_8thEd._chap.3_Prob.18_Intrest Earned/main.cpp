/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 9, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const short PERCENT= 100;
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float intrate, Tmscomp, prcipal, intrest, amount, rate;
    //Input values
    cout<<"This program will calculate the amount of money in your savings";
    cout<<" account and money earned in interest."<<endl;
    cout<<"What is your current balance in your savings account?"<<endl;
    cin>>prcipal;
    cout<<"What is the interest rate? (as a percent)"<<endl;
    cin>>intrate;
    cout<<"How many times is the interest compounded?"<<endl;
    cin>>Tmscomp;
    //Process by mapping inputs to outputs
    
    rate=intrate/PERCENT;
    amount= prcipal*pow(1+rate/Tmscomp,Tmscomp);
    intrest=amount-prcipal;
    
    //Output values
    cout<<"Interest rate     = "<<intrate<<"%"<<endl;
    cout<<"Times Compounded  = "<<Tmscomp<<endl;
    cout<<"Principal amount  = $"<<setprecision(2)<<fixed<<prcipal<<endl;
    cout<<"Interest          = $"<<setprecision(2)<<fixed<<intrest<<endl;
    cout<<"Amount in Savings = $"<<amount<<endl;
    
    //Exit stage right!
    return 0;
}
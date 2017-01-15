/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 14, 2017, 9:35 PM
  Purpose:  To create a change counting game with the objective of adding up to
 *          equal a dollar.
 */

//System Libraries
#include <iostream>
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
    unsigned int nnickls, nquartr, ndimes, npenns, sum, qurtval, dimeval,
    nickval;
    
    //Input values
cout<<"You are about to play the change game!!"<<endl;
cout<<"The objective is to enter the exact amount of change required to";
cout<<"equal one dollar."<<endl;
cout<<"Enter the number of Quarters"<<endl;
cin>>nquartr;
cout<<"Enter the number of Dimes"<<endl;
cin>>ndimes;
cout<<"Enter the number of Nickels."<<endl;
cin>>nnickls;
cout<<"Enter the number of Pennies."<<endl;
cin>>npenns;

    //Process by mapping inputs to outputs
qurtval= 25*nquartr; //quarter value
dimeval= 10*ndimes;  //dime value
nickval= 5*nnickls;  //nickel value

sum= qurtval+dimeval+nickval+npenns;  //the sum of the change

    //Output values
if(sum> 100)
    cout<<"You are over the dollar value.";
else if (sum< 100)
    cout<<"You are below the dollar value.";
else 
    cout<<"CONGRATULATIONS!! YOU'VE WON!!";
    //Exit stage right!

   return 0;
}
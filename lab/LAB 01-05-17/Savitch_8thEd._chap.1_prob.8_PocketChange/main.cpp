/* 
  File:   main.cpp
  Author: Daniel landry
  Created on January 5, 2017, 1:57 PM
  Purpose:  To calculate the dollar value and cent value
 *          of your pocket change.
            projects!
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
    const char quarter=25,
            dime=10,
            nickles=5,
            penny=1;
    char nQuarts,nDimes,nNickls,nPenies;
    unsigned short total;  //total pocket change in cents
    //Input values
    cout<<"This calculaties the amount of your pocket change"<<endl;
    cout<<"How many quarters, Nickles, Dimes, and pennies do"<<endl;
    cout<<"you have in your pocket?"<<endl;
    cout<<"type it all on the same line i.e. 3 4 0 2"<<endl;
    cout<<"Mazimum of any value must be less than 10"<<endl;
    cin>>nQuarts>>nDimes>>nNickls>>nPenies;
    //Process by mapping inputs to outputs
    total=(nQuarts-48)*quarter +
            (nDimes-48)*dime +
            (nNickls-48)*nickles +
            (nPenies-48)*penny;
            //Output values
    cout<<"the coins in your pocket = "<<total<<" cents"<<endl;
    cout<<"The coins in your pocket = $"<<total/100.0f<<endl;
    //Exit stage right!
    return 0;
}
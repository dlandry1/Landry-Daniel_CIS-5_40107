/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 18, 2017, 1:37 AM
 * Purpose:  This program will predict the size of a population of organism.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int PERCENT= 100;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned int PopRate, InPop, Mult;
    float TotPop;
    
    //Input or initialize values Here
    cout<<"This program will predict the size of a population.\n";
    cout<<"Enter the starting number organism.\n";
    cin>>InPop;
    cout<<"Enter the percent increase in the population per day."<<endl;
    cin>>PopRate;
    cout<<"How many days will these organisms multiply."<<endl;
    cin>>Mult;
    
    //Process/Calculations Here
    //TotPop= InPop+ (day)*(PopRate/PERCENT);
    
    //Loop
    for (int day=1;day<=Mult; day++ ) {
        TotPop= InPop+ day*(PopRate/PERCENT);
        cout<<"On day "<<day<<" the population was = "<<TotPop<<endl;
    }
        
    //Output Located Here
   
    //Exit
    return 0;
}


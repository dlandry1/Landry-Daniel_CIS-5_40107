/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 19, 2017, 12:15 PM
  Purpose:  To write a program that will budget for a month
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
    float EstBudg, //estimated budget inputed by user
          numExp,  //number of expenses
            TotExp, //the total value of expenses
            ExpsVal;  //the value of an expense
            
    
    //Input values
    cout<<"This program will tell you if your over or under your set budget.\n";
    cout<<"Enter your estimate budget for the month in dollars."<<endl;
    cin>>EstBudg;
    cout<<"How many expenses do you have?"<<endl;
    cin>>numExp;
    //Process by mapping inputs to outputs
    
    //Loop
    for (int Expns=1;Expns<=numExp;Expns++) {
        cout<<"How much is expense "<<Expns<<" = $";
        cin>>ExpsVal; //expense value
       TotExp+=ExpsVal; //adding the expenses to total expenses
        
    }
    
    if (TotExp<EstBudg) {
        cout<<"You are under you budget by = $"<<(EstBudg-TotExp)<<endl;
    }   //output the net budget saved by subtracting from Budget
    if (TotExp>EstBudg) {
        cout<<"You are over your budget by = $"<<(TotExp-EstBudg)<<endl;
    }   //output the net difference from your budget and total expenses
    else {
        cout<<"You are right on budget!"<<endl;
    }
    
    //Output values

    //Exit stage right!
   return 0;
}
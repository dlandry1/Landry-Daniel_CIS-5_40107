/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 4, 2017, 9:32 PM
  Purpose:  To write a program that will calculate the 
 *          tip and tax on a restaurant bill.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const unsigned char PERCENT=100; //conversion of percent
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv){
    //Declare Variables
    float meal = 88.67;  //meal cost
    float taxrt = 6.75;  //tax rate as percentage
    float tiprt=20;  //tip rate as percentage
    float tip,totmeal,tax,totExps;
    //Input values
               
    //Process by mapping inputs to outputs
    tax=meal * taxrt/PERCENT;  //calculate tax amount
    totmeal=tax + meal;        //calculate the meal including tax
    tip=totmeal * tiprt/PERCENT; //the tip amount
    totExps=tip + totmeal;     //Total expense of the meal
           
          
    
    //Output values
    cout<<"This program will calculate the meal cost, tax amount, tip amount\n";
    cout<<"and total bill."<<endl;
    cout<<"The meal cost = $"<<meal<<endl;
    cout<<"Tax amount = $"<<tax<<endl;
    cout<<"Tip amount = $"<<tip<<endl;
    cout<<"The total bill = $"<<totExps<<endl;
    //Exit stage right!
    return 0;
 }
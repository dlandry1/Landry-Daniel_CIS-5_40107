/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 22, 2017, 10:15 PM
  Purpose:  Display the an items retail price after a mark up
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const char PERCENT = 100;

//Function Prototypes
void calcRet();

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
float   WholSal,  //whole sale price
        Markprc,  //Mark up percentage
        RetVal;  //Retail value price
        
    
    //Input values
    cout<<"This program will calculate the retail cost of an item given its "
            " wholesale price and markup percentage."<<endl;
     
    cout<<"Enter this items whole sale cost in dollars."<<endl;
    cin>>WholSal;
    cout<<"Enter this items markup percentage."<<endl;
    cin>>Markprc;
    
    //Process by mapping inputs to outputs
    RetVal= WholSal + (WholSal*(Markprc/PERCENT));
   
    //Loop
    if (WholSal > 0 ||Markprc > 0) {
    calcRet();                 
    } else {
    cout<<"Error. This is not a positive value.\n";
    cout<<"Enter in positive whole sale value.\n"; 
    }              
     //Output values
     
    //Exit stage right!
return 0;
}

//Function
//******************************************************************************
//******************** Calculate Retail Value **********************************
//******************************************************************************
// Purpose: to calculate retail value    
    
   
    void calcRet() 
    {
        float   WholSal,  //whole sale price
        Markprc,  //Mark up percentage
        RetVal;  //Retail value price
        
        RetVal= WholSal + (WholSal*(Markprc/PERCENT));
        cout<<"This items retail price is = $"<<RetVal<<endl;
               
    }
            
    

  
  
/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 28, 2017, 8:15 AM
  Purpose:  Poker
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Random card generator
    srand(time(0));
    
    //Declare Variables
    int card= rand()%52+1;
    cout<<"Card value = "<<card<<endl;
    int suit;
    
    //loop for card value
    if (card>=49) {
        
    }
    else if (card<=48 && card>44) {
        switch (card){
            case 48:{
                
            }
            case 47: {
                
            }
            case 46: {
                
            }
            case 45: {
                
            }
        }
    }
    else if (card<= 44 && card>40) {
      
    }
     else if (card<= 40 && card>36) {
        
    }
     else if (card<= 36 & card>32) {
    }
     else if (card<= 32 & card>28) {
    }
     else if (card<= 28 & card>24) {
    }
     else if (card<= 24 & card>20) {
    }
     else if (card<= 20 & card>16) {
        
    }
     else if (card<= 16 & card>12) {
        
    }
     else if (card<= 12 & card>8) {
        
    }
     else if (card<= 8 & card>4) {
        
    }
     else if (card<= 4 & card>1) {
       
    }
    else {
            cout<<"ERROR. not ace or king"<<endl;
    }
    cout<<"card is ="<<card<<endl;
    //Input values
   
    
    //Process by mapping inputs to outputs
    
      
    //Output values

    //Exit stage right!
   return 0;
}
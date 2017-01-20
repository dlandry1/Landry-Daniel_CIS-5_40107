/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 18, 2017, 3:15 PM
  Purpose:  To display the largest and smallest values inputed.
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
    int series;  //the inputed series of numbers
    int LrgNum, SmlNum; //Largest number, Smallest number 
    //Input values
    
    cout << "This program will determine the least and greatest numbers ";
    cout<<"inputed.\n";
    cout<<"Input the series by separating each number with the [Enter] key.\n";
    cout<<"(enter -99 to signal the end of the series)"<<endl;
    cin>>series;
    LrgNum= series; //set largest number as the first number entered
    SmlNum= series; //set smallest number as the first number entered
    
    do{  
        
        if (series > LrgNum) { //change large number to the larger input number
            LrgNum = series;
        }
        
        if (series < SmlNum) { //change small number to the smaller input number
            SmlNum = series;
        }
       // cout<<" The largest number is = "<<LrgNum<<endl;
        //cout<<"The smallest number is = "<<SmlNum<<endl;
  
         cin>>series; 
    }while (series!= -99);
         
        
  cout<<" The largest number is = "<<LrgNum<<endl;
  cout<<"The smallest number is = "<<SmlNum<<endl;
   
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
   return 0;
}
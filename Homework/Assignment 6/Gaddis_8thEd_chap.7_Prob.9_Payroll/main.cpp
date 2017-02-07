/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on February 6, 2017, 2:15 PM
  Purpose:  program a payroll program
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
    int SIZE =7;
    int empId[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 
    1302850, 7580489}; //all 7 employee numbers
    int hours[SIZE]; //hours story array
    int payRate[SIZE]; //payrate storing array
    int wages[SIZE];  //calculate wages storing array
    
    //Input values
    cout<<"This program will calculate the gross wages for each employee"<<endl;
    cout<<"Enter the hours and pay rate of each employee"<<endl;
    
    //Process by mapping inputs to outputs
    for (int c=0; c<SIZE; c++){ //intervale for each employee
        cout<<empId[c]<<": "<<endl;
        cout<<"How many hours did they work?"<<endl;
        cin>>hours[c];  //hours worked
        cout<<"what is this employees pay rate? (dollars per hour)"<<endl;
        cin>>payRate[c];  //payrate
        
        wages[c]= hours[c]*payRate[c]; //calculate the gross wages
    }
      
    //Output values
    cout<<"The Gross wages for each of the seven employees."<<endl;
    for (int c=0; c<SIZE; c++){  //outputs the 7 employees gross wages
        cout<<empId[c]<<":  $"<<wages[c]<<endl;
    }
    

    //Exit stage right!
   return 0;
}
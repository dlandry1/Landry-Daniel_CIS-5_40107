/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 14, 2017, 10:44 PM
  Purpose:  This program will display two random number that are to be added.
           
 */

//System Libraries
#include <iostream>
#include <ctime>
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
    //Declare Variables
    unsigned int numb1, numb2, total, userval;
    
    int seed= time(0);  //seed is the time
    srand (seed);  //random number generator with seed of time
    
    //Input values
    cout<<"This program will display two number that are to be added."<<endl;
 numb1= rand( )% 999+1;  //the range is from 1-999
 numb2= rand( )% 999+1;  //the range is from 1-999
 
    cout<<numb1<<endl;
    cout<<numb2<<endl; 
    //Process by mapping inputs to outputs
    total= numb1+numb2;  //the total of the 2 random numbers
    
    //Output values
    cout<<"Please enter your answer."<<endl;
    cin>>userval;
            
    if (userval== total)  //gives correct answer
        cout<<"Congratulations, you are CORRECT!"<<endl;
    else 
        cout<<"Incorrect.The correct answer is "<<total<<"."<<endl;
    
    //Exit stage right!
   return 0;
}
/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on Febuary 4, 2017, 2:15 PM
  Purpose:  This program will output the numbers greater than n
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
const int SIZE= 20;
void NLarger(int, int [], int);
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int n; //number 
    int Numbr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    //array to hold numbers
    
    //Input values
    cout<<"This program will output all the number greater than n "
            " between 1 and 20 in the array."<<endl;
    cout<<endl;
    cout<<"input the your n value."<<endl;
    cin>>n;
    NLarger(n,Numbr,SIZE);
    
    //Process by mapping inputs to outputs
    
      
    //Output values

    //Exit stage right!
   return 0;
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
 void NLarger(int n, int Numbr[], int SIZE){
     cout<<"Numbers greater than n in array:"<<endl;
     for (int c=0; c<=(SIZE-1); c++){
         if (Numbr[c] > n) {cout<<Numbr[c]<<" ";}
     }
 }
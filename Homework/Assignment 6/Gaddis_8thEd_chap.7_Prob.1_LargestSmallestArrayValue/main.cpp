/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Feb 2, 2017, 12:27 AM
 * Purpose:  chooses the highest and lowest values in an array
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int ArSize= 10;
    float Store[ArSize]={}; //storage cells 0-9
    float lowest, highest;
    
    //Input or initialize values Here
    cout<<"This program will pick the highest and lowest numbers from a "
            "set of 10 inputed values"<<endl;
    cout<<endl;
   
    
    for (int c=1;c<=ArSize;c++) {
    cout<<"Input a number: ";
    cin>>Store[c];    
    }
    lowest=highest=Store[1];
    
    //Process/Calculations Here
    for (int a=1;a<=ArSize;a++) {    
    if(Store[a]<lowest) lowest= Store[a];
    if (Store[a]> highest) highest= Store[a];
    }
    //Output Located Here
   cout<<"Highest number stored = "<<highest<<endl;
    cout<<"Lowest number stored = "<<lowest<<endl; 
    //Exit
    return 0;
}
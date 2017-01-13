/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 12, 2016, 12:07 PM
 * Purpose:  This program will determine if the date is magic.
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
    unsigned short month, day, year;
    
    //Input or initialize values Here
    cout<<"This program will determine if the inputed date is magic."<<endl;
    cout<<"(if the month times the day is equal to the last 2 digits of ";
    cout<<" the year.)"<<endl;
    cout<<"Enter the month"<<endl;
    cin>>month;
    cout<<"Enter the day"<<endl;
    cin>>day;
    cout<<"Enter the year.(only the last two digits)"<<endl;
    cin>>year;
       
    
    //Process/Calculations Here
    
    //Output Located Here
    if (year== month*day)
        cout<<" THIS DAY IS A MAGIC DAY! "<<endl;
    else 
        cout<<"This is not a magic day."<<endl;
    
    
   
    

    //Exit
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 11, 2017, 12:37 AM
 * Purpose:  Write a program to calculate a paycheck with overtime.
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
    float rate, hours, pay, totpay;
    //Input or initialize values Here
   
    cout<<"What is your pay rate per hour?"<<endl;
    cin>>rate;
   
    cout<<"How many hours have you worked?"<<endl;
    
    cin>>hours;
    
    //Process/Calculations Here
    pay= rate*hours;
    totpay= (40*rate)+(hours-40)*2*rate;
    
    //Output Located Here
    cout<<"your paycheck is = $",
    cout<<(hours>40?totpay:pay);

    //Exit
    return 0;
}


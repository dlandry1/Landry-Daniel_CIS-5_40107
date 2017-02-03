/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Feb 1, 2017, 12:47 PM
 * Purpose:  calculate the future value of a savings account
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float futVal(float,float,float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   P, //present present value 
            i, //monthly interest rate
            F=0, //future value
            FutrVal,
            t; //number of months
  
    //Input or initialize values Here
   cout<<"This program will calculate the future value of a savings account \n";
   cout<<"giving the present value, monthly interest rate, and number of \n";
   cout<<"months the money was left in the account.\n";
   cout<<endl;
   cout<<"What is the current amount in the savings account?\n";
   cin>>P;
   cout<<"What is the monthly interest rate on the savings account?\n";
   cout<<"(as a percent)\n";
   cin>>i;
   cout<<"How many months will the money be left in the account?\n";
   cin>>t;
   
    //Process/Calculations Here
    FutrVal= futVal(P,i,t);
            
    //Output Located Here
    cout<<"The future value is = $"<<FutrVal<<endl;

    //Exit
    return 0;
}

float futVal(float P,float i,float t){
    float F;
    float Rate =i/100;
    cout<<setprecision(2)<<fixed; 
    F=P*(pow((1+Rate),t));
    return F;
}
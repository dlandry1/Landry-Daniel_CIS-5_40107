/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 10, 2017, 12:30 PM
 * Purpose:  Calculate the Debt Per person in the US.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float DEBT2008= 10.1e12,
        DEBT2016= 19.5e12;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float pop2008= 304e6,  
      //source: http://www.prb.org/Publications/Datasheets/2008/2008wpds.aspx
            pop2016= 320e6,  
      //source: https://en.wikipedia.org/wiki/Demography_of_the_United_States
            per2008, per2016;
    float DEBT2008= 10.1e12,
  //source: http://www.polidiotic.com/by-the-numbers/us-national-debt-by-year/
        DEBT2016= 19.5e12;
  //source: http://www.usgovernmentdebt.us/
    //Input or initialize values Here
    
    //Process/Calculations Here
    per2008= DEBT2008/pop2008; //calculate debt per person 2008
    per2016= DEBT2016/pop2016; //calculate debt per person 2016
    //Output Located Here
    cout<<"This program will output the debt per person for 2008 and 2016 ";
    cout<<"in the US."<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Debt per person in 2008 = $"<<per2008<<endl;
    cout<<"Debt per person in 2016 = $"<<per2016<<endl;

    //Exit
    return 0;
}


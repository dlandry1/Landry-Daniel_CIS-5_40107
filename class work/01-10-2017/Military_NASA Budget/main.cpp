/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
float const TOTALBUDGET=3.54*pow(10,12);
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float percmil,percnas,milbudg,nasbudg;
    //Input or initialize values Here
    
    //Process/Calculations Here
    percmil=milbudg/TOTALBUDGET*(100);
    percnas=nasbudg/TOTALBUDGET*(100);
            
    //Output Located Here
    

    //Exit
    return 0;
}


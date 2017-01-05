/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January , 2017, 12:45 PM
  Purpose:  Land calculations
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const int CNVACFT=43560; //conversion of acres to feet
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int nAcres,nFt2;
    //Input values
    cout<<"This is a conversion program"<<endl;
    cout<<"from number of acres to feet squared"<<endl;
    cout<<"Input number of acres"<<endl;
    cin>>nAcres;
    //Process by mapping inputs to outputs
    nFt2=nAcres*CNVACFT;
    //Output values
    cout<<"The number of acres input = "<<nAcres<<endl;
    cout<<"Equivalent to "<<nFt2<<"(ft^2)"<<endl;
    //Exit stage right!
    return 0;
}
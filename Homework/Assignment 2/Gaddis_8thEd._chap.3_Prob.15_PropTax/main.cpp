/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 10, 2017, 3:15 PM
  Purpose:  Make a programs that will Display the assessment value and property
 *          tax on a property.
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    float asment, propval, proptax; 
    float ASESRTE=.60,  //Percent converted into a decimal
        TAXRATE=.0075;  //percent converted to a decimal
    //Input values
    cout<<"This program will display the assessment value as well as";
    cout<<" the property tax value."<<endl;
    cout<<"Enter the actual value of a piece of property."<<endl;
    cin>>propval;
    
    //Process by mapping inputs to outputs
    asment= propval*ASESRTE;  //generates the assessment price
    proptax= asment*TAXRATE;  //generates the property tax
    //Output values
    cout<<setprecision(2)<<fixed;
    
    cout<<"The Assessment value is = $"<<asment<<endl;
    cout<<"The property tax is = $"<<proptax<<endl;
    //Exit stage right!
   return 0;
}
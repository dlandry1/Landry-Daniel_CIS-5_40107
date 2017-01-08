/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 6, 2017, 8:35 AM
  Purpose:  This program is used to display the cost of each item, calculate
           the sub total, find the tax owed, the tip to be payed, and the 
           overall total.
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    float item1=15.95,
            item2=24.95,
            item3=6.95,
            item4=12.95,
            item5=3.95;
    float tot, tax, prctax, grndtot;
    float taxrt=.07;  //tax rate converted to decimal my dividing by 100
    //Input values
    
    //Process by mapping inputs to outputs
    tot = item1+item2+item3+item4+item5;  //subtotal of all items
    tax=tot * taxrt;  //the tax owed
    grndtot= tot + tax;  //the total with tax included
    prctax=taxrt*100;  //conversion of tax rate to a percent
    
    //Output values
    cout<<"The sales price of each of your items will be displayeed below: \n";
    cout<<"Item 1 = $"<<item1<<endl;
    cout<<"Item 2 = $"<<item2<<endl;
    cout<<"Item 3 = $"<<item3<<endl;
    cout<<"Item 4 = $"<<item4<<endl;
    cout<<"Item 5 = $"<<item5<<endl;
    cout<<"The subtotal for these items is  = $"<<tot<<endl;
    cout<<"At a tax rate of = "<<prctax<<"%"<<endl;
    cout<<"The sales taxed owed is = $"<<tax<<endl;
    cout<<"This brings your grand total to = $"<<grndtot<<endl;
            
    //Exit stage right!
   return 0;
}
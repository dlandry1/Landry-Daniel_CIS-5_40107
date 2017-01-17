/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 16, 2017, 7:16 PM
 * Purpose: THis program will calculate the monthly bill of a customer.
 */
//system Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//user Libraries
//Global Constants
//such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to
//another
const int PackageA= 1,
       PackageB= 2,
        PackageC= 3;
//Function Prototype 
//Executable code begins here!!

int main(int argc, char** argv) {
    //Declare Variables
    unsigned short package;
    float minutes, overage, totchrg;
    
    //input values
    cout<<"This program will calculate your monthly bill based on the";
    cout<<" package purchased and minutes used. /n/n"<<endl;
    cout<<"1. Package A: For $39.99 per month 450 minutes are provided."<<endl;
    cout<<"   Additional minutes are $0.45 per month\n\n";
    cout<<"2. Package B: For $59.99 per month 900 minutes are provided."<<endl;
    cout<<"   Additional minutes are $0.40 per month.\n\n";
    cout<<"3. Package C: For $69.99 per month unlimited minutes provided"<<endl;
    cout<<"What mobile package have you purchased? (enter 1, 2, or 3)\n";
    cin>>package;
    
    //Process by mapping inputs to outputs
    
    //output
    cout<<setprecision(2)<<fixed;
    
    switch (package)  {
        case PackageA:
                cout<<"How many minutes have you used?\n";
                cin>>minutes;
            if (minutes>450)  {
                overage= minutes- 450; 
                totchrg= 39.99+(overage*0.45);  //overtime minutes times rate
                cout<<"The total due is = $"<<totchrg<<endl;
            }
            else {
                totchrg= 39.99;
                cout<<"The total due is = $"<<totchrg<<endl;
            }
                break;
                           
        case PackageB:
                cout<<"How many minutes have you used?\n";
                cin>>minutes;
            if (minutes>900)  {
                overage= minutes- 900;
                totchrg= 59.99+(overage*0.40);  //overtime minutes times rate
                cout<<"The total due is = $"<<totchrg<<endl;
                }
            else {
                totchrg= 59.99;
                cout<<"The total due is = $"<<totchrg;
            }         
                break;
                
        case PackageC:
                cout<<"How many minutes have you used?\n";
                cin>>minutes;
                overage=minutes;  //calculates minutes over
                totchrg= 69.99+(overage*0);  //overtime minutes times rate
                cout<<"The total due is = $"<<totchrg<<endl;
                break;
        default:
       cout<<"Invalid response. Run program again and only enter 1, 2, or 3.\n";
    } 
    
    //Exit stage right!
    return 0;
}


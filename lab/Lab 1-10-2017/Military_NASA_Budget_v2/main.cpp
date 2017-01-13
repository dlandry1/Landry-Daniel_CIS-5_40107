/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 10, 2017, 1:40 PM
 * Purpose:  Calculating the NASA and military budgeting as a percent.
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
float const TOTALBUDGET=3.54*pow(10,12); //total federal budget
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float percmil,percnas,
            milbudg= 598e9,
 //source: https://www.nationalpriorities.org/campaigns/military-spending-united-states/
            nasbudg= 19e9;
 //source: https://en.wikipedia.org/wiki/Budget_of_NASA
    //Input or initialize values Here
        
    //Process/Calculations Here
    percmil=milbudg/TOTALBUDGET*(100); //percent of total budget to military
    percnas=nasbudg/TOTALBUDGET*(100); //percent of total budget to NASA
            
    //Output Located Here
    cout<<"This programs will show the percent values received by NASA"<<endl;
    cout<<"and the military from the Federal Budget."<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Percent Military Budget = "<<percmil<<"%"<<endl;
    cout<<"Percent NASA Budget = "<<percnas<<"%"<<endl;
    
    //Exit
    return 0;
}


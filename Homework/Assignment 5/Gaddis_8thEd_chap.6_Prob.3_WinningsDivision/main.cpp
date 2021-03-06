/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 31, 2016, 12:47 AM
 * Purpose:  Greatest same for a quarter.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float getSals(string);
void fndTop(float, float, float, float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float SEast=0,NEast=0, NWest=0,SWest=0;
    // all the divisions
    
    //Input or initialize values Here
    cout<<"This program will determine which of the four company divisions \n";
    cout<<"(NorthEast, Southeast, Northwest and Southwest) had the greatest \n";
    cout<<" sales for the quarter."<<endl;
      
    //Process/Calculations Here

    //Output Located Here
    NEast = getSals("Northeast"); //northeast string division
    SEast= getSals("Southeast"); //southeast string division 
    NWest= getSals("Northwest"); //Northwest string division
    SWest= getSals("Southwest"); //Southwest string division
   
    fndTop(NEast, SEast, NWest, SWest);

    //Exit
    return 0;
}
//******************************************************************************
//******************************************************************************
float getSals(string division){ 
    float result;
    do{
        cout<<"What is "<<division<<"'s quarterly sales figure in dollars?\n";
        cin>>result;
    }while(result<=0);
    return result; 
}
//******************************************************************************
//******************************************************************************

void fndTop(float NEast, float SEast, float NWest, float SWest){
    
    float sales = NEast;
    string division=" ";

    if (SEast > sales) {sales = SEast; division="Southeast";}
    if (NWest > sales) {sales = NWest; division="Northwest";}
    if (SWest > sales) {sales = SWest; division="Southwest";}
    if (NEast >= sales) {sales = NEast; division= "Northeast";}
    
    cout<<division<<" has the highest sales at $"<<sales<<endl;
    //output highest    
}
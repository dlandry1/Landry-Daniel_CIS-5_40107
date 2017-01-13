/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 12, 2016, 12:07 PM
 * Purpose:  Converting the mass of an object into weight.
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
    float mass, weight;
    
    //Input or initialize values Here
    cout<<"This program will Calculate the weight of an object when given";
    cout<<" the mass."<<endl;
    cout<<"Enter the objects mass"<<endl;
    cin>>mass;
               
    //Process/Calculations Here
    weight= mass*9.8;
    
    //Output Located Here
    if (weight> 1000)
        cout<<"The object is too heavy.";
    else if (weight< 10)
        cout<<"The object is too light.";
    else
        cout<<"The weight of the object is = "<<weight<<" Newtons.";
    //Exit
    return 0;
}


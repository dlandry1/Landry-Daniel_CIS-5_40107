/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Feb 3, 2017, 12:16 AM
 * Purpose: Keep track of sales for 5 different types of salsa
 */
//system Libraries
#include <iostream>
#include <cstring>

using namespace std;
//user Libraries
//Global Constants
const int SIZE= 5;

//such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to
//another
//Function Prototype 
//Executable code begins here!!

int main(int argc, char** argv) {
    //Declare Variables
    string Salsas[SIZE]= {"mild","medium","sweet","hot","zesty"},
             JarL, //jar 
             JarH;
         float Jars[SIZE], 
         lowest, //lowest sales salsas
       
         highest; //highest sales salsa
    
    //input values
    cout<<"This program will keep track of the sales for  5 different "
            "types of salsa."<<endl; 
    
    //Process by mapping inputs to outputs
    for (int c=0; c<=(SIZE-1); c++){
        cout<<"How many jars of "<<Salsas[c]<<" were sold?"<<endl;
        cin>>Jars[c];
        
        while (Jars[c] <0 ){
            cout<<"Invalid entry. Enter a positive value for jars sold"<<endl;
        cin>>Jars[c];
        }
        
    }
    
    lowest=Jars[0];
    highest=Jars[0];
    
    JarL= Salsas[0];
    JarH= Salsas[0];
    
    for (int c=0; c<=(SIZE-1); c++) {
        if (Jars[c] < lowest) {
            lowest= Jars[c];
            JarL= Salsas[c];
        }
        if (Jars[c] > highest) {
            highest= Jars[c];
            JarH= Salsas[c];
    }
    }
    cout<<endl;
    
    //output
    cout<<"\tThe table of salsas Sales: \n"<<endl;
   for (int c=0; c<=(SIZE-1); c++){
    cout<<Salsas[c]<<" = "<<Jars[c]<<" jars sold"<<endl;            
   }
    cout<<"Lowest selling salsa was "<<JarL<<" with "<<lowest<<" jars"<<endl;
    cout<<"Highest selling salsa was "<<JarH<<" with "<<highest<<" jars"<<endl;
    
    //Exit stage right!
    return 0;
}


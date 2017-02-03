/* 
 * File:   main.cpp
 * Author: Daniel landry
 * Created on Feb 1, 2016, 12:07 PM
 * Purpose:  Simulate a coin toss 
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int cnToss();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //seed random number 
    srand(time(0)); //seed RandNumb
    
    //Declare all Variables Here
    int n; //number of coin tosses
    
    //Input or initialize values Here
    cout<<"This program will flip a coin"<<endl;
    cout<<"How many times should the coin be tossed"<<endl;
    cin>>n;
    
    //Process/Calculations Here
    for (int toss=1;toss<=n;toss++){
        cout<<"Toss "<<toss<<": "; //increment toss with toss number
        cnToss();
    }
  
    //Output Located Here

    //Exit
    return 0;
}
int cnToss(){
    int face=0; //face coin lands on
    
    face=rand()%2+1;    
if (face==1){  
    cout<<"Heads"<<endl;   // if land on 1= heads      
} 
if (face==2) {
        cout<<"Tails"<<endl;  //if 2= tails
    }
}
/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 19, 2017, 12:07 AM
 * Purpose:  Create a random number guessing game
 */

//System Libraries Here
#include <iostream>
#include <ctime> //time seed of time(0)
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int seed= time(0); //seed
    srand(seed); //seeded random number
    int guess; //the users guess
    int randnum= rand()%100+1;  //generates the random number
            
    //Input or initialize values Here
    cout<<"This is a game where you have to guess what random number "
            <<"the computer has generated."<<endl;
    cout<<"Enter you guess."<<endl;
    
    cin>>guess;
    do {
        if (guess> randnum) {
            cout<<"Too high, try again."<<endl;
            cin>>guess;                    
        }    
        if (guess<randnum) {
        cout<<"Too low, try again."<<endl;
        cin>>guess;
        } 
    }while (guess!= randnum);  //applies 'do' condition as long as they're wrong
    
    cout<<"Thats Right!!"<<endl;
    cout<<"The random number was = "<<randnum<<endl;
        
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on February 2, 2017, 9:07 AM
 * Purpose:  make a lottery system that will match random 
 *           numbers with the user's
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int SIZE=5; //size of array

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int lottery[SIZE]= {};
    int user[SIZE]={};
    int match= 0;
    
    srand(time(0));
    
    //Input or initialize values Here
    cout<<"This program will generates a random lottery and match the numbers "
            "with the user input lottery guesses."<<endl;
    cout<<endl;
    cout<<"Input your five lottery numbers between 0 and 9 : "<<endl;
    
    //Process/Calculations Here
    for (int c=0; c<SIZE; c++) {
        cout<<"Number "<<(c+1)<<" = ";
        cin>> user[c];
    }
    
    for (int j= 0; j<SIZE; j++) {
          lottery [j] = rand()%9+1;
    }
       
    //Output Located Here
   
        for (int i=0; i<SIZE; i++){            
            if (user [i] == lottery[i] ) {
            match++;
    }        
    }
     cout<<"The lottery array : ";
    for (int i= 0; i<SIZE; i++){
        cout<<lottery[i]<<" ";
    }
     cout<<endl; 
     
    cout<<"The User array    : ";
    for (int i= 0; i<SIZE; i++){
        cout<<user[i]<<" ";
    }
    cout<<endl;
    cout<<"Number of matches = "<<match<<endl;
    
    if (match==5) {
        cout<<"YOUR A GRAND PRIZE WINNER!"<<endl;
    }
    
    
    
    //Exit
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 12, 2017, 11:27 AM
 * Purpose:  Grade Switch case
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
    unsigned short score;
    char grade;
    
    //Input or initialize values Here
    cout<<"This program takes the score and outputs the grade."<<endl;
    cout<<"Input the score 0-100"<<endl;
    cin>>score;
    
    //Process/Calculations Here
    switch(score>=95){
    case true:grade= 'A';break;
        default: switch(score>=87){
            case true:grade='B';break;
            default: switch(score>=80){
                case true:grade='C';break;
                default: switch(score>=75){
                    case true: grade='D';break;
                    default: grade= 'F';
                                          
          }
        }
      } 
    } 
    
    
    //Output Located Here
    
    cout<<"Your score of "<<score<<" = "<<grade<<endl;

    //Exit
    return 0;
}


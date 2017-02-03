/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on Feb 1, 2017, 5:15 PM
  Purpose:  Calculate the contestants score 
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void JData(float&);  //get judge data
void CalcScr(float, float, float, float, float); //calculate score
float FndLow(float, float, float, float, float); //find lowest
float FndHigh(float, float, float, float, float); //find highest

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables          
    float score1=0, score2=0, score3=0 ,score4=0 ,score5=0;
    //scores for the corresponding judge
    
    //Input values
    cout<<"This program will calculate a contestants score."<<endl;   
    cout<<endl;
    
    //Process by mapping inputs to outputs
    cout<<"Judge 1: "<<endl;
   JData(score1);  
    cout<<"Judge 2: "<<endl;
   JData(score2);  
    cout<<"Judge 3: "<<endl;
   JData(score3);  
    cout<<"Judge 4: "<<endl;
   JData(score4);  
    cout<<"Judge 5: "<<endl;
   JData(score5);  
    
    
    //Output values
   CalcScr(score1,score2,score3,score4,score5); 

    //Exit stage right!
   return 0;
}

//******************************************************************************
//************************ Judge Data ******************************************

void JData(float &Refscor){ //edit score# through refrence
    do{
    cout<<"What is your score?"<<endl;
    cin>>Refscor;
    }while (Refscor<=0 || Refscor>=11);
}

//******************************************************************************
//************************** Calculate score ***********************************
void CalcScr(float score1, float score2, float score3,float score4,float score5)
{  
    cout<<setprecision(2)<<fixed;
    
    float highest= FndHigh(score1,score2,score3,score4,score5);
    float lowest= FndLow(score1,score2,score3,score4,score5);
    cout<<setprecision(2)<<fixed;
    float sum= score1+score2+score3+score4+score5-highest-lowest;
    float avg= sum/3;
    cout<<"The Judges scored as followed."<<endl;
    cout<<"Judge 1:"<<score1<<endl;
    cout<<"Judge 2:"<<score2<<endl;
    cout<<"Judge 3:"<<score3<<endl;
    cout<<"Judge 4:"<<score4<<endl;
    cout<<"Judge 5:"<<score5<<endl;
    cout<<endl;
    cout<<"lowest being :"<<lowest<<endl;
    cout<<"highest being :"<<highest<<endl;
    cout<<"The sum is ="<<sum<<endl;
    cout<<"Average value ="<<avg<<endl;
}

//******************************************************************************
//*************************** Find Lowest score ********************************
float FndLow(float score1, float score2, float score3,
        float score4, float score5)
{
    float lowest= score1;
    if (score1<lowest) {lowest=score1;}
    if (score2<lowest) {lowest=score2;}
    if (score3<lowest) {lowest=score3;}
    if (score4<lowest) {lowest=score4;}
    if (score5<lowest) {lowest=score5;}
    
    cout<<"Lowest ="<<lowest<<endl;
    return lowest;
}
//******************************************************************************
//************************Find Highest score ***********************************
float FndHigh(float score1, float score2, float score3,
        float score4, float score5)
{
    float highest=0;
    if (score1>highest) {highest= score1;}
    if (score2>highest) {highest= score2;}
    if (score3>highest) {highest= score3;}
    if (score4>highest) {highest= score4;}
    if (score5>highest) {highest= score5;}
    
    cout<<"highest ="<<highest<<endl;
    return highest;
}
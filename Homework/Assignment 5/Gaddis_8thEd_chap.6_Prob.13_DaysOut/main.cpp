/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on Feb 1, 2017, 10:44 PM
  Purpose:  calculate the the average of days employees are absent.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
float NumbEmp();
float MisDays(int);
float AvgMDay(int,int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int nEmpl=0; //number of employees
    int MTot=0; //total missed days
    float avgMDay=0; //average missing days per employee
    
    //Input values
   cout<<"This program will calculate the average number of days a company's\n";
   cout<<"employees are absent."<<endl;
   
    nEmpl= NumbEmp(); 
    MTot= MisDays(nEmpl);
    avgMDay= AvgMDay(nEmpl,MTot);
    
    //Process by mapping inputs to outputs
    
      
    //Output values
    cout <<"The average number of missing days per employee is "
            <<avgMDay<<" days.\n";
    
    //Exit stage right!
   return 0;
}
//******************************************************************************
//************************ Number of Employees *********************************
float NumbEmp(){
    int nEmpl;
      do {
    cout<<"Input the number of employees in the company."<<endl;
    cout<<"(number must be greater than one)"<<endl;
   cin>>nEmpl;
   } while (nEmpl<1);
   return nEmpl;
}


//******************************************************************************
//************************* Missed Days Total **********************************
float MisDays(int nEmpl){
    int Mdays, MTot;
    do{
  cout<<"How many days has each employee missed during the past year?"<<endl;
  cin>>Mdays;
    } while (Mdays<0);
    cout<<"nEmpl ="<<nEmpl<<endl;
  MTot=Mdays;
  return MTot;
}

//******************************************************************************
//******************************************************************************
float AvgMDay(int MTot,int nEmpl){
    float avgMDay;
    cout<<"MTot ="<<MTot<<endl;
    cout<<"nEmpl ="<<nEmpl<<endl;
    
    avgMDay= static_cast<float>(MTot)/nEmpl;
    return avgMDay;
} 
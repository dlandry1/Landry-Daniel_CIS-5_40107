/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on February 5, 2017, 2:15 PM
  Purpose:  Program that keeps track of the weather
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
const int Row= 3, //months
        Colm= 30; //days in month
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char weather[Row][Colm];
    int totRain= 0, //total rainy days
         totSun= 0, //total sunny days
         totCld= 0;  //total cloud days
    int     JuneRn= 0, //rain days in june
            JuneCl= 0, //cloudy days in june
            JuneSn= 0, //sunny days in june
            JulyRn= 0, //rain in july
            JulyCl= 0, //cloudy in july 
            JulySn= 0, //sunny july
            AugRn= 0,  //august rainy days
            AugCl= 0, //august cloudy days
            AugSn= 0;  // august sunny days   
            
    ifstream infile;
    infile.open ("RainorShine.txt");
    //Input values
    cout<<"This program will read in the weather data from a file and display "
            "the number of sunny, cloudy and rainy days."<<endl;
    
    //Process by mapping inputs to outputs
    
    //write in file RainorShine.txt
    for (int month=0; month < Row; month++){
        for (int day=0; day < Colm; day++) {
            infile >> weather[month][day];
        }
    }
    
    //displays array  
    for (int month=0; month < Row; month++){
        if (month==0){
            cout<<"Weather for the month of June: ";
        }
         if (month==1){
            cout<<"Weather for the month of July: ";
        }
         if (month==2){
            cout<<"Weather for the month of August: ";
        }
        
        for (int day=0; day < Colm; day++) {
            cout<< weather[month][day]<<" ";
        }
        cout<<endl;
    }
    
    // counts the number of sunny, cloudy and rainy days
    for (int month=0; month < Row; month++){
        for (int day=0; day < Colm; day++) {
            if (weather[month][day] == 'R') {
                totRain++;
            }
            if (weather[month][day] == 'C') {
                totCld++;
            }
            if (weather[month][day] == 'S') {
                totSun++;
            }
        }
    }
    
     for (int month=0; month < Row; month++){
        for (int day=0; day < Colm; day++) {
            if (month==0 && weather[month][day] == 'R'){
                JuneRn++;
            }
            if (month==0 && weather[month][day] == 'C'){
                JuneCl++;
            }
            if (month==0 && weather[month][day] == 'S'){
                JuneSn++;
            }
            
            if (month==1 && weather[month][day] == 'R'){
                JulyRn++;
            }
            if (month==1 && weather[month][day] == 'C'){
                JulyCl++;
            }
            if (month==1 && weather[month][day] == 'S'){
                JulySn++;
            }
            
            if (month==2 && weather[month][day] == 'R'){
                AugRn++;
            }
            if (month==2 && weather[month][day] == 'C'){
                AugCl++;
            }
            if (month==2 && weather[month][day] == 'S'){
                AugSn++;
            }           
        }
     }
    
    cout<<endl;
    //Output values
    
    cout<<"Total number of Rainy days: "<<totRain<<endl;
    cout<<"Total number of Sunny days: "<<totSun<<endl;
    cout<<"Total number of Cloudy days: "<<totCld<<endl;
    cout<<endl;
    cout<<"Number of Rainy days in June: "<<JuneRn<<endl;
    cout<<"Number of Sunny days in June: "<<JuneSn<<endl;
    cout<<"Number of Cloudy days in June: "<<JuneCl<<endl;
    cout<<endl;
    cout<<"Number of Rainy days in July: "<<JulyRn<<endl;
    cout<<"Number of Sunny days in July: "<<JulySn<<endl;
    cout<<"Number of Cloud days in July: "<<JulyCl<<endl;
    cout<<endl;    
    cout<<"Number of Rainy days in August: "<<AugRn<<endl;
    cout<<"Number of Sunny days in August: "<<AugSn<<endl;
    cout<<"Number of Cloudy days in August: "<<AugCl<<endl;
    cout<<endl;
    if (AugRn > JulyRn && AugRn > JuneRn) {
        cout<<"August had the most rainy days at "<<AugRn<<" days."<<endl;
    }
    if (JulyRn > AugRn && JulyRn > JuneRn) {
        cout<<"July had the most rainy days at "<<JulyRn<<" days."<<endl;
    }
    if (JuneRn > JulyRn && JuneRn > AugRn) {
        cout<<"June had the most rainy days at "<<JuneRn<<" days."<<endl;
    }
  
    //Exit stage right!
   return 0;
}
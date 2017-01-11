/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 10, 2017, 7:38 PM
  Purpose:  This Programs will craft a word game with the user.
 *          
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string name, city, age, namcolg, profesn, animal, petname;
    
    //Input values
    cout<<"This program will generate a Word Game."<<endl;
    cout<<"Enter your name."<<endl;
    getline(cin,name);
    cout<<"Enter your age."<<endl;
    cin>>age;
    cin.ignore();
    cout<<"Enter the name of a city."<<endl;
    getline(cin,city);
    cout<<"Enter the name of a college."<<endl;
 
    getline(cin, namcolg);
    cout<<"Enter the name of a Profession."<<endl;
    getline(cin,profesn);
    cout<<"Enter the name of an animal."<<endl;
    
    getline(cin,animal);
    cout<<"Enter the name of a pet."<<endl;
    getline(cin,petname);
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"There once was a person named "<<name<<" who lived in "<<city;
    cout<<"."<<endl;
    cout<<"At the age of "<<age<<", "<<name<<" went to college at "<<endl;
    cout<<namcolg<<". "<<name<<" graduated and went to work as a "<<endl;
    cout<<profesn<<". Then, "<<name<<" adopted a(n) "<<animal<<" named "<<endl;
    cout<<petname<<". They both lived happily ever after!"<<endl;
    //Exit stage right!
   return 0;
}
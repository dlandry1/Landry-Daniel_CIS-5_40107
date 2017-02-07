/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on February 12, 2017, 2:15 PM
  Purpose:  Keep track of how much food each of the 3 monkeys eat
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int Row= 3, //number of monkeys
          Colm= 5;

//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int Feedrep[Row][Colm];
    int total,
        highest,
        least;
    
    //Input values
    cout<<"This program keep track of how much food each of the 3 "
            "monkeys eat"<<endl; 
    cout<<endl;
    
    //Process by mapping inputs to outputs
    cout<<"Enter the pounds of food eaten by each monkey per day."<<endl;
      
    for(int c=0;c < Row; c++){
        for (int i=0; i < Colm; i++){
            
         cout<<"Monkey "<<(c+1)<<", "; //monkey number increases with counter c
         cout<<"day "<<(i+1)<<" = "; //days ramp up with counter i
            
            cin>>Feedrep[c][i]; //input the number to save in 2D array
        }        
    }  
    
    least=highest=Feedrep[0][0];
    
    //Output values
    for (int k=0; k<Row; k++) {
    for (int j=0; j< Colm; j++){
        total += Feedrep[k][j];  
        if (Feedrep[k][j] < least){ least = Feedrep[k][j];}
        if (Feedrep[k][j] > highest){ highest = Feedrep[k][j];}
        
    }
    }
    
    
    
    
    
    cout<<endl;
    cout<<"Average amount of food eaten per day = "<<total/5<<endl; 
    cout<<"Least amount of food eaten during this week eaten by one monkey = ";
    cout<<least<<endl;
    cout<<"Most amount of food eaten during this week eaten by one monkey = ";
    cout<<highest<<endl;

    //Exit stage right!
   return 0;
}
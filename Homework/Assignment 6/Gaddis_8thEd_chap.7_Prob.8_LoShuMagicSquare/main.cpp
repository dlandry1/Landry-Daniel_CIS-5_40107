/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on February 5, 2017, 9:15 PM
  Purpose:  Simulate a magic square using a 2D array
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
int const Row= 3, // Rows in the square
          Colm= 3; //Colms in the square 

//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
void check(int ,int [][Colm]); //function to input and verify magic square

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int MagicSq[Row][Colm]={}; //set array to 0
    
    //Input values
    cout<<"This program simulates a Lo Shu Magic square as a 2D array."<<endl;
    check(Row, MagicSq); //go into function
    
    //Process by mapping inputs to outputs
      
    //Output values

    //Exit stage right!
   return 0;
}

void check(int Row, int MagicSq[][Colm]) {
    for (int i=0 ; i < Row; i++) {
        for(int k= 0; k < Colm; k++){
            cout<<"Enter colum "<<(k+1)<<", row "<<(i+1)<<" number: ";
            cin >> MagicSq[i][k];
        }
        cout<<endl;
    }
    
    int numb = MagicSq[0][0] + MagicSq[1][1] + MagicSq[2][2] ;
    
    if (MagicSq[0][0] + MagicSq[1][1] + MagicSq[2][2]== numb  &&
        MagicSq[0][2] + MagicSq[1][1] + MagicSq[2][0]== numb  &&               
            
        MagicSq[0][0] + MagicSq[0][1] + MagicSq[0][2] ==numb &&
        MagicSq[1][0] + MagicSq[1][1] + MagicSq[1][2] ==numb &&
        MagicSq[2][0] + MagicSq[2][1] + MagicSq[2][2] ==numb &&
            
        MagicSq[0][0] + MagicSq[1][0] + MagicSq[2][0] ==numb && 
        MagicSq[0][1] + MagicSq[1][1] + MagicSq[2][1] ==numb &&
        MagicSq[0][2] + MagicSq[1][2] + MagicSq[2][2] ==numb         
                ) {
        cout<<" This is a Lo Shu Magic Square!"<<endl;
    }
    else {
        cout<<"This is not a Magic square."<<endl;
    }   
}
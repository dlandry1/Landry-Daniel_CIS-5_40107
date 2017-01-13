/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 12, 2016, 12:07 PM
 * Purpose:  a program that determine which number is smaller 
 *           and which is larger
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
    float numb1,numb2;
    
    //Input or initialize values Here
    cout<<"This program will determine which number is larger and ";
    cout<<" which is smaller"<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>numb1;
    cout<<"Enter the second number"<<endl;
    cin>>numb2;
    
    //Process/Calculations Here
    
    //Output Located Here
    if (numb1>numb2)
        cout<<numb1<<" is larger than "<<numb2<<endl;
    if (numb1<numb2)
        cout<<numb2<<" is larger than "<<numb1<<endl;
    
    if (numb1==numb2)
        cout<<"They are the same"<<endl;
    
   
    

    //Exit
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 9, 2016, 12:23 AM
 * Purpose:  To display the percentage of male and females in a class.
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversion
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float males, female, total;
    float prcmale,prcfeml;
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    
    //Output Located Here
    cout<<"Enter the number of Males in the class = "<<endl;
    cin>>males;
    cout<<"Enter the number of Females in the class = "<<endl;
    cin>>female;
    
    total = males + female; //calculate the total number of student in the class
    prcmale =(males/total)*100;  //percent males in the class
    prcfeml = (female/total)*100;  //percent females in the class
    
    
    cout<<"The total of student in class = "<<total<<endl;
    cout<<"The percentage of male students it = "<<prcmale<<"%"<<endl;
    cout<<"The percentage of Females students is = "<<prcfeml<<"%"<<endl;
    //Exit
    return 0;
}


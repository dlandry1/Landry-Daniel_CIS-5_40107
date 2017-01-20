/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 17, 2016, 9:07 AM
 * Purpose:  calculating Pi by multiplying n amount of times
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
//pie= 4[1-1/3 +1/5-1/7+1/9...+((-1)^n/2n+1)];
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned int numTrms;
    float pi= 0.0;
      do {     
    //Input or initialize values Here
    cout<<"This program will approximate pi to a desired number of digits.\n";
    cout<<"Enter the number of time you would like to approximate pi too.\n";
    cin>>numTrms;
  
   
        for (int n=0; n<=numTrms;++n) {
            pi+= 4*pow(-1,n)/(2*n+1);
        cout<<"n= "<<n<<"  "<<pi<<endl;
        }       
        }
    while (numTrms>= 1);
   
    //Output Located Here
    cout<<setprecision(7)<<fixed;
    cout<<"pi= "<<pi<<endl;

    //Exit
    return 0;
}


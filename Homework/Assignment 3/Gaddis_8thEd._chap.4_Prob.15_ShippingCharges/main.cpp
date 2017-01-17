/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 16, 2017, 1:36 PM
 * Purpose: To ask for the weight of the package and the distance it will
 *          be traveling and display a charge.
 */
//system Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//user Libraries

//Global Constants
//such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to
//another
//Function Prototype 
//Executable code begins here!!

int main(int argc, char** argv) {
    //Declare Variables
    float weight, distnce; 
    float charg1, charg2, charg3, charg4;
    
    //input values
    cout<<"This program will calculate the shipping charges."<<endl;
    cout<<"Input the weight of the package in kilograms."<<endl;
    cin>>weight;
    cout<<"Input the distance the package is to be shipped in miles."<<endl;
    cin>>distnce;
    
    //Process by mapping inputs to outputs
    charg1= 1.10*distnce/500;  //charge for <=2kg
    charg2= 2.20*distnce/500;  //charge for >2kg && <=6kg
    charg3= 3.70*distnce/500;  //charge for >6kg && <=10kg
    charg4= 4.80*distnce/500;  //charge for >10kg
    
    //output
   cout<<setprecision(2)<<fixed;
    
    if (weight<=0)
        cout<<"This company does not accept packages of 0kg or less";
    else if (distnce<10)
        cout<<"This company does not accept distances of less than 10 miles";
    else if (distnce>3000)
            cout<<"This company does not accept distances greater than 3000"
                    " miles.";
    else if (weight<=2)
        cout<<"Charge is= $"<<charg1;
    else if (weight>2&&weight<=6)
        cout<<"Charge is= $"<<charg2;
    else if (weight>6&&weight<=10)
        cout<<"Charge is= $"<<charg3;
    else if (weight>10&&weight<=20)
        cout<<"Charge is= $"<<charg4;
    else if (weight>20)
        cout<<"This company does not accept packages more than 20kg.";
    else if (distnce<10)
        cout<<"This company does not accept distances of less than 10 miles";
    else if (distnce>3000)
            cout<<"This company does not accept distances greater than 3000"
                    " miles.";
    else 
        cout<<"Error";
    //Exit stage right!
    return 0;
}


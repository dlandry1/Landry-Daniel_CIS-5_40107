/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short Test1,Test2,Test3,Test4,Test5;
    float sum, avg;
    //Input or initialize values Here
    cout<<"Input the percent score for your 5 tests"<<endl;
    cout<<"Test 1 = ";
    cin>>Test1;
    cout<<"Test 2 = ";
    cin>>Test2;
    cout<<"Test 3 = ";
    cin>>Test3;
    cout<<"Test 4 = ";
    cin>>Test4;
    cout<<"Test 5 = ";
    cin>>Test5;
    //Process/Calculations Here
    sum=Test1+Test2+Test3+Test4+Test5;
    avg=sum/5;
            
    //Output Located Here
    cout<<setprecision(1)<<fixed;
    cout<<"The sum of your scores is = "<<setw(8)<<sum<<endl;
    cout<<"Your average score is = "<<setw(8)<<avg<<endl;

    //Exit
    return 0;
}


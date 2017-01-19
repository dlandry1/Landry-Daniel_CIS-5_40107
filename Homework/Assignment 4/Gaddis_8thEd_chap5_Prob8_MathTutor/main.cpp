/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 17, 2017, 9:16 PM
 * Purpose: Create a looping menu that will allow the user to select addition, 
 *          subtraction, multiplication, or division. 
 *  */
//system Libraries
#include <iostream>
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
    
    int choice,
    Addition= 1,
    Subtraction=2,
    Multiplication=3,
    Division=4;
    
    int seed= time(0);  //seed is the time
    srand (seed);  //random number generator with seed of time
    
    int numb1, numb2; 
    float total, userval;
    //input values
    do {
    cout<<"Select one of the operations you wish to practice: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cin>>choice;
    
    switch (choice) {
        case 1: {
        //Input values
    cout<<"This program will display two number that are to be added."<<endl;
 numb1= rand( )% 999+1;  //the range is from 1-999
 numb2= rand( )% 999+1;  //the range is from 1-999
 
    cout<<numb1<<endl;
    cout<<numb2<<endl; 
    //Process by mapping inputs to outputs
    total= numb1+numb2;  //the total of the 2 random numbers
    
    //Output values
    cout<<"Please enter your answer."<<endl;
    cin>>userval;
            
    if (userval== total)  //gives correct answer
        cout<<"Congratulations, you are CORRECT!"<<endl;
    else 
        cout<<"Incorrect.The correct answer is "<<total<<"."<<endl;
                break;
        }
        
        case 2: {
            //Input values
            cout<<"This program will display two number that are to "
            "be subtracted."<<endl;
            numb1= rand( )% 999+1;  //the range is from 1-999
            numb2= rand( )% 999+1;  //the range is from 1-999
 
            cout<<numb1<<endl;
            cout<<numb2<<endl; 
    //Process by mapping inputs to outputs
            total= numb1-numb2;  //the total of the 2 random numbers
    
    //Output values
            cout<<"Please enter your answer."<<endl;
            cin>>userval;
            
                if (userval== total)  //gives correct answer
                    cout<<"Congratulations, you are CORRECT!"<<endl;
                else 
                    cout<<"Incorrect.The correct answer is "<<total<<"."<<endl;
                break;
}
        case 3: {
            //Input values
            cout<<"This program will display two number that are ";
            cout<<"to be multiplied."<<endl;
            numb1= rand( )% 999+1;  //the range is from 1-999
            numb2= rand( )% 999+1;  //the range is from 1-999
 
            cout<<numb1<<endl;
            cout<<numb2<<endl; 
    //Process by mapping inputs to outputs
            total= numb1*numb2;  //the total of the 2 random numbers
    
    //Output values
            cout<<"Please enter your answer."<<endl;
            cin>>userval;
            
            if (userval== total)  //gives correct answer
                cout<<"Congratulations, you are CORRECT!"<<endl;
            else 
                cout<<"Incorrect.The correct answer is "<<total<<"."<<endl;
                break;
               }
        case 4: {
            //Input values
                cout<<"This program will display two number"
                      " that are to be divided."<<endl;
                numb1= rand( )% 999+1;  //the range is from 1-999
                numb2= rand( )% 999+1;  //the range is from 1-999
 
                 cout<<numb1<<endl;
                 cout<<numb2<<endl; 
    //Process by mapping inputs to outputs
                 total= numb1/numb2;  //the total of the 2 random numbers
    
    //Output values
             cout<<"Please enter your answer."<<endl;
             cin>>userval;
            
                if (userval== total)  //gives correct answer
                     cout<<"Congratulations, you are CORRECT!"<<endl;
                 else 
                   cout<<"Incorrect.The correct answer is "<<total<<"."<<endl;
                break;
        }
        default: {
            cout<<"You are exiting the program."<<endl;
        }
    }
    }     
    while (choice>= 1&& choice<= 3);
    //Process by mapping inputs to outputs
    
    //Exit stage right!
    return 0;
}

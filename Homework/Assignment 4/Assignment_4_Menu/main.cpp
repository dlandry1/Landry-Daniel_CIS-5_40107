/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 19, 2017, 12:57 AM
  Purpose:  Assignment 4 in a menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>  //Math operations
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Prob 2 (Gaddis) with ASCII Code"<<endl;
        cout<<"Type 2 for Prob 13 (Gaddis) with Greatest and least number\n";
        cout<<"Type 3 for Prob 19 (Gaddis) with Budget Analysis"<<endl;
        cout<<"Type 4 for Prob 7 (Gaddis) with Penny For Pay"<<endl;
        cout<<"Type 5 for Prob 11 (Gaddis) with Population"<<endl;
        cout<<"Type 6 for Prob 20 (Gaddis) with Random guessing game"<<endl;
        cout<<"Type 7 for Prob 8 (Gaddis) with Math Tutor"<<endl;
        cout<<"Type 8 for Prob 6 (Gaddis) with Distance Traveled"<<endl;
        cout<<"Type 9 for Prob 12 (Savitch) with Calculating Pie"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in Problem 1"<<endl;
                prob1();        
                break;
            }
            case '2':{
                cout<<"We are in Problem 2"<<endl;
                prob2();                    
                break;
            }
            case '3':{
                cout<<"We are in Problem 3"<<endl;
                prob3();                
                break;
            }
            case '4': {
                cout<<"we are in Problem 4"<<endl;
                prob4();
                break;
            }
            case '5': {
                cout<<"We are in Problem 4"<<endl;
                prob5();
                break;
            }
            case '6': {
                cout<<"We are in Problem 5"<<endl;
                prob6();
                break;
            }
            case '7': {
                cout<<"We are in Problem 6"<<endl;
                prob7();
                break;
            }
            case '8': {
                cout<<"We are in Problem 7"<<endl;
                prob8();
                break;
            }
            case '9': {
                cout<<"We are in Problem 8"<<endl;
                prob9();
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}
//111111111111111111111111111111111111111111111111111111111111111111111111111111
//1111111111111111111111111 Problem 1 111111111111111111111111111111111111111111
void prob1() {
 /* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 17, 2017, 5:16 PM
 * Purpose: Print characters 0 - 127 of ASCII
 */
    
    //Declare Variables
    int x;
    //input values
   
    //Process by mapping inputs to outputs
    
    //output
    while (x<= 127) {
        if(x%16== 0)
            cout<<endl;
        
        cout<<static_cast<char>(x)<<"    ";
        ++x;
}
    //Exit stage right!
    
}

//222222222222222222222222222222222222222222222222222222222222222222222222222222
//222222222222222222222222 Problem 2 2222222222222222222222222222222222222222222
void prob2() {
/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 18, 2017, 3:15 PM
  Purpose:  To display the largest and smallest values inputed.
 */

    //Declare Variables
    int series;  //the inputed series of numbers
    int LrgNum, SmlNum, intgr; //Largest number, Smallest number 
    //Input values
    
    cout << "This program will determine the least and greatest numbers ";
    cout<<"inputed.\n";
    cout<<"Input the series by separating each number with the [Enter] key.\n";
    cout<<"(enter -99 to signal the end of the series)"<<endl;
    cin>>series;
    LrgNum= series; //set largest number as the first number entered
    SmlNum= series; //set smallest number as the first number entered
    
    do{  
        
        if (series > LrgNum) { //change large number to the larger input number
            LrgNum = series;
        }
        
        if (series < SmlNum) { //change small number to the smaller input number
            SmlNum = series;
        }
       // cout<<" The largest number is = "<<LrgNum<<endl;
        //cout<<"The smallest number is = "<<SmlNum<<endl;
  
         cin>>series; 
    }while (series!= -99);
         
        
  cout<<" The largest number is = "<<LrgNum<<endl;
  cout<<"The smallest number is = "<<SmlNum<<endl;
   
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
   
}
//333333333333333333333333333333333333333333333333333333333333333333333333333333
//33333333333333333333333 Problem 3 33333333333333333333333333333333333333333333
void prob3() {
/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 19, 2017, 12:15 PM
  Purpose:  To write a program that will budget for a month
 */

    //Declare Variables
    float EstBudg, //estimated budget inputed by user
          numExp,  //number of expenses
            TotExp, //the total value of expenses
            ExpsVal;  //the value of an expense
            
    
    //Input values
    cout<<"This program will tell you if your over or under your set budget.\n";
    cout<<"Enter your estimate budget for the month in dollars."<<endl;
    cin>>EstBudg;
    cout<<"How many expenses do you have?"<<endl;
    cin>>numExp;
    //Process by mapping inputs to outputs
    
    //Loop
    for (int Expns=1;Expns<=numExp;Expns++) {
        cout<<"How much is expense "<<Expns<<" = $";
        cin>>ExpsVal; //expense value
       TotExp+=ExpsVal; //adding the expenses to total expenses
        
    }
    
    if (TotExp<EstBudg) {
        cout<<"You are under you budget by = $"<<(EstBudg-TotExp)<<endl;
    }   //output the net budget saved by subtracting from Budget
    if (TotExp>EstBudg) {
        cout<<"You are over your budget by = $"<<(TotExp-EstBudg)<<endl;
    }   //output the net difference from your budget and total expenses
    else {
        cout<<"You are right on budget!"<<endl;
    }
    
    //Output values

    //Exit stage right!
   
}
//444444444444444444444444444444444444444444444444444444444444444444444444444444
//4444444444444444444444 Problem 4 444444444444444444444444444444444444444444444
void prob4() {
/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 19, 2017, 6:15 PM
  Purpose:  To double the rate of pay from one penny to a desired number of days
 * 
 */


    //Declare Variables
    float salry = .01, //representing a penny in dollars
            DaysWkd, //days worked
            totPay=0; //total pay
    
    //Input values
    cout<<"This program will calculate how much you would make over time if \n";
    cout<<"your salary was a penny the first day and doubled ever day "
            "after.\n";
    cout<<"Enter the number of days you wish work."<<endl;
    cin>>DaysWkd; //days worked
    
    //Process by mapping inputs to output
    
    //looping
    for (int days=1;days<=DaysWkd;days++,salry*=2) {
        cout<<setprecision(2)<<fixed; //show to only 2 decimal places
         totPay+=salry;  //add all the salaries to form a total
        cout<<"On day "<<days<<" you earned =$"<<salry<<endl;
        cout<<"The total =          $"<<totPay<<endl;
        cout<<endl;
    } //inaccurate due to float
    cout<<endl;
    cout<<"The overall total earned = $"<<totPay<<endl;
  
    //Output values

    //Exit stage right!
  
}
//555555555555555555555555555555555555555555555555555555555555555555555555555555
//5555555555555555555555 Problem 5 555555555555555555555555555555555555555555555
void prob5() {
 /* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 18, 2017, 1:37 AM
 * Purpose:  This program will predict the size of a population of organism.
 */
 //Global const
    const int PERCENT=100;
    //Declare all Variables Here
    unsigned int PopRate, InPop, Mult;
    float TotPop;
    
    //Input or initialize values Here
    cout<<"This program will predict the size of a population.\n";
    cout<<"Enter the starting number organism.\n";
    cin>>InPop;
    cout<<"Enter the percent increase in the population per day."<<endl;
    cin>>PopRate;
    cout<<"How many days will these organisms multiply."<<endl;
    cin>>Mult;
    
    //Process/Calculations Here
    //TotPop= InPop+ (day)*(PopRate/PERCENT);
    
    //Loop
    for (int day=1;day<=Mult; day++ ) {
        TotPop= InPop+ day*(PopRate/PERCENT);
        cout<<"On day "<<day<<" the population was = "<<TotPop<<endl;
    }
        
    //Output Located Here
   
    //Exit
    
}
//666666666666666666666666666666666666666666666666666666666666666666666666666666
//66666666666666666666666 Problem 6 66666666666666666666666666666666666666666666
void prob6() {
/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 19, 2017, 12:07 AM
 * Purpose:  Create a random number guessing game
 */

    //Declare all Variables Here
    int seed= time(0); //seed
    srand(seed); //seeded random number
    int guess; //the users guess
    int randnum= rand()%100+1;  //generates the random number
            
    //Input or initialize values Here
    cout<<"This is a game where you have to guess what random number "
            <<"the computer has generated."<<endl;
    cout<<"Enter you guess."<<endl;
    
    cin>>guess;
    do {
        if (guess> randnum) {
            cout<<"Too high, try again."<<endl;
            cin>>guess;                    
        }    
        if (guess<randnum) {
        cout<<"Too low, try again."<<endl;
        cin>>guess;
        } 
    }while (guess!= randnum);  //applies 'do' condition as long as they're wrong
    
    cout<<"Thats Right!!"<<endl;
    cout<<"The random number was = "<<randnum<<endl;
        
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    
}
//777777777777777777777777777777777777777777777777777777777777777777777777777777
//77777777777777777777777 Problem 7 77777777777777777777777777777777777777777777
void prob7() {
/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 17, 2017, 9:16 PM
 * Purpose: Create a looping menu that will allow the user to select addition, 
 *          subtraction, multiplication, or division. 
 *  */

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
    
}
//888888888888888888888888888888888888888888888888888888888888888888888888888888
//888888888888888888888888 Problem 8 8888888888888888888888888888888888888888888
void prob8() {
/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on January 17, 2017, 6:36 PM
 * Purpose: To display the distance a vehicle has traveled for each
 *          hour.
 */

    //Declare Variables
    unsigned int speed; //the speed of the vehicle in piles per hour
    float trvltim;  //travel time on the vehicle
    float distnc,  //distance traveled
            hours;  //hours to be displayed
    //input values
    cout<<"This program will calculate and display the distance traveled ";
    cout<<"each hour for a given time period."<<endl;
    cout<<"What is the speed of the vehicle in miles per hour."<<endl;
    cin>>speed;
    cout<<"How many hours has it been traveling?"<<endl;
    cin>>trvltim;
    
    //Process by mapping inputs to outputs
    
     
    //output
    
    for (hours= 1; hours<= trvltim; ++hours)  {
        distnc= speed*hours;
   cout<<"The distance traveled: "<<distnc<<" miles after "<<hours<<" hours.\n";
    }
    //Exit stage right!
    
}
//999999999999999999999999999999999999999999999999999999999999999999999999999999
//99999999999999999999999 Problem 9 99999999999999999999999999999999999999999999
void prob9() {
/* 
 * File:   main.cpp
 * Author: Daniel Landry
 * Created on Jan 19, 2016, 12:07 AM
 * Purpose:  Estimate pi by multiplying n times
 */
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
  
}

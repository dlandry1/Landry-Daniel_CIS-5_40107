/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on Feb 2, 2017, 2:10 PM
  Purpose:  Assignment 5 menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const char PERCENT = 100;

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
void calcRet(float, float); // Problem 1
float getSals(string);//problem 2
void fndTop(float, float, float, float);//Problem 2
float Fallingdistance(float);//Problem 3
float celc(float); // Problem 4
int cnToss();//Problem 5
float futVal(float,float,float);// problem 6
void JData(float&);//Problem 7
void CalcScr(float, float, float, float, float);// Prob 7
float FndLow(float, float, float, float, float);//Prob 7
float FndHigh(float, float, float, float, float);//Prob 7
float NumbEmp();// Prob 8
float MisDays(int);// Prob8
float AvgMDay(int,int);//Prob8
float nRooms();//Prob 9
float PrcPnt();//Prob9
void Charges(float, float);//Prob9


//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1 with Mark Up"<<endl;
        cout<<"Type 2 for Problem 3 with Winning Division"<<endl;
        cout<<"Type 3 for Problem 5 with Falling Distance"<<endl;
        cout<<"Type 4 for Problem 7 with Celsius Temperature Table"<<endl;
        cout<<"Type 5 for Problem 8 with Coin Toss"<<endl;
        cout<<"Type 6 for Problem 10 with Future Value"<<endl;
        cout<<"Type 7 for Problem 12 with Star Search"<<endl;
        cout<<"Type 8 for Problem 13 with Days Out"<<endl;
        cout<<"Type 9 for Problem 18 with Paint Job Estimate"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            case '4':{prob4();break;}
            case '5':{prob5();break;}
            case '6':{prob6();break;}
            case '7':{prob7();break;}
            case '8':{prob8();break;}
            case '9':{prob9();break;}
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}


//******************************************************************************
//************************** Problem 1: ****************************************
//******************************************************************************
//******************************************************************************
void prob1(){
    cout<<"Inside Problem 1 function"<<endl;
    float   WholSal,  //whole sale price
        Markprc,  //Mark up percentage
        RetVal;  //Retail value price
        
    
    //Input values
    cout<<"This program will calculate the retail cost of an item given its "
            " wholesale price and markup percentage."<<endl;
     
    cout<<"Enter this items whole sale cost in dollars."<<endl;
    cin>>WholSal;
    cout<<"Enter this items markup percentage."<<endl;
    cin>>Markprc;
    
    //Process by mapping inputs to outputs
    RetVal= WholSal + (WholSal*(Markprc/PERCENT));
   
    //Loop
    if (WholSal > 0 ||Markprc > 0) {
    calcRet(WholSal, Markprc);                 
    } else {
    cout<<"Error. This is not a positive value.\n";
    cout<<"Enter in positive whole sale value.\n"; 
    }              
     //Output values
     
    //Exit stage right!
}

//Function
//******************************************************************************
//******************** Calculate Retail Value **********************************
   
    void calcRet(float WholSal, float Markprc) 
    {
        float RetVal;  //Retail value price
        cout<<setprecision(2)<<fixed;
        RetVal= WholSal + (WholSal*(Markprc/PERCENT));
        cout<<"This items retail price is = $"<<RetVal<<endl;
               
    }
    
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void prob2(){
    cout<<"Inside Problem 2 function"<<endl;
    float SEast=0,NEast=0, NWest=0,SWest=0;
    
    
    //Input or initialize values Here
    cout<<"This program will determine which of the four company divisions \n";
    cout<<"(NorthEast, Southeast, Northwest and Southwest) had the greatest \n";
    cout<<" sales for the quarter."<<endl;
      
    //Process/Calculations Here

    //Output Located Here
    NEast = getSals("Northeast");
    SEast= getSals("Southeast");
    NWest= getSals("Northwest");
    SWest= getSals("Southwest");
   
    fndTop(NEast, SEast, NWest, SWest);

    //Exit
}
//******************************************************************************
//******************************************************************************
float getSals(string division){
    float result;
    do{
        cout<<"What is "<<division<<"'s quarterly sales figure in dollars?\n";
        cin>>result;
    }while(result<=0);
    return result; 
}
//******************************************************************************
//******************************************************************************

void fndTop(float NEast, float SEast, float NWest, float SWest){
    
    float sales = NEast;
    string division=" ";
    
    if (SEast > sales) {sales = SEast; division="Southeast";}
    if (NWest > sales) {sales = NWest; division="Northwest";}
    if (SWest > sales) {sales = SWest; division="Southwest";}
    if (NEast >= sales) {sales = NEast; division= "Northeast";}
    
    cout<<division<<" has the highest sales at $"<<sales<<endl;
    //output highest   
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void prob3(){
    cout<<"Inside Problem 3 function"<<endl;
 float d;
    //Input values
    cout<<"Input the objects falling time to calculate the distance fallen.\n";
    
    //Process by mapping inputs to outputs
    for (float t=1;t<=10;t++) {
        d=Fallingdistance(t);    
        cout<<" The distance fallen at "<<t<<" seconds is "<<d<<" meters.\n";
    }
      
    //Output values

    //Exit stage right!
}

float Fallingdistance(float t) {
    float g= 9.8, //gravity on earth
          d; //distance
    d=(.5)*g*t*t;
   return d;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void prob4(){
    cout<<"Inside Problem 4 function"<<endl;
 float C;
    
    //Input values
    cout<<"This program will convert Fahrenheit to Celsius."<<endl; 
    
    //Process by mapping inputs to outputs
    for (float tempF=0; tempF<=20; tempF++){
        C=celc(tempF);
        cout<<"Fahrenheit | Celsius "<<endl;
        cout<<tempF<<"F        "<<C<<"C"<<endl;
    }
    
    //Output values

    //Exit stage right!
}

//******************************************************************************
float celc(float tempF){
    float C;
    cout<<setprecision(1)<<fixed;
    C= (5*tempF-32)/9;
    return C;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void prob5(){
    cout<<"Inside Problem 5 function"<<endl;
    srand(time(0));
    
    //Declare all Variables Here
    int n; //number of coin tosses
    
    //Input or initialize values Here
    cout<<"This program will flip a coin"<<endl;
    cout<<"How many times should the coin be tossed"<<endl;
    cin>>n;
    
    //Process/Calculations Here
    for (int toss=1;toss<=n;toss++){
        cout<<"Toss "<<toss<<": ";
        cnToss();
    }
  
    //Output Located Here

    //Exit
}
//******************************************************************************
int cnToss(){
    int face=0; //face coin lands on
    
    face=rand()%2+1;    
if (face==1){  
    cout<<"Heads"<<endl;            
} 
if (face==2) {
        cout<<"Tails"<<endl; 
    }    
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void prob6(){
    cout<<"Inside Problem 6 function"<<endl;
    float   P, //present present value 
            i, //monthly interest rate
            F=0, //future value
            FutrVal,
            t; //number of months
  
    //Input or initialize values Here
   cout<<"This program will calculate the future value of a savings account \n";
   cout<<"giving the present value, monthly interest rate, and number of \n";
   cout<<"months the money was left in the account.\n";
   cout<<endl;
   cout<<"What is the current amount in the savings account?\n";
   cin>>P;
   cout<<"What is the monthly interest rate on the savings account?\n";
   cout<<"(as a percent)\n";
   cin>>i;
   cout<<"How many months will the money be left in the account?\n";
   cin>>t;
   
    //Process/Calculations Here
    FutrVal= futVal(P,i,t);
            
    //Output Located Here
    cout<<"The future value is = $"<<FutrVal<<endl;

    //Exit
}

float futVal(float P,float i,float t){
    float F;
    float Rate =i/100;
    cout<<setprecision(2)<<fixed; 
    F=P*(pow((1+Rate),t));
    return F;   
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void prob7(){
    cout<<"Inside Problem 7 function"<<endl;
    float score1=0, score2=0, score3=0 ,score4=0 ,score5=0;
    
    //Input values
    cout<<"This program will calculate a contestants score."<<endl;   
    cout<<endl;
    
    //Process by mapping inputs to outputs
    cout<<"Judge 1: "<<endl;
   JData(score1);  
    cout<<"Judge 2: "<<endl;
   JData(score2);  
    cout<<"Judge 3: "<<endl;
   JData(score3);  
    cout<<"Judge 4: "<<endl;
   JData(score4);  
    cout<<"Judge 5: "<<endl;
   JData(score5);  
    
    
    //Output values
   CalcScr(score1,score2,score3,score4,score5);

    //Exit stage right!
}

//******************************************************************************
//************************ Judge Data ******************************************

void JData(float &Refscor){
    do{
    cout<<"What is your score?"<<endl;
    cin>>Refscor;
    }while (Refscor<=0 || Refscor>=11);
}

//******************************************************************************
//************************** Calculate score ***********************************
void CalcScr(float score1, float score2, float score3,float score4,float score5)
{  
    cout<<setprecision(2)<<fixed;
    
    float highest= FndHigh(score1,score2,score3,score4,score5);
    float lowest= FndLow(score1,score2,score3,score4,score5);
    cout<<setprecision(2)<<fixed;
    float sum= score1+score2+score3+score4+score5-highest-lowest;
    float avg= sum/3;
    cout<<"The Judges scored as followed."<<endl;
    cout<<"Judge 1:"<<score1<<endl;
    cout<<"Judge 2:"<<score2<<endl;
    cout<<"Judge 3:"<<score3<<endl;
    cout<<"Judge 4:"<<score4<<endl;
    cout<<"Judge 5:"<<score5<<endl;
    cout<<endl;
    cout<<"lowest being :"<<lowest<<endl;
    cout<<"highest being :"<<highest<<endl;
    cout<<"The sum is ="<<sum<<endl;
    cout<<"Average value ="<<avg<<endl;
}

//******************************************************************************
//*************************** Find Lowest score ********************************
float FndLow(float score1, float score2, float score3,
        float score4, float score5)
{
    float lowest= score1;
    if (score1<lowest) {lowest=score1;}
    if (score2<lowest) {lowest=score2;}
    if (score3<lowest) {lowest=score3;}
    if (score4<lowest) {lowest=score4;}
    if (score5<lowest) {lowest=score5;}
    
    cout<<"Lowest ="<<lowest<<endl;
    return lowest;
}
//******************************************************************************
//************************Find Highest score ***********************************
float FndHigh(float score1, float score2, float score3,
        float score4, float score5)
{
    float highest=0;
    if (score1>highest) {highest= score1;}
    if (score2>highest) {highest= score2;}
    if (score3>highest) {highest= score3;}
    if (score4>highest) {highest= score4;}
    if (score5>highest) {highest= score5;}
    
    cout<<"highest ="<<highest<<endl;
    return highest;   
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void prob8(){
    cout<<"Inside Problem 8 function"<<endl;
    int nEmpl=0; //number of employees
    int MTot=0; //total missed days
    float avgMDay=0; //average missing days per employee
    
    //Input values
   cout<<"This program will calculate the average number of days a company's\n";
   cout<<"employees are absent."<<endl;
   
    nEmpl= NumbEmp(); 
    MTot= MisDays(nEmpl);
    avgMDay= AvgMDay(nEmpl,MTot);
    
    //Process by mapping inputs to outputs
    
      
    //Output values
    cout <<"The average number of missing days per employee is "
            <<avgMDay<<" days.\n";
    
    //Exit stage right!
}
//******************************************************************************
//************************ Number of Employees *********************************
float NumbEmp(){
    int nEmpl;
      do {
    cout<<"Input the number of employees in the company."<<endl;
    cout<<"(number must be greater than one)"<<endl;
   cin>>nEmpl;
   } while (nEmpl<1);
   return nEmpl;
}


//******************************************************************************
//************************* Missed Days Total **********************************
float MisDays(int nEmpl){
    int Mdays, MTot;
    do{
  cout<<"How many days has each employee missed during the past year?"<<endl;
  cin>>Mdays;
    } while (Mdays<0);
    cout<<"nEmpl ="<<nEmpl<<endl;
  MTot=Mdays;
  return MTot;
}

//******************************************************************************
//******************************************************************************
float AvgMDay(int MTot,int nEmpl){
    float avgMDay;
    cout<<"MTot ="<<MTot<<endl;
    cout<<"nEmpl ="<<nEmpl<<endl;
    
    avgMDay= static_cast<float>(MTot)/nEmpl;
    return avgMDay;   
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void prob9(){
    cout<<"Inside Problem 9 function"<<endl;
    float TSqrFt, PPaint;
    
    //Input or initialize values Here
    cout<<"This program will estimate the cost of a Paint job."<<endl;
    
    //Process/Calculations Here
    TSqrFt= nRooms();
    PPaint= PrcPnt();
    Charges(TSqrFt, PPaint);
    
    //Output Located Here
    

    //Exit
}

float nRooms(){
   float sqrfeet,
         nRooms,
         Totsqft;
   
   do{
    cout<<"How many rooms are to be painted?"<<endl;
    cout<<"(value must be at least one)"<<endl;
    cin>>nRooms;
   } while(nRooms<1);
   
    for (int i= 1;i<=nRooms;i++) {
       do{
           cout<<"How many square feet room "<<i<<"?"<<endl;
           cout<<"(can not be a negative value)"<<endl;
        cin>>sqrfeet;
       }while (sqrfeet<0);
       
        Totsqft+=sqrfeet;
        cout<<"total square feet ="<<Totsqft<<endl;
    }
    cout<<"total square feet ="<<Totsqft<<endl;
    return Totsqft;
}
//******************************************************************************
//******************************************************************************

float PrcPnt(){
    float PPaint;
    do{
    cout<<"What is the price per gallon of paint?"<<endl;
    cout<<"(must be $10 or more)"<<endl;
    cin>>PPaint;
    } while(PPaint>=10);
    return PPaint;
}
//******************************************************************************
//******************************************************************************

void Charges(float TSqrFt,float PrcPnt){
    float galn= 110;
    float Totgal;
    float HrsLabr;
    float LCharg;
    float Total;
    
    Totgal= TSqrFt/galn;
    HrsLabr= Totgal*8;
    LCharg= HrsLabr*25.00f;
    
    Total= LCharg+PrcPnt;
    cout<<setprecision(2)<<fixed;
    cout<<"The number of gallons of paint required = "<<Totgal<<" gals."<<endl;
    cout<<"The hours of labor required = "<<HrsLabr<<" hours."<<endl;
    cout<<"The cost of paint will  be = $"<<PrcPnt<<endl;
    cout<<"The labor charge = $"<<LCharg<<endl;
    cout<<"Total cost = $"<<Total<<endl;    
}
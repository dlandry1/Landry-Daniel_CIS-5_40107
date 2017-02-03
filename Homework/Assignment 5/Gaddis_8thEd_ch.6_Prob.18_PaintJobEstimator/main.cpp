/* 
 * File:   main.cpp
 * Author: Daniel landry
 * Created on Feb 2, 2017, 10:07 AM
 * Purpose:  Estimate the price for a paint job
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float nRooms(); //number of rooms and sqr feet of the wall
float PrcPnt(); //price of paint
void Charges(float, float); //the total charges are calculate

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float TSqrFt, PPaint; //sqr ft and the price of paint
    
    //Input or initialize values Here
    cout<<"This program will estimate the cost of a Paint job."<<endl;
    
    //Process/Calculations Here
    TSqrFt= nRooms(); //square footage of each room
    PPaint= PrcPnt(); //price of paint
    Charges(TSqrFt, PPaint); //calculate the charge
    //Output Located Here
    

    //Exit
    return 0;
}

float nRooms(){
   float sqrfeet,
         nRooms,
         Totsqft;
   
   do{
    cout<<"How many rooms are to be painted?"<<endl;
    cout<<"(value must be at least one)"<<endl;
    cin>>nRooms; //number of rooms
   } while(nRooms<1);
   
    for (int i= 1;i<=nRooms;i++) { //square ft per room
       do{
           cout<<"How many square feet room "<<i<<"?"<<endl;
           cout<<"(can not be a negative value)"<<endl;
        cin>>sqrfeet; //square feet of a room
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
    do{ //input control
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
    float Totgal; //total paint required
    float HrsLabr; //hours of labor
    float LCharg;  //labor cost
    float Total;  //total of all
     
    Totgal= TSqrFt/galn;
    HrsLabr= Totgal*8;
    LCharg= HrsLabr*25.00f;
     
    Total= LCharg+PrcPnt;  //total of paint and labor
    cout<<setprecision(2)<<fixed;
    cout<<"The number of gallons of paint required = "<<Totgal<<" gals."<<endl;
    cout<<"The hours of labor required = "<<HrsLabr<<" hours."<<endl;
    cout<<"The cost of paint will  be = $"<<PrcPnt<<endl;
    cout<<"The labor charge = $"<<LCharg<<endl;
    cout<<"Total cost = $"<<Total<<endl;
 
}
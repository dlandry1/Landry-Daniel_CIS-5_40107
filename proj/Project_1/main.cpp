/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 28, 2017, 8:15 AM
  Purpose:  High or Low gambling
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Variables
   (srand(time(0)));
   float cardVal, crdVal2;
   string start, face1, face2; 
   int card1;
   int card2;
   char HorL;
   int wins=1;
   float pot=2;
   float PlrAmt= 50;
   
   //Big loop
  
   cout<<"\t\tThis is the game of High or Low\n\n"<<endl;
   cout<<"Guess if the next card is Higher or Lower than the card shown."<<endl;
   cout<<"If you guess correct you double the value of the pot."<<endl;
   cout<<"If you guess incorrect, you loose it all.\n";
   cout<<"After a win you can choose to cash out, or stay and risk it all.\n";
   cout<<"You start with $50.00."<<endl;
   cout<<"Are you ready?"<<endl;
   cout<<"Press [Enter] to begin"<<endl;
   getline(cin,start);
   do{
   for(int count=1; count<=1.0e12 ;count++) {
       cout<<endl;
   
   card1=rand()%13+1;
   card2=rand()%13+1;
   
   //Generates card 1 **********************************************************
   if (card1>=9){
      cardVal=10;
       switch(card1) {
           case 9: {
               face1="Ace";}
           break;
           case 10: {face1="King";}
           break;
           case 11: {face1="Queen";
           }
           break;
           case 12: {face1= "Jack";
           }
           break;
           case 13: {face1="Ten";
          }
           break;
           default: face1= ' ';
           cout<<"ERROR\n";
       }    
    }
   else if (card1==8) {
       cardVal=9;
       face1= "Nine";
   }
   else if (card1==7) {
       cardVal=8;
       face1="Eight";
   }
   else if (card1==6) {
       cardVal=7;
       face1="Seven";
   }
   else if (card1==5){
       cardVal=6;
       face1="Six";
   }
   else if (card1==4){
       cardVal=5;
       face1="Five";
   }
   else if (card1==3){
       cardVal=4;
       face1="Four";
   }
   else if(card1==2){
       cardVal=3;
       face1="Three";
   }
   else {
       cardVal=2;
       face1="Two";
   }
//******************************************************************************
   //High or Low?
   cout<<"Dealers card: "<<face1<<" with the value of "<<cardVal<<endl;
   cout<<setprecision(2)<<fixed<<endl;
   cout<<endl;   
   cout<<"Pot= $"<<pot<<endl;
   cout<<endl;
   cout<<"Player's earnings =$"<<PlrAmt<<endl;
   cout<<endl;
  cout<<"Guess if the next card is higher or lower than the Dealers.\n";
  cout<<"(type in 'h' for high or 'l' for low)"<<endl;
  cin>>HorL;
  
  //Generate card 2 ************************************************************
  
   if (card2>=9){
      crdVal2=10;
       switch(card2) {
           case 9: {
               face2="Ace";}
           break;
           case 10: {face2="King";}
           break;
           case 11: {face2="Queen";
           }
           break;
           case 12: {face2= "Jack";
           }
           break;
           case 13: {face2="Ten";
          }
           break;
           default: face2= ' ';
           cout<<"ERROR\n";
       }    
    }
   else if (card2==8) {
       crdVal2=9;
       face2= "Nine";
   }
   else if (card2==7) {
       crdVal2=8;
       face2="Eight";
   }
   else if (card2==6) {
       crdVal2=7;
       face2="Seven";
   }
   else if (card2==5){
       crdVal2=6;
       face2="Six";
   }
   else if (card2==4){
       crdVal2=5;
       face2="Five";
   }
   else if (card2==3){
       crdVal2=4;
       face2="Four";
   }
   else if(card2==2){
       crdVal2=3;
       face2="Three";
   }
   else {
       crdVal2=2;
       face2="Two";
   }
  cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
//******************************************************************************  
  cout<<endl;
 cout<<"**********************************************************************";
 cout<<"******"<<endl;
  cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
  if (HorL=='h') {
      if (cardVal<crdVal2){
          cout<<"You win!"<<endl;
          wins++;
          pot+= pow(pot,2);
          cout<<"Game: "<<count<<endl;
      }
      else if (cardVal>crdVal2){
          cout<<"You lose!"<<endl;
          PlrAmt=PlrAmt-2;
      }
      else {
          cout<<"the pot is quadrupled!!\n"<<endl;
          pot+=pow(pot,4);
          cout<<"pot = "<<pot<<endl;
      }
  }
  if (HorL=='l') {
      if (cardVal>crdVal2){
          cout<<"You win."<<endl;
          pot+=pow(pot,2);
          cout<<"The Pot is now =$"<<pot<<endl;
      }
      else if (cardVal<crdVal2){
          cout<<"You lose."<<endl;
          PlrAmt=PlrAmt-2;
      }
      else {
          cout<<"The pot is quadrupled!!\n"<<endl;
          pot+=pow(pot,4);
          cout<<"pot = "<<pot<<endl;
      }      
  }    
  } 
   }while(PlrAmt!=0);
    
   return 0;
}
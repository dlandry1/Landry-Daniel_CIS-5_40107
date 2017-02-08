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
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
string FacVal1(unsigned short);
string FacVal2(unsigned short);
int winMenu(float &,int &);
int checkM(char);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Variables
   (srand(time(0)));
   float crdVal1, crdVal2;
   string start, face1, //start, face1=face of dealer card, 
           face2; // face2= face of player card 
   unsigned short card1; //the Dealer card corresponding to card/face value
   unsigned short card2; //Random card that corresponds with a face/card value
   char HorL; //higher or lower 
   unsigned short games=1; //place holder for games
   int pot=2; //pot value displayed
   bool safe =true;
   float PlrAmt; //starting value for player
   unsigned short choice; //switch choice
   int a=1; //counter for games
   
   ofstream outFile;
   ifstream inFile;
   inFile.open("Earnings.dat"); //open Earnings.dat file
   outFile.open("Check.dat");  //open 
   
  //program start
   cout<<"\t\tThis is the game of High or Low\n\n"<<endl; //Heading and intro
   
     
   cout<<"Guess if the next card is Higher or Lower than the card shown."<<endl;
   cout<<"If you guess correct, you double the value of the pot."<<endl;
   cout<<"If you guess incorrect, you loose the pot value from your ";
   cout<<"earnings.\n";
   cout<<"After a win you can choose to cash out, add the winnings to your";
   cout<<"earnings or double down to risk it all.\n\n";
   cout<<"The max value of a card is 14, and the lowest is 2."<<endl;
   cout<<"You start with $50.00."<<endl;
   cout<<"If you'd like to start at a predetermined balance, ";
   cout<<"type the integer value into the file ";
   cout<<"'Earnings' in this games folder\n";
       
   cout<<endl;
   cout<<"Are you ready?"<<endl;
   
   cout<<"Press [Enter] to begin"<<endl; //press enter to start
   getline(cin,start);
    
    do{                //start of do while loop
    cout<<endl;
    
   crdVal1 =rand()%13+2;  //randomly generate card 1
   crdVal2 =rand()%13+2;  //randomly generate card 2
   
//Generates card 1 *************************************************************
face1 = FacVal1(crdVal1);
   
//******************************************************************************
   //High or Low?
   cout<<"******************************************************************\n";
   for (int count=a; count<=games;count++) {
          cout<<"Game: "<<count<<endl; //keep count of games
          }
            games++;//increase games
            a++;   //increase count
            
            
games>10?cout<<"You've played over ten games!!"<<endl:cout<< 
        "Reach over 10 games!"<<endl;  //Reach over ten games  

   cout<<"Dealers card: "<<face1<<" with the value of "<<crdVal1<<endl;
   cout<<setprecision(100000);  //set precision
        
        
  inFile>>PlrAmt;
  cout<<"Pot= $"<<pot<<endl; //display pot value
  cout<<endl;
  cout<<"Player's earnings =$"<<static_cast<float>(PlrAmt)<<endl;  
  cout<<endl;  //display player earnings as float
  cout<<"Guess if the next card is higher or lower than the Dealers.\n";
  cout<<"(type in 'h' for high or 'l' for low)"<<endl;
  cin>>HorL;  //decide high or low
  
  
  //Generate card 2 ************************************************************
   //generate second random number with same values as specified for card 1
  face2= FacVal2(crdVal2);
   
//******************************************************************************  
  cout<<endl;
  if (HorL=='h') {
      
cout<<"*********************************************************************\n";
        cout<<"Dealer Draw: "<<face1<<" with the value of "<<crdVal1<<endl;
        cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
        cout<<endl;        
cout<<"*********************************************************************\n"; 
      if (crdVal1<crdVal2){
          winMenu(PlrAmt,pot);              
      }
      else if (crdVal1>crdVal2){ //lose guess=high, card=low
          cout<<"You lose!"<<endl;
          PlrAmt=PlrAmt-pot;
          pot=2;
      }
      else {
          cout<<"You tied! A tie still counts as a win"<<endl;
          winMenu(PlrAmt, pot);
      }
  }
else if (HorL=='l') {
cout<<"*********************************************************************\n";
        cout<<"Dealer Draw: "<<face1<<" with the value of "<<crdVal1<<endl;
        cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
        cout<<endl;
cout<<"*********************************************************************\n";
      if (crdVal1>crdVal2){ 
          winMenu(PlrAmt, pot);
      }
      else if (crdVal1<crdVal2){ //lose if guess low, card high
          cout<<"You lose."<<endl;
          PlrAmt=PlrAmt-pot;
          pot=2;
      }
      else {
          cout<<"You tied! A tie still counts as a win"<<endl;
          winMenu(PlrAmt, pot);
      }      
  } else {
    cout<<"Invalid entry."<<endl;
    cout<<"Enter either h or l"<<endl;
    games--;
  }

}while(PlrAmt>=0); 
  //game over if player amount get to zero

   cout<<"Your out of money!!"<<endl;
   cout<<"GAME OVER"<<endl;    
   inFile.close();
   outFile.close(); 
   return 0;
}


//******************************************************************************
//******************************************************************************
string FacVal1(unsigned short crdVal1 ){
    string face1;
    if (crdVal1>9){
       switch(crdVal1) {
           case 14: {  //9= ace, value=14
               face1="Ace";
}
           break;
           case 13: {face1="King"; //10= King, value=13
 }
           break;
           case 12: {face1="Queen"; //11= Queen, value=12
           }
           break;
           case 11: {face1= "Jack"; //10= jack, value=11
           }
           break;
           case 10: {face1="Ten"; //13= ten, value 10
          }
           break;
           default: face1= ' ';
           cout<<" ";
       }    
    }
   else if (crdVal1==9) { //, value 9
       face1= "Nine";
   }
   else if (crdVal1==8) { //8 value= 8
       face1="Eight";
   }
   else if (crdVal1==7) { // value=7
       face1="Seven";
   }
   else if (crdVal1==6){//  = value 6      
       face1="Six";
   }
   else if (crdVal1==5){ //value= 5      
       face1="Five";
   }
   else if (crdVal1==4){ // val4
       face1="Four";
   }
   else if(crdVal1==3){ //val=3
       face1="Three";
   }
   else {
       crdVal1=2;
       face1="Two";
   }
    return face1;
}

//******************************************************************************
//******************************************************************************
string FacVal2(unsigned short crdVal2 ){
    string face2;
    if (crdVal2>9){
       switch(crdVal2) {
           case 14: {  //9= ace, value=14
               face2="Ace";
}
           break;
           case 13: {face2="King"; //10= King, value=13
 }
           break;
           case 12: {face2="Queen"; //11= Queen, value=12
           }
           break;
           case 11: {face2= "Jack"; //10= jack, value=11
           }
           break;
           case 10: {face2="Ten"; //13= ten, value 10
          }
           break;
           default: face2= ' ';
           cout<<" ";
       }    
    }
   else if (crdVal2==9) { // value 9
       face2= "Nine";
   }
   else if (crdVal2==8) { // value= 8
       face2="Eight";
   }
   else if (crdVal2==7) { // value=7
       face2="Seven";
   }
   else if (crdVal2==6){//  = value 6      
       face2="Six";
   }
   else if (crdVal2==5){ // value= 5      
       face2="Five";
   }
   else if (crdVal2==4){ // val4
       face2="Four";
   }
   else if(crdVal2==3){ // val=3
       face2="Three";
   }
   else {
       crdVal2= 2;
       face2="Two";
   }
    return face2;
}

//******************************************************************************
//******************************************************************************
int winMenu(float &PlrAmt,int &pot){
    unsigned int choice;
    ofstream outFile;
    
    cout<<"You win!"<<endl; //win if guess high, car high
         //double, save or cash out
        cout<<"What would you like to do next?(type 1,2,or 3)"<<endl;
        cout<<"1. Double up (you lose pot value from your earnings)"<<endl;
        cout<<"2. Save it (add the amount to your earnings)"<<endl;
        cout<<"3. Cash out (cash out the printable check)"<<endl;
        cin>>choice;
     
        switch (choice) {
           
            case 1: {
                pot+= pow(pot,2);
                cout<<"The pot is now =$"<<pot<<endl;         
            }
            break;
            case 2: {
                PlrAmt+=pot;
                cout<<"Your earnings are =$"<<PlrAmt<<endl;
                pot=2;    
            }
            break;
            case 3: {
                cout<<"A check has been put in the check file in this programs";
                        cout<<" folder"<<endl;
                outFile<<PlrAmt<<endl;
                return 0;
            }
            default:
                cout<<""<<endl;
        }
        
}

//******************************************************************************
//******************************************************************************

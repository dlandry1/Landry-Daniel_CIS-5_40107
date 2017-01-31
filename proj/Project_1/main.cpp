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

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Variables
   (srand(time(0)));
   float cardVal, crdVal2;
   string start, face1, //start, face1=face of dealer card, 
           face2; // face2= face of player card 
   unsigned short card1; //the Dealer card corresponding to card/face value
   unsigned short card2; //Random card that corresponds with a face/card value
   char HorL; //higher or lower 
   unsigned short games=1; //place holder for games
   int pot=2; //pot value displayed
   bool safe=true;
   float PlrAmt; //starting value for player
   unsigned short choice; //switch choice
   int a=1; //counter for games
   
   ofstream outFile;
   ifstream inFile;
   inFile.open("Earnings.dat"); //open pot.dat file
   outFile.open("Check.dat");  //open 
   
  //program start
   cout<<"\t\tThis is the game of High or Low\n\n"<<endl; //Heading and intro
   
     
   cout<<"Guess if the next card is Higher or Lower than the card shown."<<endl;
   cout<<"If you guess correct, you double the value of the pot."<<endl;
   cout<<"If you guess incorrect, you loose the pot value from your ";
   cout<<"earnings.\n";
   cout<<"After a win you can choose to cash out, add the winnings to your";
   cout<<"earnings or double down to risk it all.\n\n";
   cout<<"The max value of a card is 13, and the lowest is 2."<<endl;
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
   card1=rand()%14+1;  //randomly generate card 1
   card2=rand()%14+1;  //randomly generate card 2
   
   //Generates card 1 **********************************************************
   if (card1>=9){
       switch(card1) {
           case 9: {  //9= ace, value=14
               face1="Ace";
           cardVal=14;}
           break;
           case 10: {face1="King"; //10= King, value=13
           cardVal=13;}
           break;
           case 11: {face1="Queen"; //11= Queen, value=12
           cardVal=12;
           }
           break;
           case 12: {face1= "Jack"; //10= jack, value=11
           cardVal=11;
           }
           break;
           case 13: {face1="Ten"; //13= ten, value 10
           cardVal=10;
          }
           break;
           default: face1= ' ';
           cout<<"ERROR\n";
       }    
    }
   else if (card1==8) { //9, value 9
       cardVal=9;
       face1= "Nine";
   }
   else if (card1==7) { //7 value= 8
       cardVal=8;
       face1="Eight";
   }
   else if (card1==6) { //6, value=7
       cardVal=7;
       face1="Seven";
   }
   else if (card1==5){// 5 = value 6
       cardVal=6;
       face1="Six";
   }
   else if (card1==4){ //4 value= 5
       cardVal=5;
       face1="Five";
   }
   else if (card1==3){ //3 val4
       cardVal=4;
       face1="Four";
   }
   else if(card1==2){ //2 val=3
       cardVal=3;
       face1="Three";
   }
   else {
       cardVal=2;  //1 val=2
       face1="Two";
   }
//******************************************************************************
   //High or Low?
   cout<<"******************************************************************\n";
   cout<<"Dealers card: "<<face1<<" with the value of "<<cardVal<<endl;
   cout<<setprecision(100000000);  //set precision
   
   for (int count=a; count<=games;count++) {
          cout<<"Game: "<<count<<endl; //keep count of games
          }
            games++;//increase games
            a++;   //increase count
games>10?cout<<"You've played over ten games!!"<<endl:cout<< 
        "Reach over 10 games!"<<endl;  //Reach over ten games
        
        
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
   if (card2>=9){
     
       switch(card2) {
           case 9: {
               face2="Ace";
           crdVal2=14;}
           break;
           case 10: {face2="King";
           crdVal2=14;}
           break;
           case 11: {face2="Queen";
           crdVal2=12;
           }
           break;
           case 12: {face2= "Jack";
           crdVal2=11;
           }
           break;
           case 13: {face2="Ten";
           crdVal2=10;
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
  
//******************************************************************************  
  cout<<endl;
    
  if (HorL=='h') {
 cout<<"**********************************************************************";
        cout<<"******"<<endl;
        cout<<"Dealer Draw: "<<face1<<" with the value of "<<cardVal<<endl;
        cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
        cout<<endl;
      if (cardVal<crdVal2){
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
      else if (cardVal>crdVal2){ //lose guess=high, card=low
          cout<<"You lose!"<<endl;
          PlrAmt=PlrAmt-pot;
          pot=2;
      }
      else {         
          cout<<"You win!"<<endl; //win and quadruple pot if same card value
          cout<<"You got the same card as the dealer."<<endl;
          cout<<"The pot is quadrupled!!\n"<<endl;
        cout<<"What would you like to do next?(type 1,2,or 3)"<<endl;
        cout<<"1. Double up (at the risk of losing more money)"<<endl;
        cout<<"2. Save it (add the amount to your earnings)"<<endl;
        cout<<"3. Cash out (cash out the printable check)"<<endl;
        cin>>choice;
       
        switch (choice) {
            //double, save or cash out
            case 1: {
                pot+= pow(pot,4);
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
  }
else if (HorL=='l') {
 cout<<"**********************************************************************";
        cout<<"******"<<endl;
        cout<<"Dealer Draw: "<<face1<<" with the value of "<<cardVal<<endl;
        cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
        cout<<endl;
      if (cardVal>crdVal2){ 
          cout<<"You win!"<<endl;
          //win if guess low, card=low
          // double, save, or cash out
        cout<<"What would you like to do next?(type 1,2,or 3)"<<endl;
        cout<<"1. Double up (at the risk of losing more money)"<<endl;
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
            break;
            default:
                cout<<""<<endl;
            
        }
      }
      else if (cardVal<crdVal2){ //lose if guess low, card high
          cout<<"You lose."<<endl;
          PlrAmt=PlrAmt-pot;
          pot=2;
      }
      else {
           cout<<"You win!"<<endl; //win, card the same value as dealer
         
          cout<<endl;
          cout<<"You got the same card as the dealer."<<endl;
          cout<<"The pot is quadrupled!!\n"<<endl;
        cout<<"What would you like to do next?(type 1,2,or 3)"<<endl;
        cout<<"1. Double up (at the risk of losing more money)"<<endl;
        cout<<"2. Save it (add the amount to your earnings)"<<endl;
        cout<<"3. Cash out (cash out the printable check)"<<endl;
        cin>>choice;
      // double, save, cash out
        switch (choice) {              
            case 1: {
                pot+= pow(pot,4);
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
  }
else {
    safe=true;
     { //if not 'h or l' Retry
      cout<<"You've entered an incorrect value."<<endl;
      cout<<"Retry!"<<endl;
      safe=false;
     }while (safe);
}
  }while(PlrAmt>=0); 
  //game over if player amount get to zero

   cout<<"Your out of money!!"<<endl;
   cout<<"GAME OVER"<<endl;    
   inFile.close();
   outFile.close(); 
   return 0;
}
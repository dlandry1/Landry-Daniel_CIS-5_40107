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
   char HorL;
   unsigned short games=1; //place holder for games
   float pot=2;
   float PlrAmt= 50;
   unsigned short choice;
   int a=1; //counter for games
   ofstream outFile;
   ifstream inFile;
   inFile.open("Earnings.dat");
   outFile.open("Check.dat"); 
   
  //program start
   cout<<"\t\tThis is the game of High or Low\n\n"<<endl;
   cout<<"Guess if the next card is Higher or Lower than the card shown."<<endl;
   cout<<"If you guess correct, you double the value of the pot."<<endl;
   cout<<"If you guess incorrect, you loose the pot value from your ";
   cout<<"earnings.\n";
   cout<<"After a win you can choose to cash out, add the winnings to your";
   cout<<"earnings or double down to risk it all.\n\n";
   cout<<"The max value of a card is 10, and the lowest is 2."<<endl;
   cout<<"You start with $50.00."<<endl;
   cout<<"If you'd like to start at a predetermined balance, ";
   cout<<"type the integer value into the file ";
   cout<<"'Earnings' in this games folder\n";
   cout<<endl;
   cout<<"Are you ready?"<<endl;
   cout<<"Press [Enter] to begin"<<endl;
   getline(cin,start);
   
        do{
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
   cout<<"******************************************************************\n";
   cout<<"Dealers card: "<<face1<<" with the value of "<<cardVal<<endl;
  // cout<<setprecision(100000000);
   
   for (int count=a; count<=games;count++) {
          cout<<"Game: "<<count<<endl;
          }
            games++;
            a++;  
   cout<<"Pot= $"<<inFile<<endl;
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
  
//******************************************************************************  
  cout<<endl;
 cout<<"**********************************************************************";
 cout<<"******"<<endl;
cout<<"Dealer Draw: "<<face1<<" with the value of "<<cardVal<<endl;
cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
cout<<endl;

    
  if (HorL=='h') {
 cout<<"**********************************************************************";
        cout<<"******"<<endl;
        cout<<"Dealer Draw: "<<face1<<" with the value of "<<cardVal<<endl;
        cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
        cout<<endl;
      if (cardVal<crdVal2){
          cout<<"You win!"<<endl;
         
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
            }
            default:
                cout<<""<<endl;
        }
         
      }
      else if (cardVal>crdVal2){
          cout<<"You lose!"<<endl;
          PlrAmt=PlrAmt-pot;
          pot=2;
      }
      else {         
          cout<<"You win!"<<endl;
          cout<<"You got the same card as the dealer."<<endl;
          cout<<"The pot is quadrupled!!\n"<<endl;
        cout<<"What would you like to do next?(type 1,2,or 3)"<<endl;
        cout<<"1. Double up (at the risk of losing more money)"<<endl;
        cout<<"2. Save it (add the amount to your earnings)"<<endl;
        cout<<"3. Cash out (cash out the printable check)"<<endl;
        cin>>choice;
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
            }
            default:
                cout<<""<<endl;
            
        }
      }
  }
  if (HorL=='l') {
 cout<<"**********************************************************************";
        cout<<"******"<<endl;
        cout<<"Dealer Draw: "<<face1<<" with the value of "<<cardVal<<endl;
        cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
        cout<<endl;
      if (cardVal>crdVal2){
          cout<<"You win!"<<endl;
          
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
            }
            break;
            default:
                cout<<""<<endl;
            
        }
      }
      else if (cardVal<crdVal2){
          cout<<"You lose."<<endl;
          PlrAmt=PlrAmt-pot;
          pot=2;
      }
      else {
           cout<<"You win!"<<endl;
         
          cout<<endl;
          cout<<"You got the same card as the dealer."<<endl;
          cout<<"The pot is quadrupled!!\n"<<endl;
        cout<<"What would you like to do next?(type 1,2,or 3)"<<endl;
        cout<<"1. Double up (at the risk of losing more money)"<<endl;
        cout<<"2. Save it (add the amount to your earnings)"<<endl;
        cout<<"3. Cash out (cash out the printable check)"<<endl;
        cin>>choice;
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
            }
            default:
                cout<<""<<endl;
        }
      }      
  }

  }while(PlrAmt>=0); 
  

   cout<<"Your out of money!!"<<endl;
   cout<<"GAME OVER"<<endl;    
   inFile.close();
   outFile.close(); 
   return 0;
}
/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on January 28, 2017, 8:15 AM
  Purpose:  Poker
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Random card generator
    srand(time(0));
    
    //Declare Variables
    int card;
    int hand;
    string start;
    int cardVal=0;
    int SumVal=0;
    int check;
    
    cout<<"Card value = "<<card<<endl;
    
    //loop for card value
       
    //Input values
    cout<<"\t\tYou are about to play BlackJack.\n\n"<<endl;
    cout<<"The objective is to get enough cards to equal 21.";
    cout<<"However, that is not the only way to win.\n";
    cout<<"If you have a higher card value than the dealer you also win.\n";
    cout<<"Press [Enter] to start."<<endl;
    getline(cin,start);
    //cin.ignore();
    cout<<endl;
    
    cout<<"start\n";
    cout<<"Your Hand is :\n";
    for (int card=1;card<=2;card++) { //generates starting hand of 2 cards
    hand= rand()%52+1;
    
    if (hand>=49) { //Ace
        cardVal=11;
         switch (hand){
            case 52:{                
                cout<<"Ace of Clubs(Blk)"<<endl;
                break;
            }
            case 51: {
                cout<<"Ace of Diamonds(Red)"<<endl;
                break;
            }
            case 50: {
                cout<<"Ace of Hearts (Red)"<<endl;
                break;
            }
            case 49: {
                cout<<"Ace of Spades(Blk)"<<endl;
                break;
            }
        }        
    }
    else if (hand<=48 && hand>44) { //King
        cardVal=10;
        switch (hand){
            case 48:{
                cout<<"King of Clubs(Blk)"<<endl;
                break;
            }
            case 47: {
                cout<<"King of Diamonds(Red)"<<endl;
                break;
            }
            case 46: {
                cout<<"King of Hearts (Red)"<<endl;
                break;
            }
            case 45: {
                cout<<"King of Spades(Blk)"<<endl;
                break;
            }
        }
    }
    else if (hand<= 44 && hand>40) { //Queen
        cardVal=10;
        switch (hand){
            case 44:{
                cout<<"Queen of Clubs(Blk)"<<endl;
                break;
            }
            case 43: {
                cout<<"Queen of Diamonds(Red)"<<endl;
                break;
            }
            case 42: {
                cout<<"Queen of Hearts (Red)"<<endl;
                break;
            }
            case 41: {
                cout<<"Queen of Spades(Blk)"<<endl; 
                break;
            }
        }      
    }
     else if (hand<= 40 && hand>36) {  //Jack
         cardVal=10;
         switch (hand){
            case 40:{
                cout<<"Jack of Clubs(Blk)"<<endl;
                break;
            }
            case 39: {
                cout<<"Jack of Diamonds(Red)"<<endl;
                break;
            }
            case 38: {
                cout<<"Jack of Hearts (Red)"<<endl;
                break;
            }
            case 37: {
                cout<<"Jack of Spades(Blk)"<<endl;            
                break;
            }
        }
              
    }
     else if (hand<= 36 & hand>32) {  //10
         cardVal=10;
         switch (hand){
            case 36:{
                cout<<"Ten of Clubs(Blk)"<<endl;
                break;
            }
            case 35: {
                cout<<"Ten of Diamonds(Red)"<<endl;
                break;
            }
            case 34: {
                cout<<"Ten of Hearts (Red)"<<endl;
                break;
            }
            case 33: {
                cout<<"Ten of Spades(Blk)"<<endl;
                break;
            }
        }
      
    }
     else if (hand<= 32 & hand>28) { //9
         cardVal=9;
    switch (hand){
            case 32:{
                cout<<"Nine of Clubs(Blk)"<<endl;
                break;
            }
            case 31: {
                cout<<"Nine of Diamonds(Red)"<<endl;
                break;                
            }
            case 30: {
                cout<<"Nine of Hearts (Red)"<<endl;
                break;
            }
            case 29: {
                cout<<"Nine of Spades(Blk)"<<endl;
                break;
            }
        }
           
    }
     else if (hand<= 28 & hand>24) { //8
         cardVal=8;
         switch (hand){
            case 28:{
                cout<<"Eight of Clubs(Blk)"<<endl;
                break;
            }
            case 27: {
                cout<<"Eight of Diamonds(Red)"<<endl;
                break;                
            }
            case 26: {
                cout<<"Eight of Hearts (Red)"<<endl;
                break;
            }
            case 25: {
                cout<<"Eight of Spades(Blk)"<<endl;
                break;
            }
        }
      
    }
     else if (hand<= 24 & hand>20) { //7
         cardVal=7;
         switch (hand){
            case 24:{
                cout<<"Seven of Clubs(Blk)"<<endl;
                break;
            }
            case 23: {
                cout<<"Seven of Diamonds(Red)"<<endl;
                break;
            }
            case 22: {
                cout<<"Seven of Hearts (Red)"<<endl;
                break;
            }
            case 21: {
                cout<<"Seven of Spades(Blk)"<<endl;   
                     break; 
            }
        }
         
    }
     else if (hand<= 20 & hand>16) { //6
         cardVal=6;
          switch (hand){
            case 20:{
                cout<<"Seven of Clubs(Blk)"<<endl;
                break;
            }
            case 19: {
                cout<<"Seven of Diamonds(Red)"<<endl;
                    break;                
            }
            case 18: {
                cout<<"Seven of Hearts (Red)"<<endl;
                    break;
            }
            case 17: {
                cout<<"Seven of Spades(Blk)"<<endl;
                    break;
            }
        }
        
    }
     else if (hand<= 16 & hand>12) {  //5
         cardVal=5;
         switch (hand){
            case 16:{
                cout<<"Five of Clubs(Blk)"<<endl;
                break;
            }
            case 15: {
                cout<<"Five of Diamonds(Red)"<<endl;
                    break;                
            }
            case 14: {
                cout<<"Five of Hearts (Red)"<<endl;
                break;
            }
            case 13: {
                cout<<"Five of Spades(Blk)"<<endl;
                
                break;
            }
        }       
    }
     else if (hand<= 12 & hand>8) {  //4
         cardVal=4;
         switch (hand){
            case 12:{
                cout<<"Four of Clubs(Blk)"<<endl;
                break;
            }
            case 11: {
                cout<<"Four of Diamonds(Red)"<<endl;
                    break;                
            }
            case 10: {
                cout<<"Four of Hearts (Red)"<<endl;
                break; 
            }
            case 9: {
                cout<<"Four of Spades(Blk)"<<endl;  
                break;
            }
        }
        
    }
     else if (hand<= 8 & hand>4) {  //3
         cardVal=3;
         switch (hand){
            case 8:{
                cout<<"Three of Clubs(Blk)"<<endl;
                break;
            }
            case 7: {
                cout<<"Three of Diamonds(Red)"<<endl;  
                break;
            }
            case 6: {
                cout<<"Three of Hearts (Red)"<<endl;
                break;
            }
            case 5: {
                cout<<"Three of Spades(Blk)"<<endl;  
                break;
            }
        }
        
        
    }
     else if (hand<= 4) {  //2
         cardVal=2;
         switch (hand){
            case 4:{
                cout<<"Two of Clubs(Blk)"<<endl;
                break;
            }
            case 3: {
                cout<<"Two of Diamonds(Red)"<<endl;
                break;                
            }
            case 2: {
                cout<<"Two of Hearts (Red)"<<endl;
                break;
            }
            case 1: {
                cout<<"Two of Spades(Blk)"<<endl;
                break;
            }
        }
              
    }
    else {
            cout<<"ERROR."<<endl;
    }
    cout<<hand<<endl;
    cout<<cardVal<<endl;
    SumVal+=cardVal;
    check= cardVal;
  
    cout<<"check ="<<check<<endl;
    
}
     cout<<"out of loop card sum: "<<SumVal<<endl; //some of the Hand
     if (SumVal=21) {
         cout<<"YOU WIN."<<endl;
         return 0;
     }
 
     
     
     
     
     
    //Process by mapping inputs to outputs
    
      
    //Output values

    //Exit stage right!
   return 0;
}
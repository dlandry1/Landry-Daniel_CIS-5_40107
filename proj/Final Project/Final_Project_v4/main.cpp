/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on February 8, 2017, 8:15 AM
  Purpose:  High or Low gambling
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes
string FacVal1(unsigned short = 10);
string FacVal2(unsigned short = 10);
float winMenu(float&,float&);
void Stats(float[],float[], int);
void Stats(int,string[], int, float[][5],vector<unsigned int>);
int linSrch(vector<unsigned int>,int ,int, float[], float []);
 
//Executable code begins here!!!
int main(int argc, char** argv) {
    //Variables
   (srand(time(0)));
   const int SIZE= 50;
   float nMoney[SIZE]={};
   float crdVal1, crdVal2;
   string start, face1, //start, face1=face of dealer card, 
           face2; // face2= face of player card 
   int cardVal[SIZE]= {}; //array holding both dealer and player cards 
   char HorL; //higher or lower 
   unsigned short games=0; //place holder for games
   float PlrAmt=50; //starting value for player
   float nGame[SIZE]= {};
   int nPlyrs= SIZE/10;
   vector<unsigned int>myVect(SIZE);
   float pot=2; //pot value displayed
   bool error= false; //bool check for switch menu
   bool safe =false;  //bool check for HorL
   int val; //game number to transfer to function
   float plyrScr[SIZE][5]={}; //other player scores
   int a=0; //counter for games
   string Plyrs[nPlyrs]= {"John","Bill","Sarah", "Dan","Mark"};
   char choice2; //choice for viewing high score
   
   //declaration of functions that require other variables.
 void bubble(vector <unsigned int>&myVect,int SIZE);
   
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
    for (int c=0; c<SIZE; c++) {
   cardVal[c] =rand()%13+2;  //randomly generate number to fill cardval array
    }
    
 //2D array filled with randome numbers used for other players  
    for (int i=0; i<SIZE; i++){
        for(int j=0; j<nPlyrs; j++){
            plyrScr[i][j]= rand()%1000+1; //generate scores for players
        }
    }  
      
    //player X score board
    for (unsigned int i=0; i<myVect.size(); i++){
        myVect[i]= rand()%10000+50;  //generate score for player X
    }
    
    bubble(myVect,SIZE); //bubble sort

    
    crdVal1= cardVal[0]; //pick number 0 from array for dealer card
    crdVal2= cardVal[30]; //pick number 30 of array for player card 
    
//Generates card 1 *************************************************************
face1 = FacVal1(crdVal1);  //function generates face value based on card value
   
//******************************************************************************
   //High or Low?
   cout<<"******************************************************************\n";
   for (int c=(a+1); c<=(games+1);c++) {
       cout<<"Game: "<<c<<endl; //keep count of games
          }
   
            nMoney[a]=PlrAmt;
            games++;//increase games
            a++;   //increase count
            
    for (int i=0;i<SIZE;i++){
        nGame[i]=(i+1); //games count array
    }        
            
games>10?cout<<"You've played over ten games!!"<<endl:cout<< 
        "Reach over 50 games and get $1,000,000!"<<endl;  //Reach over ten games  
// encouraging message

   cout<<"Dealers card: "<<face1<<" with the value of "<<crdVal1<<endl;
   cout<<setprecision(2)<<fixed;  //set precision for decimal if it occurs        
        
  inFile>>PlrAmt;
  cout<<"Pot= $"<<pot<<endl; //display pot value
  cout<<endl;
  cout<<"Player's earnings =$"<<static_cast<float>(PlrAmt)<<endl;//static cast
  cout<<endl;  //display player earnings as float
  cout<<"Guess if the next card is higher or lower than the Dealers.\n";
  cout<<"(type in 'h' for high or 'l' for low)"<<endl;
  cin>>HorL;  //decide high or low
  
  
  //Generate card 2 ************************************************************
   //generate second random number with same values as specified for card 1
  face2= FacVal2(crdVal2);
   
//******************************************************************************  
  cout<<endl;
  if (HorL=='h') { //if entered 'h' for higher
      
cout<<"*********************************************************************\n";
        cout<<"Dealer Draw: "<<face1<<" with the value of "<<crdVal1<<endl;
        cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
        cout<<endl;        
cout<<"*********************************************************************\n"; 
      if (crdVal1<crdVal2){
        error= winMenu(PlrAmt,pot); //return bool value
         if (error==true){ //end program if invalid entry with switch
             cout<<"Invalid entry"<<endl;
             cout<<"Restart and try again."<<endl;
             return 0;
      }
      }
      else if (crdVal1>crdVal2){ //lose guess=high, card=low
          cout<<"You lose!"<<endl;
          PlrAmt=PlrAmt-pot;//subtract pot amount from player amount
          pot=2; //reset pot to $2
      }
      else {
          cout<<"You tied! A tie still counts as a win"<<endl;
          error= winMenu(PlrAmt,pot); 
         if (error==true) {//end program if invalid entry with switch
             cout<<"Invalid entry"<<endl;
             cout<<"Restart and try again."<<endl;
             return 0;         
        }
    }

  } else if (HorL=='l') { //if enter 'l'
cout<<"*********************************************************************\n";
        cout<<"Dealer Draw: "<<face1<<" with the value of "<<crdVal1<<endl;
        cout<<"Your Draw: "<<face2<<" with the value of "<<crdVal2<<endl;
        cout<<endl; //display the face of your card and dealers
cout<<"*********************************************************************\n";
      if (crdVal1>crdVal2){ 
         error= winMenu(PlrAmt,pot); 
         if (error==true) {//end program if invalid entry with switch
             cout<<"Invalid entry"<<endl;
             cout<<"Restart and try again."<<endl;
             return 0;
      }
      }
      else if (crdVal1<crdVal2){ //lose if guess low, card high
          cout<<"You lose."<<endl; 
          PlrAmt=PlrAmt-pot; //subtract pot amount from player amount
          pot=2; //reset pot to $2
      }
      else {
          cout<<"You tied! A tie still counts as a win"<<endl;
          error= winMenu(PlrAmt,pot);           
         if (error==true){ //end program if invalid entry with switch
             cout<<"Invalid entry"<<endl;
             cout<<"Restart and try again."<<endl;
             return 0;
      }
    }
  } else {
    safe=true;
    while(safe) { //safe bool
    cout<<"Invalid entry."<<endl; 
    cout<<"Enter either h or l"<<endl;
    games--;//display the error message and revers game counter
    safe=false;
    }
  }
  
  
  
  
  if (PlrAmt < 0){ //if player amount is below 0
   cout<<"Your out of money!!"<<endl; 
   cout<<"GAME OVER"<<endl; //display game over
    Stats(nGame,nMoney,SIZE); //recap 50 games
    Stats(SIZE,Plyrs,nPlyrs,plyrScr, myVect); //other players scores
    cout<<"You can search for your player amount at any game by typing in the "
            "game number here."<<endl;
    cout<<"Enter in the specific game number you wish to see data for."<<endl;
    cin>>val;
    linSrch(myVect,SIZE,val,nGame,nMoney); //search playerX val and player val
   return 0; //terminate program
}

}while(games < 50); //when player gets to over 50 games

  //game over if player amount get to zero
if (games >50 ) PlrAmt+=1000000; //add 1000000 to earnings
cout<<"Would you like to see your stats?"
        "('y' for yes, 'n' for no)"<<endl;
cin>>choice2; //watch the stats if they choose
if (choice2=='y'){ 
    Stats(nGame,nMoney,SIZE); 
    Stats(SIZE,Plyrs,nPlyrs,plyrScr, myVect);
    cout<<"You can search for your player amount at any game by typing in the "
            "game number here."<<endl;
    cout<<"Enter in the specific game number you wish to see data for."<<endl;
    cin>>val;    
 linSrch(myVect,SIZE,val,nGame,nMoney);
}         
else{ //close files
   inFile.close();  //close infile
   outFile.close(); //close outfile
  return 0;
}
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
    string face2; //assign face value to card value
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
float winMenu(float &PlrAmt,float &pot){
   static int choice;
    ofstream outFile;
    cout<<"You win!"<<endl; //win if guess high, car high
         //double, save or cash out
        cout<<"What would you like to do next?(type 1,2,or 3)"<<endl;
        cout<<"1. Double up (you lose pot value from your earnings)"<<endl;
        cout<<"2. Save it (add the amount to your earnings)"<<endl;
        cout<<"3. Cash out (cash out the printable check)"<<endl;
        cin>>choice;  
        
        if (choice<1 || choice >3) {return true;}
        
        switch (choice) {
           
            case 1: {  //square pot
                pot+= pow(pot,2);
                cout<<"The pot is now =$"<<pot<<endl;               
            }
            break;
            case 2: { //add pot to player amount
                PlrAmt+=pot;
                cout<<"Your earnings are =$"<<PlrAmt<<endl;
                pot=2;  
                return 0;
            }
            break;
            case 3: { //output player amount to file
                cout<<"A check has been put in the check file in this programs";
                        cout<<" folder"<<endl;
                outFile<<PlrAmt<<endl;
                return 0;
            }
            default:
                pot+= pow(pot,2); //default double up
                cout<<"The pot is now =$"<<pot<<endl;  
                break;                
            }
        }

//******************************************************************************
//******************************************************************************
 void Stats(float nGame[], float nMoney[], int SIZE){ //use money per game    
     cout<<"Your amount per game:"<<endl;
        for (int j=0; j< SIZE; j++){
        cout<<"Game "<<nGame[j]<<":     $"<<nMoney[j]<<endl; //parallel array
      }
    }
 
 //*****************************************************************************
 //*****************************************************************************
 
void  Stats(int SIZE, string Plyrs[],int nPlyrs,float plyrScr[][5], 
        vector<unsigned int> myVect){  //player X and other players high scores
    
    cout<<"Player X"<<endl;
    for(int i=0;i<myVect.size();i++){
        cout<<"Games "<<(i+1)<<":   $"<<myVect[i]<<" \n";
    }
    cout<<endl;   
    
    for (int i=0; i<nPlyrs; i++){
       cout<<"Player "<<static_cast<string>(Plyrs[i])<<endl;
        for(int j=0; j<SIZE; j++){
            cout<<"Game "<<(j+1)<<":   $"<<plyrScr[i][j]<<" \n";
        }
        cout<<endl;
    }
}
//******************************************************************************
//******************************************************************************
void bubble(vector <unsigned int> &myVect,int SIZE){
     bool swap;  //bubble swap, to make least to greatest
    int temp;
    do{
        swap=false;
        for(int i=0;i<(SIZE)-1;i++){
            if(myVect[i]>myVect[i+1]){
                temp=myVect[i];
                myVect[i]=myVect[i+1];
                myVect[i+1]=temp;
                swap=true;
            }
        }
    }while(swap);
}
//******************************************************************************
//******************************************************************************
int linSrch(vector<unsigned int> myVect,int SIZE,int val, float nGame[],
        float nMoney[]) //search for value corresponding to game number
        {        
            for(int i= 0; i<(SIZE); i++){
        if (nGame[i]==val){
            cout<<"Game "<<(i+1)<<":   $"<<myVect[i]<<endl;  
        }
                
        if(nGame[i]==val){
            cout<<"Game "<<(i+1)<<":   $"<<nMoney[i]<<endl;  
    }
}
}
//******************************************************************************
//******************************************************************************
/* 
  File:   main.cpp
  Author: Daniel Landry
  Created on February 6, 2017, 12:57 AM
  Purpose:  Assignment 6 in a menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>  //Math operations
#include <fstream>
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
void NLarger(int, int [], int);
void prob5();
void prob6();
void prob7();
void check(int ,int [][3]); //function to input and verify magic square
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
        cout<<"Type 1 for Prob 1 (Gaddis) with Largest and Smallest"<<endl;
        cout<<"Type 2 for Prob 2 (Gaddis) with Rainfall Stats \n";
        cout<<"Type 3 for Prob 3 (Gaddis) with Chips and Salsa"<<endl;
        cout<<"Type 4 for Prob 4 (Gaddis) with Numbers larger than N "<<endl;
        cout<<"Type 5 for Prob 5 (Gaddis) with Monkey Business"<<endl;
        cout<<"Type 6 for Prob 6 (Gaddis) with Rain or Shine"<<endl;
        cout<<"Type 7 for Prob 8 (Gaddis) with Magic Square"<<endl;
        cout<<"Type 8 for Prob 9 (Gaddis) with Payroll"<<endl;
        cout<<"Type 9 for Prob 14 (Gaddis) with Lottery Application"<<endl;
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
    
    int ArSize= 10;
    float Store[ArSize]={}; //storage cells 0-9
    float lowest, highest;
    
    //Input or initialize values Here
    cout<<"This program will pick the highest and lowest numbers from a "
            "set of 10 inputed values"<<endl;
    cout<<endl;
   
    
    for (int c=1;c<=ArSize;c++) {
    cout<<"Input a number: ";
    cin>>Store[c];    
    }
    lowest=highest=Store[1];
    
    //Process/Calculations Here
    for (int a=1;a<=ArSize;a++) {    
    if(Store[a]<lowest) lowest= Store[a];
    if (Store[a]> highest) highest= Store[a];
    }
    //Output Located Here
   cout<<"Highest number stored = "<<highest<<endl;
    cout<<"Lowest number stored = "<<lowest<<endl; 
    //Exit 
    
}

//222222222222222222222222222222222222222222222222222222222222222222222222222222
//222222222222222222222222 Problem 2 2222222222222222222222222222222222222222222
void prob2() {
    int Size=12;
 float RnFall[Size];
    float Total= 0,   //Total initialized to 0
            least,  //least rainfall value
            highest,  //highest rainfall value
            monthL=1,  //month number with the least rainfall
            monthH=1;  //month number with the highest rainfall
    
    //input values
    for (int count=1; count<=Size;count++){
    cout<<"Enter the total rainfall in inches for month "<<count<<" ?"<<endl;
    cin>>RnFall[count]; //input rainfall
}
    least=highest= RnFall[1]; // least and highest rainfall equal to 
    
    for (int j=1; j<=Size; j++){ //loop to number of months
        if (RnFall[j] > highest){
            highest= RnFall[j];  //highest is the highest inputed value
            monthH=j; //the month number that the highest rainfall occured
        }
        if (RnFall[j] < least) { //loop to number of months
            least= RnFall[j]; //least equals lowest rainfall value
            monthL=j; //month number that the lowest rainfall occured
        }
    Total= Total + RnFall[j]; //add all the inputed numbers 
    }
    
    
    cout<<"Total rainfall for the year = "<<Total<<" inches."<<endl;
    cout<<"The average rainfall per month = "<<Total/12.0f<<" inches."<<endl;
    cout<<"The month with the most rainfall = "<<monthH<<endl;
    cout<<"The month with the least rainfall = "<<monthL<<endl;
    //Process by mapping inputs to outputs
    
    //Exit stage right!
    
}
//333333333333333333333333333333333333333333333333333333333333333333333333333333
//33333333333333333333333 Problem 3 33333333333333333333333333333333333333333333
void prob3() {
    
   int SIZE= 5; 
string Salsas[SIZE]= {"mild","medium","sweet","hot","zesty"},
             JarL, //jar 
             JarH;
         float Jars[SIZE], 
         lowest, //lowest sales salsas
       
         highest; //highest sales salsa
    
    //input values
    cout<<"This program will keep track of the sales for  5 different "
            "types of salsa."<<endl; 
    
    //Process by mapping inputs to outputs
    for (int c=0; c<=(SIZE-1); c++){
        cout<<"How many jars of "<<Salsas[c]<<" were sold?"<<endl;
        cin>>Jars[c];
        
        while (Jars[c] <0 ){
            cout<<"Invalid entry. Enter a positive value for jars sold"<<endl;
        cin>>Jars[c];
        }
        
    }
    
    lowest=Jars[0];
    highest=Jars[0];
    
    JarL= Salsas[0];
    JarH= Salsas[0];
    
    for (int c=0; c<=(SIZE-1); c++) {
        if (Jars[c] < lowest) {
            lowest= Jars[c];
            JarL= Salsas[c];
        }
        if (Jars[c] > highest) {
            highest= Jars[c];
            JarH= Salsas[c];
    }
    }
    cout<<endl;
    
    //output
    cout<<"\tThe table of salsas Sales: \n"<<endl;
   for (int c=0; c<=(SIZE-1); c++){
    cout<<Salsas[c]<<" = "<<Jars[c]<<" jars sold"<<endl;            
   }
    cout<<"Lowest selling salsa was "<<JarL<<" with "<<lowest<<" jars"<<endl;
    cout<<"Highest selling salsa was "<<JarH<<" with "<<highest<<" jars"<<endl;
    
    //Exit stage right!
   
}
//444444444444444444444444444444444444444444444444444444444444444444444444444444
//4444444444444444444444 Problem 4 444444444444444444444444444444444444444444444
void prob4() {
 int SIZE= 20;
    int n; //number 
    int Numbr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    //array to hold numbers
    
    //Input values
    cout<<"This program will output all the number greater than n "
            " between 1 and 20 in the array."<<endl;
    cout<<endl;
    cout<<"input the your n value."<<endl;
    cin>>n;
    NLarger(n,Numbr,SIZE);
    
    //Process by mapping inputs to outputs
    
      
    //Output values

    //Exit stage right!
  
}
//*************void for prob 4**************************************************
void NLarger(int n, int Numbr[], int SIZE){
     cout<<"Numbers greater than n in array:"<<endl;
     for (int c=0; c<=(SIZE-1); c++){
         if (Numbr[c] > n) {cout<<Numbr[c]<<" ";}
     }
 }
//555555555555555555555555555555555555555555555555555555555555555555555555555555
//5555555555555555555555 Problem 5 555555555555555555555555555555555555555555555
void prob5() {
    int Row= 3, //number of monkeys
          Colm= 5;
 int Feedrep[Row][Colm];
    int total,
        highest,
        least;
    
    //Input values
    cout<<"This program keep track of how much food each of the 3 "
            "monkeys eat"<<endl; 
    cout<<endl;
    
    //Process by mapping inputs to outputs
    cout<<"Enter the pounds of food eaten by each monkey per day."<<endl;
      
    for(int c=0;c < Row; c++){
        for (int i=0; i < Colm; i++){
            
         cout<<"Monkey "<<(c+1)<<", "; //monkey number increases with counter c
         cout<<"day "<<(i+1)<<" = "; //days ramp up with counter i
            
            cin>>Feedrep[c][i]; //input the number to save in 2D array
        }        
    }  
    
    least=highest=Feedrep[0][0];
    
    //Output values
    for (int k=0; k<Row; k++) {
    for (int j=0; j< Colm; j++){
        total += Feedrep[k][j];  
        if (Feedrep[k][j] < least){ least = Feedrep[k][j];}
        if (Feedrep[k][j] > highest){ highest = Feedrep[k][j];}        
    }
    }    
    cout<<endl;
    cout<<"Average amount of food eaten per day = "<<total/5<<endl; 
    cout<<"Least amount of food eaten during this week eaten by one monkey = ";
    cout<<least<<endl;
    cout<<"Most amount of food eaten during this week eaten by one monkey = ";
    cout<<highest<<endl;

    //Exit stage right!
    
}
//666666666666666666666666666666666666666666666666666666666666666666666666666666
//66666666666666666666666 Problem 6 66666666666666666666666666666666666666666666
void prob6() {
    int Row= 3, //months
        Colm= 30; //days in month
 //Declare Variables
    char weather[Row][Colm];
    int totRain= 0, //total rainy days
         totSun= 0, //total sunny days
         totCld= 0;  //total cloud days
    int     JuneRn= 0, //rain days in june
            JuneCl= 0, //cloudy days in june
            JuneSn= 0, //sunny days in june
            JulyRn= 0, //rain in july
            JulyCl= 0, //cloudy in july 
            JulySn= 0, //sunny july
            AugRn= 0,  //august rainy days
            AugCl= 0, //august cloudy days
            AugSn= 0;  // august sunny days   
            
    ifstream infile;
    infile.open ("RainorShine.txt");
    //Input values
    cout<<"This program will read in the weather data from a file and display "
            "the number of sunny, cloudy and rainy days."<<endl;
    
    //Process by mapping inputs to outputs
    
    //write in file RainorShine.txt
    for (int month=0; month < Row; month++){
        for (int day=0; day < Colm; day++) {
            infile >> weather[month][day];
        }
    }
    
    //displays array  
    for (int month=0; month < Row; month++){
        if (month==0){
            cout<<"Weather for the month of June: ";
        }
         if (month==1){
            cout<<"Weather for the month of July: ";
        }
         if (month==2){
            cout<<"Weather for the month of August: ";
        }
        
        for (int day=0; day < Colm; day++) {
            cout<< weather[month][day]<<" ";
        }
        cout<<endl;
    }
    
    // counts the number of sunny, cloudy and rainy days
    for (int month=0; month < Row; month++){
        for (int day=0; day < Colm; day++) {
            if (weather[month][day] == 'R') {
                totRain++;
            }
            if (weather[month][day] == 'C') {
                totCld++;
            }
            if (weather[month][day] == 'S') {
                totSun++;
            }
        }
    }
    
     for (int month=0; month < Row; month++){
        for (int day=0; day < Colm; day++) {
            if (month==0 && weather[month][day] == 'R'){
                JuneRn++;
            }
            if (month==0 && weather[month][day] == 'C'){
                JuneCl++;
            }
            if (month==0 && weather[month][day] == 'S'){
                JuneSn++;
            }
            
            if (month==1 && weather[month][day] == 'R'){
                JulyRn++;
            }
            if (month==1 && weather[month][day] == 'C'){
                JulyCl++;
            }
            if (month==1 && weather[month][day] == 'S'){
                JulySn++;
            }
            
            if (month==2 && weather[month][day] == 'R'){
                AugRn++;
            }
            if (month==2 && weather[month][day] == 'C'){
                AugCl++;
            }
            if (month==2 && weather[month][day] == 'S'){
                AugSn++;
            }           
        }
     }
    
    cout<<endl;
    //Output values
    
    cout<<"Total number of Rainy days: "<<totRain<<endl;
    cout<<"Total number of Sunny days: "<<totSun<<endl;
    cout<<"Total number of Cloudy days: "<<totCld<<endl;
    cout<<endl;
    cout<<"Number of Rainy days in June: "<<JuneRn<<endl;
    cout<<"Number of Sunny days in June: "<<JuneSn<<endl;
    cout<<"Number of Cloudy days in June: "<<JuneCl<<endl;
    cout<<endl;
    cout<<"Number of Rainy days in July: "<<JulyRn<<endl;
    cout<<"Number of Sunny days in July: "<<JulySn<<endl;
    cout<<"Number of Cloud days in July: "<<JulyCl<<endl;
    cout<<endl;    
    cout<<"Number of Rainy days in August: "<<AugRn<<endl;
    cout<<"Number of Sunny days in August: "<<AugSn<<endl;
    cout<<"Number of Cloudy days in August: "<<AugCl<<endl;
    cout<<endl;
    if (AugRn > JulyRn && AugRn > JuneRn) {
        cout<<"August had the most rainy days at "<<AugRn<<" days."<<endl;
    }
    if (JulyRn > AugRn && JulyRn > JuneRn) {
        cout<<"July had the most rainy days at "<<JulyRn<<" days."<<endl;
    }
    if (JuneRn > JulyRn && JuneRn > AugRn) {
        cout<<"June had the most rainy days at "<<JuneRn<<" days."<<endl;
    }
  
    //Exit stage right!
}
//777777777777777777777777777777777777777777777777777777777777777777777777777777
//77777777777777777777777 Problem 7 77777777777777777777777777777777777777777777
void prob7() {
     int  Row= 3, // Rows in the square
          Colm= 3; //Colms in the square 
  //Declare Variables
    int MagicSq[Row][3]={}; //set array to 0
    
    //Input values
    cout<<"This program simulates a Lo Shu Magic square as a 2D array."<<endl;
    check(Row, MagicSq); //go into function
    
    //Process by mapping inputs to outputs
      
    //Output values

    //Exit stage right!
}

void check(int Row, int MagicSq[][3]) {
    for (int i=0 ; i < Row; i++) {
        for(int k= 0; k < 3; k++){
            cout<<"Enter colum "<<(k+1)<<", row "<<(i+1)<<" number: ";
            cin >> MagicSq[i][k];
        }
        cout<<endl;
    }
    
    int numb = MagicSq[0][0] + MagicSq[1][1] + MagicSq[2][2] ;
    
    if (MagicSq[0][0] + MagicSq[1][1] + MagicSq[2][2]== numb  &&
        MagicSq[0][2] + MagicSq[1][1] + MagicSq[2][0]== numb  &&               
            
        MagicSq[0][0] + MagicSq[0][1] + MagicSq[0][2] ==numb &&
        MagicSq[1][0] + MagicSq[1][1] + MagicSq[1][2] ==numb &&
        MagicSq[2][0] + MagicSq[2][1] + MagicSq[2][2] ==numb &&
            
        MagicSq[0][0] + MagicSq[1][0] + MagicSq[2][0] ==numb && 
        MagicSq[0][1] + MagicSq[1][1] + MagicSq[2][1] ==numb &&
        MagicSq[0][2] + MagicSq[1][2] + MagicSq[2][2] ==numb         
                ) {
        cout<<" This is a Lo Shu Magic Square!"<<endl;
    }
    else {
        cout<<"This is not a Magic square."<<endl;
    }   
}
//888888888888888888888888888888888888888888888888888888888888888888888888888888
//888888888888888888888888 Problem 8 8888888888888888888888888888888888888888888
void prob8() {
 //Declare Variables
    int SIZE =7;
    int empId[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 
    1302850, 7580489}; //all 7 employee numbers
    int hours[SIZE]; //hours story array
    int payRate[SIZE]; //payrate storing array
    int wages[SIZE];  //calculate wages storing array
    
    //Input values
    cout<<"This program will calculate the gross wages for each employee"<<endl;
    cout<<"Enter the hours and pay rate of each employee"<<endl;
    
    //Process by mapping inputs to outputs
    for (int c=0; c<SIZE; c++){ //intervale for each employee
        cout<<empId[c]<<": "<<endl;
        cout<<"How many hours did they work?"<<endl;
        cin>>hours[c];  //hours worked
        cout<<"what is this employees pay rate? (dollars per hour)"<<endl;
        cin>>payRate[c];  //payrate
        
        wages[c]= hours[c]*payRate[c]; //calculate the gross wages
    }
      
    //Output values
    cout<<"The Gross wages for each of the seven employees."<<endl;
    for (int c=0; c<SIZE; c++){  //outputs the 7 employees gross wages
        cout<<empId[c]<<":  $"<<wages[c]<<endl;
    }
    

    //Exit stage right!
    
}
//999999999999999999999999999999999999999999999999999999999999999999999999999999
//99999999999999999999999 Problem 9 99999999999999999999999999999999999999999999
void prob9() {
    int SIZE=5; //size of array
 //Declare all Variables Here
    int lottery[SIZE]= {};
    int user[SIZE]={};
    int match= 0;
    
    srand(time(0));
    
    //Input or initialize values Here
    cout<<"This program will generates a random lottery and match the numbers "
            "with the user input lottery guesses."<<endl;
    cout<<endl;
    cout<<"Input your five lottery numbers between 0 and 9 : "<<endl;
    
    //Process/Calculations Here
    for (int c=0; c<SIZE; c++) {
        cout<<"Number "<<(c+1)<<" = ";
        cin>> user[c];
    }
    
    for (int j= 0; j<SIZE; j++) {
          lottery [j] = rand()%9+1;
    }
       
    //Output Located Here
   
        for (int i=0; i<SIZE; i++){            
            if (user [i] == lottery[i] ) {
            match++;
    }        
    }
     cout<<"The lottery array : ";
    for (int i= 0; i<SIZE; i++){
        cout<<lottery[i]<<" ";
    }
     cout<<endl; 
     
    cout<<"The User array    : ";
    for (int i= 0; i<SIZE; i++){
        cout<<user[i]<<" ";
    }
    cout<<endl;
    cout<<"Number of matches = "<<match<<endl;
    
    if (match==5) {
        cout<<"YOUR A GRAND PRIZE WINNER!"<<endl;
    }    
    //Exit
}

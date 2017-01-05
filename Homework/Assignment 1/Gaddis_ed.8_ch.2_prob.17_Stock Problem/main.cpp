/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const unsigned char PERCENT=100;//conversion to percent
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char stkprce=35; //units of dollars per share
    unsigned short nShares=750; //number of shares
    unsigned char comishn=2; //percent commission
    unsigned short stkPaid,comPaid,totPaid;
    //Input values
    
    //Process by mapping inputs to outputs
    stkPaid=stkprce*nShares; //amount Paid for the stock in $
    comPaid=stkPaid*comishn/PERCENT; //Commission on stock in $
    totPaid=stkPaid+comPaid; //total Paid
    
    //Output values
    cout<<"Stock Price/Share = $"<<static_cast<int>(stkprce)<<"/shares"<<endl;
    cout<<"Number of Shares = "<<nShares<<"/shares"<<endl;
    cout<<"Commission"<<static_cast<int>(comishn)<<"/shares"<<endl;
    cout<<"Stock Price Payed = $"<<stkPaid<<endl;
    cout<<"Commission Paid = $"<<comPaid<<endl;
    cout<<"Total Paid = $"<<totPaid<<endl;
    //Exit stage right!
    return 0;
}

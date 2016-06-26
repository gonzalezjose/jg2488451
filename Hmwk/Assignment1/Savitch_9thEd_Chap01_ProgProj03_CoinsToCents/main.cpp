/* 
 * File:   main.cpp
 * Author: Jose A. Gonzalez *
 * Created on June 25, 2016, 4:23 PM
 * Purpose: Template
 */

//System Libraries
#include <iostream>         //Input/Output Library
#include <cmath>            //Math Library
using namespace std;        //Namespaceof the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int tqtr;//Amount of quarters as integer
    int tdime;//Amount of dimes as integer
    int tnkl;//Amount of niclels as integer
    float totcents;//Total amount in cents from all coins
    
    //Input Data
    cout<<"Let's find the monetary value of the coins you have."<<endl;//Prompt
    cout<<"Press enter after inputing the amount of coins."<<endl;//Instructions
    cout<<"How many quarters do you have?"<<endl;//Prompt
    cin>>tqtr;
    cout<<"How many dimes do you have?"<<endl;//Prompt
    cin>>tdime;
    cout<<"How many nickels do you have?"<<endl;//Prompt   
    cin>>tnkl;
    
    //Process the Data
    totcents = tqtr*25+tdime*10+tnkl*05;//Result of mult coins by value then adding them
    
    //Output the processed Data
    cout<<"You have a total of "<<totcents<<" cents.";
    
    //Exit Stage Right!

    return 0;
}


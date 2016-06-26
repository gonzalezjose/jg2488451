/* 
 * File:   main.cpp
 * Author: Jose A. Gonzalez *
 * Created on June 23, 2016, 7:04 PM
 * Purpose: Take two numbers and find the sum and product
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
    int nOne,nTwo;//Two numbers to be used in operation
    int Sum;//Result of nOne and nTwo when added together
    int Product;//Result of nOne and nTwo when multiplied together
    
    //Input Data
    cout<<"Press enter after typing in numbers."<<endl;//Instructions to user
    cout<<"Let's find the sum and product of two numbers."<<endl;//Instructions to user
    cout<<"Give me the first number."<<endl;
    cin>>nOne;
    cout<<"Give me the second number."<<endl;
    cin>>nTwo;
    
    
    //Process the Data
    Sum=nOne+nTwo;//Result of nOne and nTwo when added together
    Product=nOne*nTwo;//Result of nOne and nTwo when multiplied together
    
    //Output the processed Data
    cout<<"When you add "<<nOne<<" and "<<nTwo<<" together, the sum is: "<<endl;
    cout<<Sum<<endl;
    cout<<"When you multiply "<<nOne<<" and "<<nTwo<<" together, the product is: "<<endl;
    cout<<Product<<endl;
    
    //Exit Stage Right!

    return 0;
}


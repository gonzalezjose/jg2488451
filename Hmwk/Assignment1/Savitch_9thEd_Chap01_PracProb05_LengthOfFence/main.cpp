/* 
 * File:   main.cpp
 * Author: Jose A. Gonzalez *
 * Created on June 24, 2016, 10:03 PM
 * Purpose: Calculate length of fence
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
    float width;            //float variables of width
    float height;           //float variables of height
    float totlength;        //result of width * height
    
    //Input Data
    cout<<"Press Enter after inputting numbers."<<endl;//Prompt
    cout<<"What is the width of the rectangle in feet?"<<endl;
    cin>>width;//User enters width
    cout<<"What is the height of the rectangle in feet?"<<endl;
    cin>>height;//User enters the height
    
    //Process the Data
    totlength=width*height;
    
    //Output the processed Data
    cout<<"You need a total of "<<totlength<<" feet of fence to enclose "<<endl;
    cout<<"a rectangle of "<<width<<" feet wide by "<<height<<" feet tall."<<endl;
    
    //Exit Stage Right!

    return 0;
}


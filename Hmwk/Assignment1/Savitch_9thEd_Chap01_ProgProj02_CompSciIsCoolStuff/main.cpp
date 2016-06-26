/* 
 * File:   main.cpp
 * Author: Jose A. Gonzalez *
 * Created on June 25, 2016, 3:23 PM
 * Purpose: Print out "CS !"
 */

//System Libraries
#include <iostream>         //Input/Output Library
using namespace std;        //Namespaceof the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char c;//Character to utilize in creating a Big C output
    char s;//Character to utilize in creating a Big S output
    
    
    //Input Data
    cout<<"Type in CS and press Enter."<<endl;
    cin>>c>>s;
    
    //Process the Data
    
    //Output the processed Data
    cout<<"********************************"<<endl;
    cout<<"     "<<c<<c<<c<<"        "<<s<<s<<s<<s<<"      !!"<<endl;
    cout<<"    "<<c<<"   "<<c<<"     "<<s<<"      "<<s<<"    !!"<<endl;
    cout<<"  "<<c<<"          "<<s<<"            !!"<<endl;
    cout<<" "<<c<<"            "<<s<<"           !!"<<endl;
    cout<<" "<<c<<"              "<<s<<s<<s<<s<<"      !!"<<endl;
    cout<<" "<<c<<"                  "<<s<<"     !!"<<endl;
    cout<<"  "<<c<<"                  "<<s<<"    !!"<<endl;
    cout<<"   "<<c<<"    "<<c<<"     "<<s<<"      "<<s<<"       "<<endl;
    cout<<"     "<<c<<c<<c<<"        "<<s<<s<<s<<s<<"      OO"<<endl;
    cout<<"********************************"<<endl;
    cout<<"Computer Science is Cool Stuff!!!"<<endl;
    
    //Exit Stage Right!

    return 0;
}


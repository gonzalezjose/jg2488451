/* 
 * File:   main.cpp
 * Author: Jose A. Gonzalez *
 * Created on June 24, 2016, 8:49 PM
 * Purpose: Peas Per Pod
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
    int nPods;          //Number of Pods
    int nPePerPod;      //Number of Peas
    int tPeas;          //Total of Peas equals nPods*nPePerPod
    
    //Input Data
    cout<<"Press return after entering a number."<<endl; //Inform user
    cout<<"Enter the number of pods:"<<endl;             //Prompt
    cin>>nPods;                                          //Enter number of pods
    cout<<"Enter the number of peas in a pod:"<<endl;    //Prompt
    cin>>nPePerPod;                                      //Ent num of peas/pod
        
    //Process the Data
    tPeas=nPods*nPePerPod;            //Multiply pods by peas per pod
    
    //Output the processed Data
    cout<<"If you have ";
    cout<<nPods;
    cout<<" pea pods"<<endl;
    cout<<"and ";
    cout<<nPePerPod;
    cout<<" peas in each pod, then"<<endl;
    cout<<"you have ";
    cout<<tPeas;
    cout<<" peas in all the pods."<<endl;
        
    //Exit Stage Right!

    return 0;
}


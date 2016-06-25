/* 
 * File:   main.cpp
 * Author: Jose A. Gonzalez *
 * Created on June 24, 2016, 9:25 PM
 * Purpose: Modify Savitch_9thEd_PracProb01and02. Change Multiply to divide.
 *              Review run time error when divided by 0.
 *     
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
    cout<<"Hello"<<endl;                                 //Mod. Adds "Hello"
    cout<<"Press return after entering a number."<<endl; //Inform user
    cout<<"Enter the number of pods:"<<endl;             //Prompt
    cin>>nPods;                                          //Enter number of pods
    cout<<"Enter the number of peas in a pod:"<<endl;    //Prompt
    cin>>nPePerPod;                                 //Ent num of peas/pod_
                                  //This will return an error when divided by 0
        
    //Process the Data
    tPeas=nPods/nPePerPod;            //Divide pods by peas per pod
    
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
    cout<<"Good bye"<<endl;           //Mod. Adds "Good bye"
        
    //Exit Stage Right!

    return 0;
}


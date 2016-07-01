/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on July 1, 2016, 8:00 am
 * Purpose: Time calculator
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>//Format Library

using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    long sec;
    long mns,hrs,dys;
    //Input Data
    cout<<"Enter the number of seconds you wish calculate"<<endl;
    cin>>sec;
    //Process the Data
    mns=sec/60;
    hrs=mns/60;
    dys=hrs/60;
    //Output the Processed Data
    cout<<setprecision(4)<<fixed<<showpoint<<right;
    cout<<"Mns = "<<setw(4)<<mns<<endl;
    cout<<"Hrs = "<<setw(4)<<hrs<<endl;
    cout<<"Dys = "<<setw(4)<<dys<<endl;
    //Exit Stage Right!
    return 0;
}
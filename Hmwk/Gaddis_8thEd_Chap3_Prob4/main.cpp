/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 29, 2016, 6:50 PM
 * Purpose: calculate the average rainfall for three months
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    long monthA,monthB,monthC;
    float rain1,rain2,rain3;
    float avrg;
    //Input Data
    cout<<"Input the name of a month"<<endl;
    cin>>monthA;
    cout<<"Input the amount of rain in inches"<<endl;
    cin>>rain1;
    cout<<"Input the name of a month"<<endl;
    cin>>monthB;
    cout<<"Input the amount of rain in inches"<<endl;
    cin>>rain2;
    cout<<"Input the name of a month"<<endl;
    cin>>monthC;
    cout<<"Input the amount of rain in inches"<<endl;
    cin>>rain3;
    //Process the Data
    avrg=(rain1+rain2+rain3)/3; //formula
    //Output the Processed Data
    cout<<"the average rain for the months of "<<monthA<<" "<<monthB<<" "<<monthC<<" was "<<avrg<<" Inches"<<endl;
    //Exit Stage Right!
    return 0;
}
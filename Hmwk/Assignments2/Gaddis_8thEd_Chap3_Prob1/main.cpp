/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 29, 2016, 5:55 PM
 * Purpose: calculate MPG
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
    float Max;
    float Full;
    float Result;
    //Input Data
    cout<<"Input max capacity of your gas tank in gallons"<<endl;
    cin>>Max;
    cout<<"Input the number of miles you can drive on a full tank"<<endl;
    cin>>Full;
    //Process the Data
    Result=(Full/Max);//formula
    //Output the Processed Data
    cout<<"the vehicle should get approx. "<<Result<<"MPG"<<endl;
    //Exit Stage Right!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 29, 2016, 7:40 PM
 * Purpose: calculate the number of widgets on a pallet
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
    float Widget=12.5f;
    float Empty,Full;
    float Result,Amount;
    //Input Data
    cout<<"Input the weight of the Pallet empty"<<endl;
    cin>>Empty;
    cout<<"Input the weight of the Pallet full"<<endl;
    cin>>Full;
    //Process the Data
    Result=(Full-Empty);
    Amount=Result/Widget;
    //Output the Processed Data
    cout<<"the amount of widgets stacked on the pallet is Approx. "<<Amount<<endl;
    //Exit Stage Right!
    return 0;
}
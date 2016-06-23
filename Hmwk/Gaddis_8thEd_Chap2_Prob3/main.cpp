/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 20, 2016, 6:51 PM
 * Purpose: Template
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
    float tax;
    float total;
    float sale=95;
    float percent=.06;
    //Input Data
    cout<<"Bill"<<endl;
    //Process the Data
    tax=sale*percent;
    total=tax+sale;
    //Output the Processed Data
    cout<<"Sale : $"<<sale<<endl;
    cout<<"tax = $"<<tax<<endl;
    cout<<"total = $"<<total<<endl;
    //Exit Stage Right!
    return 0;
}
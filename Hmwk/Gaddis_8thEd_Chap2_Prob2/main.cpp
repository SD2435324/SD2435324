/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 22, 2016, 7:37 PM
 * Purpose: Homework
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
    float total;
    float  sales=8600000;
    float percent=.58;
    //Input Data
    cout<<"The East Coast sales division profit percentage"<<endl; //display of context
    cout<<"Responsible for 58% of all sales"<<endl;
    cout<<"Whole profit for the company $"<<sales<<endl;
    //Process the Data
    total=sales*percent;//formula
    //Output the Processed Data
    cout<<"East Coast Division Profit = "<<total<<endl;//display
    //Exit Stage Right!
    return 0;
}
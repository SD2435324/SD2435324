/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 22, 2016, 7:08 PM
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
    int a,b,c;//3 Integer Variables
    
    //Input Data
    cout<<"Input Two Integers : Max of 10 digits"<<endl;//Prompt
    cin>>a>>b;//user input
    
    //Process the Data
    c=a+b;//formula
    
    //Output the Processed Data
    cout<<"a="<<a<<endl; //input 1
    cout<<"b="<<b<<endl; //input 2
    cout<<"c=a+b => "<<c<<endl; //output 1
    
    //Exit Stage Right!
    return 0;
}
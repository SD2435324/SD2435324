/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 27, 2016, 9:03 PM
 * Purpose: convert Celsius to Fahrenheit
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
    float ceq,cintrp,f;
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    
    //Input Data
    cout<<"Input Fahrenheit for conversion to Celsius"<<endl;
    cin>>f;
    
    //Process the Data
    ceq=(f-32)*5/9; //liner equation y=mx+b
    cintrp=c1+(c2-c1)*(f-f1)/(f2-f1);// similar triangles or linear interpolation
    
    //Output the Processed Data
    cout<<f<<" Degrees Fahrenheit = "<<ceq<<" Degrees Celsius"<<endl;
    cout<<f<<" Degrees Fahrenheit = "<<cintrp<<" Degrees Celsius"<<endl;
    //Exit Stage Right!
    return 0;
}
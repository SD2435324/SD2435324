/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 20, 2016, 6:51 PM
 * Purpose: Use the math library
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cmath>    //Math Library _> ATAN, Sin
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1);  //PI to seven significant digits
const float CNVRDEG=PI/180; //Conversion from radius to degrees

//Function Prototypes

//Execution Begins Here
int main (int argc, char** argv) {
    //Declare Variables
    float deg=30; //30 Degrees
    float rad; //Declare the radian value
    float result; //Result of Sin
    float x=2;
    float y=3;
    float ze,zm;
    
    //Input Data
    rad=deg*CNVRDEG;
     
    //Process the Data
     result=sin(rad);
     ze=exp(y*log(x));
     zm=x*x*x;
    //Output the Processed Data
    cout<<"sin("<<deg<<")="<<result<<endl;
    cout<<"ze="<<x<<"^"<<y<<" -> "<<ze<<endl;
    cout<<"zm="<<x<<"^"<<y<<" -> "<<zm<<endl;
    
    cout<<"Failure 1 gives  #include <io stream> //Input/Output Library"<<endl;
    cout<<"Failure 2 gives #include iostream> //Input/Output Library "<<endl;
    cout<<"Failure 3 leaving int off of main gives no errors"<<endl;
    cout<<"Failure 4 misspell main gives In Function 'main': "<<endl;
    cout<<"Failure 5 missing ( int main int argc, char** argv) {"<<endl;
    cout<<"Failure 6 missing 0 from cout cut"<<endl;
    
    //Exit Stage Right!
    return 0;
}
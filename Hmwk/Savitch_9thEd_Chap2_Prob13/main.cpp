/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 27, 2016, 9:30 PM
 * Purpose: BMR rhymes with candy bar
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
    char mf; //Male/Female calc
    float lbs,inches,yrs;
    float BMR,chocBar=230.0f;
    int nBars;
    //Input Data
    cout<<"Candy bar calculation to maintain weight"<<endl;
    cout<<"Eat less than listed value to loose weight"<<endl;
    cout<<"use m or f to indicate Male or Female"<<endl;
    cin>>mf;
    cout<<"Input weight in pounds, height in inches, and age in years"<<endl;
    cin>>lbs>>inches>>yrs;
    //Process the Data
    if(mf=='m'||mf=='M'){
        BMR=66+6.3*lbs+12.9*inches+6.8*yrs;
    }else{
        BMR=655+4.3*lbs+4.7*inches+4.7*yrs;
    }
    nBars=BMR/chocBar+1;
    //Output the Processed Data
    cout<<"The number of bars that one would consume to maintain weight = "<<nBars<<endl;
    //Exit Stage Right!
    return 0;
}
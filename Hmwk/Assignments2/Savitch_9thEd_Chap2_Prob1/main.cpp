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
    float msMass=35;//15 grams
    float msKill=5; //5 grams of sweetener
    float hmMass=45400; //grams, about 100 pounds
    float msSoda=350;
    float consin=1e-3;//1/10th of 1%
    int nCans; //number of cans
    
    //Input Data
    
    //Process the Data
    nCans=hmMass*msKill/ (msMass*msSoda*consin);
    
    //Output the Processed Data
    cout<<"Cans able to be consumed by a person of weight = ";
    cout<<hmMass<<"(grams) is = "<<nCans<<"(cans)";
    cout<<endl;
    
    //Exit Stage Right!
    return 0;
}
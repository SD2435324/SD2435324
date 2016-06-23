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
    float profit=0.35f,
          cost=14.95f,
            selprce;
    //Input Data
    
    //Process the Data
    selprce=cost*(1+profit);
    int pennies=selprce*100+0.5;
    selprce=pennies/100.0f;
    //Output the Processed Data
    cout<<"Cost of Circuit = $"<<cost<<endl;
    cout<<"Profit Margin = "<<profit*100<<"%"<<endl;
    cout<<"Market Value = $"<<selprce<<endl;
    //Exit Stage Right!
    return 0;
}
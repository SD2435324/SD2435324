/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on July 1, 2016, 10:15 AM
 * Purpose: Template
 */

//System Libraries
#include <iostream> //Input/Output Library //math library
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int min=18.5;
    int max=25;
    int BMI,lbs;
    int inches;
    //Input Data
    cout<<"Input your weight in pounds"<<endl;
    cin>>lbs;
    cout<<"Input your height in inches"<<endl;
    cin>>inches;
    
    //Process the Data
    BMI=(inches/(lbs*703))^2;
    
    if(BMI<18.5){
        cout<<BMI<<" is bellow the health standard of between 18.5 and 25"<<endl;
    }else if(BMI>25){
        cout<<BMI<<" is above the health standard of between 18.5 and 25"<<endl;
    }else{
        cout<<BMI<<" is within the health standard of 18.5 and 25"<<endl;
    }
    //Output the Processed Data
    
    //Exit Stage Right!
    return 0;
}
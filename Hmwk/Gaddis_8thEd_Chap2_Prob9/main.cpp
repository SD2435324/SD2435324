/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 22, 2016 7:39 PM
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
    char a; //input from user
    //Input Data
    cout<<"Choose your character!"<<endl;
    cin>>a;
    //Process the Data
    
    //Output the Processed Data
     cout<<"   "<<a<<"   "<<endl;//the 7 star diamond pattern
    cout<<"  "<<a<<a<<a<<"  "<<endl;
    cout<<" "<<a<<a<<a<<a<<a<<" "<<endl;
    cout<<a<<a<<a<<a<<a<<a<<a<<endl;
    cout<<" "<<a<<a<<a<<a<<a<<" "<<endl;
    cout<<"  "<<a<<a<<a<<"  "<<endl;
    cout<<"   "<<a<<"   "<<endl;
    //Exit Stage Right!
    return 0;
}
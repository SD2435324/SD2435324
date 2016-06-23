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
    char a;
    //Input Data
    cout<<"pick your favorite letter"<<endl;
    cin>>a;
    //Process the Data
    
    //Output the Processed Data
    cout<<"   "<<a<<"   "<<endl; //beginning of the 7 star pyramid pattern
    cout<<"  "<<a<<a<<a<<"  "<<endl;
    cout<<" "<<a<<a<<a<<a<<a<<" "<<endl;
    cout<<a<<a<<a<<a<<a<<a<<a<<endl;
    //Exit Stage Right!
    return 0;
}
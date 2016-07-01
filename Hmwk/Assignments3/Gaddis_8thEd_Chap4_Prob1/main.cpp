/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on July 1, 2016, 8:11 AM
 * Purpose: compare two numbers
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
    int a,b;
    
    //Input Data
    cout<<"input two numbers for examination"<<endl;
    cin>>a>>b;
    //Process the Data
    if(a>b) {
        cout<<a<<" is bigger than "<<b<<endl;
    }else if(b>a){
        cout<<b<<" is bigger than "<<a<<endl;
    }else{
        cout<<"Invalid Input"<<endl;
    }
    //Output the Processed Data
    
    //Exit Stage Right!
    return 0;
}
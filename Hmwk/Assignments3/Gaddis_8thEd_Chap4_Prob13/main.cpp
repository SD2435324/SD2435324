/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on July 1, 2016, 10:11 AM
 * Purpose: calculate points earned for the month from book purchases
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
    float a;
    //Input Data
    cout<<"Input the number of books purchased in the last month"<<endl;
    cin>>a;
    //Process the Data
    if(a<0){
        cout<<"Invalid amount"<<endl;
    }else if(a==0){
        cout<<"You have earned 0 points this month"<<endl;
    }else if(a==1){
        cout<<"You have earned 5 points this month"<<endl;
    }else if(a==2){
        cout<<"You have earned 15 points this month"<<endl;
    }else if(a==3){
        cout<<"You have earned 30 points this month"<<endl;
    }else{
        cout<<"You have earned 60 points this month"<<endl;
    }
    //Output the Processed Data
    
    //Exit Stage Right!
    return 0;
}
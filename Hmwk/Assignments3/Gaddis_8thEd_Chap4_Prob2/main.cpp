/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on July 1, 2016, 8:26 AM
 * Purpose: Roman numeral converter
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
    cout<<"Input a number between 1 and 10 for conversion to roman numerals"<<endl;
    cin>>a;
    //Process the Data
    
    //Output the Processed Data
    if(a==1){
        cout<<"I"<<endl;
    }else if(a==2){
        cout<<"II"<<endl;
    }else if(a==3){
        cout<<"III"<<endl;
    }else if(a==4){
        cout<<"IV"<<endl;
    }else if(a==5){
        cout<<"V"<<endl;
    }else if(a==6){
        cout<<"VI"<<endl;
    }else if(a==7){
        cout<<"VII"<<endl;
    }else if(a==8){
        cout<<"VIII"<<endl;
    }else if(a==9){
        cout<<"IX"<<endl;
    }else if(a==10){
        cout<<"X"<<endl;
    }else{
        cout<<"Error enter a number between 1 and 10"<<endl;
    }
    //Exit Stage Right!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 29, 2016, 9:00 PM
 * Purpose: tutor kids in math
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib> //rng library
#include <ctime> //time library
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned short random1,random2,result;
    unsigned short answer;
    
    //Input Data
    random1=rand()%900+100; //random 3 digit number
    random2=rand()%900+100;
    result=random1+random2;
    
    cout<<"Calculate the result of the following problem"<<endl;
    cout<<"Line up and type the resutlt"<<endl;
    cout<<"  "<<random1<<endl;
    cout<<" +"<<random2<<endl;
    cout<<"-------"<<endl;
    cin>>answer;
    //Process the Data
    if(result-answer==0){
        cout<<"your answer is correct!"<<endl;
    }else{
        cout<<"Invalid Answer, the correct answer is "<<result<<endl;
    }
    //Output the Processed Data
    
    //Exit Stage Right!
    return 0;
}
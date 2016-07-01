/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 29, 2016, 6:41 PM
 * Purpose: get the average of test scores
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>

using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float t1,t2,t3,t4,t5;
    float avrg;
    //Input Data
    cout<<"Enter a test score"<<endl;
    cin>>t1;
    cout<<"Enter a test score"<<endl;
    cin>>t2;
    cout<<"Enter a test score"<<endl;
    cin>>t3;
    cout<<"Enter a test score"<<endl;
    cin>>t4;
    cout<<"Enter a test score"<<endl;
    cin>>t5;
    //Process the Data
    avrg=(t1+t2+t3+t4+t5)/5;
    //Output the Processed Data
    cout<<setprecision(1)<<fixed<<showpoint<<endl;
    cout<<"Your average test score is "<<avrg<<"!"<<endl;
    //Exit Stage Right!
    return 0;
}
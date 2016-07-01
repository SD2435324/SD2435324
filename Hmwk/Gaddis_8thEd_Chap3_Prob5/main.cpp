/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 29, 2016, 7:23 PM
 * Purpose: calculate the percentage of males and females
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <iomanip>

using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float Males;
    float Females;
    float Total;
    float Mprcnt,Fprcnt;
    //Input Data
    cout<<"input the amount of males in the class"<<endl;
    cin>>Males;
    cout<<"input the amount of females in the class"<<endl;
    cin>>Females;
    //Process the Data
    Total=Males+Females;
    Mprcnt=(Males/Total)*100;
    Fprcnt=(Females/Total)*100;
    //Output the Processed Data
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"the percentage of males is "<<Mprcnt<<"%"<<endl;
    cout<<"the percentage of females is "<<Fprcnt<<"%"<<endl;
    //Exit Stage Right!
    return 0;
}
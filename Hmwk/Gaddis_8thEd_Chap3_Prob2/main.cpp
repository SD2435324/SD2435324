/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 29, 2016, 6:14 PM
 * Purpose: calculate the price of tickets
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
    int A=15;
    int B=12;
    int C=9;
    float Profit;
    float tcktsA,tcktsB,tcktsC;
    //Input Data
    cout<<"Input the number of Class A tickets sold"<<endl;
    cin>>tcktsA;
    cout<<"Input the number of Class B tickets sold"<<endl;
    cin>>tcktsB;
    cout<<"Input the number of Class C tickets sold"<<endl;
    cin>>tcktsC;
    //Process the Data
    Profit=(tcktsA*A)+(tcktsB*B)+(tcktsC*C); //formula
    //Output the Processed Data
    cout<<setprecision(2)<<fixed<<showpoint<<right<<endl;
    cout<<"Ticket sales = $"<<Profit<<endl;
    //Exit Stage Right!
    return 0;
}
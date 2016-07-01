/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 29, 2016, 9:23 PM
 * Purpose: Calculate interest earned
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cmath> //math library
#include <iomanip> //format library
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float intrst,
            prsntval,
            cmpnds,
            ftrval;
    char choice;
    //Input Data
    cout<<"Calculate the interest growth on your account"<<endl;
    cout<<"Type 1 to input the present value in $s and the interest rate in %"<<endl;
    cout<<"Type 2 to input the present value in $s and the number of years"<<endl;
    cin>>choice;
    
    //Process the Data
    cout<<"input the present value in $";
    if(choice=='1'){
        cout<<"and the interest rate in %"<<endl;
        cin>>prsntval>>intrst;
        cmpnds=72/intrst;
    }else{
        cout<<"and the number of years"<<endl;
        cin>>prsntval>>cmpnds;
        intrst=72/cmpnds;
    } ftrval=prsntval*pow((1+intrst/100),cmpnds);
    //Output the Processed Data
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"Compare the estimation to the exact calcualtion"<<endl;
    cout<<"the present value is = $ "<<prsntval<<endl;
    cout<<"the interest rate is = % "<<intrst<<endl;
    cout<<"the number of years is = "<<cmpnds<<endl;
    cout<<"$"<<2*prsntval<<" ~ $"<<ftrval<<endl;
    //Exit Stage Right!
    return 0;
}
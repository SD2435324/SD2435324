/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on July 1, 2016, 10:18 AM
 * Purpose: calculate personal best
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
    char name[50];
    float d1,d2,d3;
    float h1,h2,h3;
    float min=2,max=5;
    //Input Data
    cout<<"Input the name of the vaulter"<<endl;
    cin>>name;
    cout<<"Input the first date and height (in meters) vaulted"<<endl;
    cin>>d1>>h1;
    cout<<"Input the second date and height (in meters) vaulted"<<endl;
    cin>>d2>>h2;
    cout<<"Input the last date and height (in meters) vaulted"<<endl;
    cin>>d3>>h3;
    //Process the Data
    cout<<setprecision(0)<<fixed<<endl;
    if(h1<min){
        cout<<"Invalid input"<<endl;
    }else if(h1>max){
        cout<<"Invalid input"<<endl;
    }else if(h2<min){
        cout<<"Invalid input"<<endl;
    }else if(h2>max){
        cout<<"Invalid input"<<endl;
    }else if(h3<min){
        cout<<"Invalid input"<<endl;
    }else if(h3>max){
        cout<<"Invalid input"<<endl;
    }
    
        if(h1>h2&&h3){
            cout<<d1<<" is when "<<name<<" vaulted "<<h1<<" meters"<<endl;
        }else if(h2>h1&&h3){
            cout<<d2<<" is when "<<name<<" vaulted "<<h2<<" meters"<<endl;
        }else{
            cout<<d3<<" is when "<<name<<" vaulted "<<h3<<" meters"<<endl;
        }
            if(h2>h1&&h3){
                cout<<d2<<" is when "<<name<<" vaulted "<<h2<<" meters"<<endl;
            }else if(h1>h2&&h3){
                cout<<d1<<" is when "<<name<<" vaulted "<<h1<<" meters"<<endl;
            }else{
                cout<<d3<<" is when "<<name<<" vaulted "<<h3<<" meters"<<endl;
            }
                 if(h3>h2&&h1){
                     cout<<d3<<" is when "<<name<<" vaulted "<<h3<<" meters"<<endl;
                }else if(h2>h1&&h3){
                     cout<<d2<<" is when "<<name<<" vaulted "<<h2<<" meters"<<endl;
                }else{
                     cout<<d1<<" is when "<<name<<" vaulted "<<h1<<" meters"<<endl;
                }
    //Output the Processed Data
    
    //Exit Stage Right!
    return 0;
}
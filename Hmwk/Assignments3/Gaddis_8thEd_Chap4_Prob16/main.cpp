/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on July 1, 2016, 10:11 AM
 * Purpose: calculate running places
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
    char name1[50],name2[50],name3[50];
    float time1,time2,time3;
    float min=0;
    //Input Data
    cout<<"Input the name of the runner"<<endl;
    cin>>name1;
    cout<<"Input the time they ran"<<endl;
    cin>>time1;
    cout<<"Input the name of the runner"<<endl;
    cin>>name2;
    cout<<"Input the time they ran"<<endl;
    cin>>time2;
    cout<<"Input the name of the runner"<<endl;
    cin>>name3;
    cout<<"Input the time they ran"<<endl;
    cin>>time3;
    //Process the Data
    if(min==time1){
        cout<<"Invalid Input"<<endl;
    }else if(min==time2){
        cout<<"Invalid Input"<<endl;
    }else if(min==time3){
        cout<<"Invalid Input"<<endl;
    }else if(time1==time2){
        cout<<name1<<" and "<<name2<<" have tied"<<endl;
    }else if(time1==time3){
        cout<<name1<<" and "<<name3<<" have tied"<<endl;
    }else{
        cout<<name2<<" and "<<name3<<" have tied"<<endl;
    }
        if(time3>time1<time2){
            cout<<name1<<" is in first"<<endl;
        }else if(time1>time2<time3){
            cout<<name2<<" is in first"<<endl;
        }else{
            cout<<name3<<" is in first"<<endl;
        }
            if(time1<time2<time3){
                cout<<name2<<" is in second and "<<name3<<" is in last"<<endl;
            }else if(time1<time3<time2){
                cout<<name3<<" is in second and "<<name2<<" is in last"<<endl;
            }else if(time3<time1<time2){
                cout<<name1<<" is in second and "<<name2<<" is in last"<<endl;
            }else if(time3<time2<time1){
                cout<<name2<<" is in second and "<<name1<<" is in last"<<endl;
            }else if(time2<time1<time3){
                cout<<name1<<" is in second and "<<name3<<" is in last"<<endl;
            }else{
                cout<<name3<<" is in second and "<<name1<<" is in last"<<endl;
            }
    //Output the Processed Data
    
    //Exit Stage Right!
    return 0;
}
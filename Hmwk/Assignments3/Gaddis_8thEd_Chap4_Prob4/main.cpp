/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on July 1, 2016, 8:21 AM
 * Purpose: calculate two areas of rectangles and compare them
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
    long lngth,wdth,area;
    long lngth2,wdth2,area2;
    //Input Data
    cout<<"Input the length of the first rectangle"<<endl;
    cin>>lngth;
    cout<<"Input the width of the first rectangle"<<endl;
    cin>>wdth;
    cout<<"Input the length of the second rectangle"<<endl;
    cin>>lngth2;
    cout<<"Input the width of the second rectangle"<<endl;
    cin>>wdth2;
    
    if(lngth==wdth){
        cout<<"Error those are square dimensions"<<endl;
    }
    if(lngth2==wdth2){
        cout<<"Error those are square dimensions"<<endl;
    }
    
    //Process the Data
    area=lngth*wdth;
    area2=lngth2*wdth2;
    
    //Output the Processed Data
    if(area==area2){
        cout<<"same areas"<<endl;
    }else if(area>area2){
        cout<<"the first rectangle has a larger area "<<area<<" "<<area2<<endl;
    }else if(area<area2){
        cout<<"the second rectangle has a larger area "<<area2<<" "<<area<<endl;
    }else{
        cout<<"Error this message shouldn't display"<<endl;
    }
    //Exit Stage Right!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Shane L. Daviau
 * Created on June 20, 2016, 6:51 PM
 * Purpose: Template
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
    bool X,Y;
    
    //Input Data
    
    //Process the Data
    
    //Output the Processed Data
    cout<<"The Truth Table"<<endl;
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y ";
    cout<<endl;
    
    //first line
    X=true;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X||Y?'T':'F')<<"     ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"     ";
    cout<<endl;
    
    //second line
    X=true;Y=false;
     cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X||Y?'T':'F')<<"     ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"     ";
    cout<<endl;
    
    //third line
    X=false;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X||Y?'T':'F')<<"     ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"     ";
    cout<<endl;
    
    //fourth line
    X=false;Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X||Y?'T':'F')<<"     ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<"     ";
    cout<<endl;
    //Exit Stage Right!
    return 0;
}
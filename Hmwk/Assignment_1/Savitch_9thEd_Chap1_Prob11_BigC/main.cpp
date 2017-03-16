/* 
  File:   main.cpp
  Author: Marissa Dominguez
  Created on February 28, 2017, 8:00PM
  Purpose:  Output Big C
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char c;
    
    
    
    //Input values
    cout<<"This program outputs a large block letter C composed with a letter of your choice."<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"A big C with the letter"<<endl;
    cout<<c;
    
    cout<<"    "<<c<<" "<<c<<" "<<c<<endl;
    cout<<"  "<<c<<"       "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<"  "<<c<<"       "<<c<<endl;
    cout<<"    "<<c<<" "<<c<<" "<<c<<endl;
    //Exit stage right!
    return 0;
}
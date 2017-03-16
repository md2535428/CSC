/* 
  File:   main.cpp
  Author: Marissa Dominguez
  Created on February 28, 2017, 8:00PM
  Purpose:  Display 1.8
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
    
    //Input values
    int Width, Height, totalLength;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the width in feet:\n";
    
    cin >> Width;
    
    cout << "Enter the height in feet:\n";
    cin >> Height;
    totalLength = Width * Height;
    cout << "If the width of the rectangular area is ";
    cout << Width;
    cout << " feet\n";
    cout << "and the height of the rectangular area is ";
    cout << Height;
    cout << " feet\n";
    cout << "The total length of fence you would need to enclose the area is ";
    cout << totalLength;
    cout << " feet \n";
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}
/* 
  File:   main.cpp
  Author: Marissa Dominguez
  Created on February 28, 2017, 8:00PM
  Purpose:  Write a C++ program that reads in two integers and then outputs both their sum and their product.
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
    int int1, int2, sum, product;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the first integer:\n";
    
    cin >> int1;
    
    cout << "Enter the second integer: \n";
    cin >> int2;
    sum = int1 + int2;
    cout << "The sum of the two integers is ";
    cout << sum;
     cout << " \n";
    
    
    cout << "The product of the two integers is ";
    product = int1 * int2;
    cout << product;
    cout << " \n";
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}
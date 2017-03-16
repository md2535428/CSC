/* 
 * File:   main.cpp
 * Author: Marissa Dominguez
 * Created on February 28, 2017, 8:00PM
 * Purpose:  Calculate pocket change
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const char quarter=25, dime=10, nickel=5, penny=1;
    char nQuarters,nDimes,nNickels,nPennies;
    unsigned short total;

    
    //Initialize variables
    
    //Input data
    cout<<"This will calculate the amount of pocket change you have"<<endl;
    cout<<"How many quarters, dimes, nickels and pennies do you have?"<<endl;
    cout<<"Type all of the values on one line."<<endl;
    cin>>nQuarters>>nDimes>>nNickels>>nPennies;
    
    //Map inputs to outputs or process the data
    total = ((nQuarters-48)*quarter)  +
            ((nDimes  -'0')*dime)             +
            ((nNickels-48)*nickel)    +
            ((nPennies -'0')*penny);
            
            
    //Output the transformed data
    cout<<"The coins in your pocket is equal to "<<endl;
    cout << total;
    cout<<" cents \n";
    
            
    //Exit stage right!
    return 0;
}


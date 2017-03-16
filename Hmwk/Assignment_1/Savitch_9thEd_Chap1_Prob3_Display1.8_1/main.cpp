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
    int number_of_pods, peas_per_pod, total_peas;
    
    cout << "Hello \n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods / peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    cout << "Good-bye\n";
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}
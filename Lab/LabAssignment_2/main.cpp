/* 
 * File:   main.cpp
 * Author: Marissa Dominguez
 * Created on March 1, 2017, 10:00PM
 * Purpose:  Calculate the percentage Gas Tax on a gallon of gas, and the 
 * percentage profit made from a gallon of gas given
 * References: http://watchdog.org/232083/california-gas-taxes
 *             http://www.forbes.com/2011/05/10/oil-company-earnings.html 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.00;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float excisetax=0.39f, // 39 Cents Excise Tax/Gallon
          calsalestax=0.08f, //8% California Sales Tax
          captradetax=0.10f, //10 Cent Cap and Trade "Fee"- Tax on a Tax/Gallon
          federaltax=0.184f, //18.4 Cents Federal Tax Tax/Gallon
          oilprofit=0.07f; //7 Cents/Gallon Oil Company Profit
    float pumpPr,basePr; //Price Per Gallon
    float percenttax, percentprofit; //Percent Tax and Percent Profit
                               
    //Initialize variables
    
    //Input data
    cout<<"The amount it cost you per gallon the last time you put gas in your car:\n"<<endl;
    cin>>pumpPr;
    
    //Map inputs to outputs or process the data
    basePr=(pumpPr-federaltax-excisetax-captradetax)/(1+calsalestax);
    percenttax=(basePr*calsalestax+federaltax+excisetax+captradetax)/basePr*PERCENT;
    percentprofit=oilprofit/basePr*PERCENT;
    
    //Output the transformed data
    cout<<"Federal tax per gallon           = $"<<federaltax<<endl;
    cout<<"California tax per gallon        = $"<<excisetax<<endl;
    cout<<"Cap and trade tax per gallon     = $"<<captradetax<<endl;
    cout<<"California sales tax per gallon  = $"<<calsalestax*basePr<<endl;
    cout<<"Base Price per gallon            = $"<<basePr<<endl;
    cout<<"Oil company profit per gallon    = "<<percentprofit<<"%"<<endl;
    cout<<"Total percentage tax per gallon  = "<<percenttax<<"%"<<endl;
    
    
    //Exit stage right!
    return 0;
}


//Huan Chen Assignment05-Program04
// Program #4
// Write a program that uses nested loops to collect data and calculate the average rainfall over a period of years. The program should first ask for the number of years. The outer loop will iterate once for each year. The inner loop will iterate twelve times, once for each month. Each iteration of the inner loop will ask for the inches of rainfall for that month.
// After all iterations, the program should display the number of months, the total inches of rainfall, and the average rainfall per month for the entire period. Do not accept a number less than 1 for the number of years. Do not accept negative number for the monthly rainfall.
// • Input validation not required
// • Only use for loops and nested loops for computation
// • Use a const for the number of months in the year. (for ease of testing interactively,
// consider a calendar with only 4 months in a year, your program should be able to work by just changing this constant)
// Sample Output:
// This program will calculate average rainfall over a
// period of years.  How many years do you wish to average? 2
// Year 1
// Number of inches of rain for month  1? 4
// Number of inches of rain for month  2? 5
// Number of inches of rain for month  3? 6
// Number of inches of rain for month  4? 7
// Number of inches of rain for month  5? 8
// Number of inches of rain for month  6? 9
// Number of inches of rain for month  7? 1
// Number of inches of rain for month  8? 2
// Number of inches of rain for month  9? 3
// Number of inches of rain for month 10? 4
// Number of inches of rain for month 11? 5
// Number of inches of rain for month 12? 6
// Year 2
// Number of inches of rain for month  1? 7
// Number of inches of rain for month  2? 8
// Number of inches of rain for month  3? 9
// Number of inches of rain for month  4? 4
// Number of inches of rain for month  5? 5
// Number of inches of rain for month  6? 6
// Number of inches of rain for month  7? 7
// Number of inches of rain for month  8? 8
// Number of inches of rain for month  9? 9
// Number of inches of rain for month 10? 1
// Number of inches of rain for month 11? 2
// Number of inches of rain for month 12? 3
// Over a period of 24 months, 129 inches of rain fell.
// Average monthly rainfall for the period is 5.375 inches.
// Press any key to continue . . .
#include<iostream>
using namespace std;
int main(){
    double years, inches, months, totalInches=0;
    
   
    cout << "This program will calculate average rainfall over a period of years. How many years do you wish to average?";
    cin >> years;
    double totalMonths = years * 12;
    for(int year =1; year <= years; year++){
        cout<<"Year "<<year <<"\n";
        
        for(int i = 1; i <= 12; i++){
            cout << "Number of inches of rain for month "<< i <<"?";
            cin >>inches;
            totalInches += inches;
            
        }
        
    
        
    }
    double avg = totalInches/totalMonths;
    cout << "Over a period of "<< totalMonths <<" months, " << totalInches << " inches of rain fell."<<"\n";
    cout << "Average monthly rainfall for the period is " << avg <<" inches."<<"\n";
}
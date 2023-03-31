//Huan Chen Assignment05-Program03

// Write a program that calculates how much a person would earn over a period of time if his or her salary is one penny the first day and two pennies the second day, and continues to double each day. The program should ask the user for the number of days. Display the table showing how much the salary was for each day, and then show the total pay at the end of the period. The output should be displayed in a dollar amount, not the number of pennies. Do not accept a number less than 1 for the number of days worked.
// • Use a do-while loop for input validation
// • Use a for loop to calculate the pay increase and display the table
// Sample Output:
// For how many days will the pay double? 6
// Day       Total Pay
// ---------------------
// 1 $0.01 2 $0.02 3 $0.04 4 $0.08 5 $0.16 6 $0.32
// ---------------------
// Total     $   0.63
// Press any key to continue . . .
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double pay = 0.01, pays, total=0;
    int day=0, days;

    do{
    cout << "For how many days will the pay double?";
    cin >> days;
    cout << "Day" << "\t\t" << "Total Pay"<<"\n";
    cout << "------------"<<"\n";

    for(day = 1; day <= days; day++){
        cout << day << "\t\t" << pay <<"\n";
       
        total += pay;
        pay *=2;
        

    }
        
    cout << "Total"<< "\t\t" <<total<<"\n";

    } while(days >= 1);
        cout << "Error. Entered days must be greater than 1.";
};

//Huan Chen Assignment05-Program02 using do-while loops
// Program #1 & #2 (NOTE: TWO DIFFERENT PROGRAMS)
// The distance a vehicle travels can be calculated as follows: distance = speed * time. For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.
// Write a program that asks the user for the speed of a vehicle (in miles per hours) and how many hours it has traveled. The program should then use a loop to display the distance the vehicle has traveled for each hour of that time period. Do not accept a negative number for speed and do not accept any value less than 1 for time traveled.
// • Program #1: Write only using while loops
// • Program #2: Write only using do-while loops
// • Program should loop until the user enters correct data [INPUT VALIDATION]
// Sample Output:
// What is the speed of the vehicle in mph? 50
// How many hours has it traveled? -4
// How many hours has it traveled? 4
// Hour  Distance Traveled
// -------------------------------
// 1 50
// 2 100
// 3 150
// 4 200
// Press any key to continue . . .
#include <iostream>
using namespace std;



int main(){
    int hour=1, speed, distance,hours;
    
    cout << "What is the speed of the vehicle in mph?";
    cin >> speed;
    cout << "How many hours has it traveled?" ;
    cin >> hours;
    do{
        if(speed <= 0 || hours <= 0){
            cout << "Invalid answer. Speed and hours must be greater than 0.";
            return 0;
        }
        cout << "Hour     " << "Distance Traveled" << "\n";
            
            cout << "----------------------"<< "\n";
            while(hours >= 1 ){
                distance = speed * hour;
                
                
                cout << hour << "\t\t\t" << distance <<endl;
               
                hour++;
                if (hour > hours){
                    break;
                }
            
            }
    }while(speed < 0 && hours > 1);

    
}
/*
Author: Derek Ni
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 1 A

Description: The code asks the user for 2 numbers and calculates which 
of the 2 numbers have a smaller value. Then it will give the smaller one. 
But I added if they are the same, then it will say that they have the same value.
*/

#include <iostream>
using namespace std;

int main(){
    int firstnum;
    int secondnum;
    cout << "Enter the first number: " << endl, cin >> firstnum;
    cout << "Enter the second number: " << endl, cin >> secondnum;

    if (firstnum > secondnum){
        cout << "The smaller of the two is " << secondnum;
    
    } else if (firstnum < secondnum) {
        cout << "The smaller of the two is " << firstnum;
    } else if (firstnum == secondnum){
        cout << "Both numbers are the same value";
    }
    cout << endl;
}
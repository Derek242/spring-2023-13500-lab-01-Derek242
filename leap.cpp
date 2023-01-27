/*
Author: Derek Ni
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 1 C

Description: Function asks for a year and will determine if its a commmon or leap year
*/

#include <iostream>
using namespace std;

int main() {
    int year; 
    cout << "Enter year: ", cin >> year;

    if (year % 4 != 0) {
        cout << "Common year";
    } else if (year % 100 != 0) {
        cout << "Leap Year";
    } else if (year % 400 != 0) {
        cout << "Common year";
    } else {
        cout << "Leap year";
    }
    cout << endl;
}
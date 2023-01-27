/*
Author: Derek Ni
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 1 D

Description: Asking the user for a year and a month input and output the specific amount of days within that month if its either a leap or a common year
*/

#include <iostream>
using namespace std;

int main () {
    int year; int month; 
    cout << "Enter year: ", cin >> year;
    cout << "Enter month: ", cin >> month;
    if (year % 4 != 0) {
        if (month == 2){
            cout << "28 days";
        } else if (month % 2 ==0 && month <= 7) {
            cout << "30 days";
        } else if (month > 7 && month % 2 == 1) {
            cout << "30 days";
        } else {
            cout << "31 days";
        }
    } else if (year % 100 != 0) {
        if (month == 2){
            cout << "29 days";
        } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            cout << "31 days";
 
        } else {
            cout << "30 days";
        }
    } else if (year % 400 != 0) {
        if (month == 2){
            cout << "28 days";
        } else if (month % 2 ==0 && month <= 7) {
            cout << "30 days";
        } else if (month > 7 && month % 2 == 1) {
            cout << "30 days";
        } else {
            cout << "31 days";
        }
    } else {
        if (month == 2){
            cout << "29 days";
        } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            cout << "31 days";
 
        } else {
            cout << "30 days";
        }
    }
    cout << endl;

}
/*
Author: Derek Ni
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 1 B

Description: The function ask for 3 number inputs and will return the smallest
of the 3. In addition, I included an extra if they all equal.
*/

#include <iostream>
using namespace std;

int main(){
    int x; int y; int z;
    cout << "Enter the first number: ", cin >> x;
    cout << "Enter the second number: ", cin >> y;
    cout << "Enter the third number: ", cin >> z;
    if (x < z && x < y){
        cout << "The smaller of the three is: " << x;

    } else if (y < x && y < z){
        cout << "The smaller of the three is: " << y;

    } else if (z < x && z <y){
        cout << "The smaller of the three is: " << z;
    } else if (z == x){
        cout << "The numbers are all equal";
    }

    cout << endl;
}

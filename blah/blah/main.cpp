/*
 * project3.cpp
 *
 *  Created on: Oct 5, 2017
 *      Author: charissa
 */
//Project #3 for Charissa Martin
//18. Interest Earned

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;
    int Times;
    float Principal, Rate, Amount;
    
    cout << "What is your first name?\n";
    cin >> firstName;
    cout << "What is your last name?\n";
    cin >> lastName;
    cout << "What is the principal balance?\n";
    cin >> Principal;
    cout << "What is the interest rate?\n";
    cin >> Rate;
    cout << "How many times is interest compounded per year?\n";
    cin >> Times;
    Amount = Principal * pow((1 + ((Rate / 100) / Times)),Times);
    cout << firstName << " " << lastName << " has a total amount of $" << Amount <<" in the savings account.\n";
    
    
    return 0;
}

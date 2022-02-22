/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Project 1 B
Takes in cin a number of one or more positive integers to make a calculator.*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    int total = 0;
    //num is input

    char plus = '+';
    char minus = '-';
    //char to take in addition and subtraction operators.

    while(cin >> num and cin >> minus)
    {
        total = total + num;
    if(minus == '-')
    {
        total = total - num;
    }
    }
    cout << total << endl;
}

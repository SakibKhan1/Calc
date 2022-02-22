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

    char plus = '+';
    char minus = '-';

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

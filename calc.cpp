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

    char sign;
    //char for +/- operators
    while(cin >> num)
    {
        if(sign == '+')
        {
            total += num;
        } else if(sign == '-'){
            total -= num;
        } else
        {
            total - num;
        }
        cin >> sign;
    }
    cout << total << endl;
    //prints result

    return 0;
}

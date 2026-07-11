// Question 1: Write a program that takes two integers from the user and prints the following:
//1. Sum of the two numbers
//2. Product of the two numbers

#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter the first Number:";
    cin>>num1;
    cout<<"Enter the second Number:";
    cin>>num2;
    cout<<"Sum of the two numbers is: "<<num1+num2<<endl;
    cout<<"Product of the two numbers is: "<<num1*num2<<endl;
    return 0;
}

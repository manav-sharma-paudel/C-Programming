// Write a program to input 10 double-precision floating-point numbers from the
// user, store them in an array, and then compute mean and standard deviation of the array. Note
// that the standard deviation σ of a collection of numbers xj, j = 1,2,..., N is given by
// σ = √(Σ(xi - x̅)² / N)
// where x̅ is the mean of the numbers.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float arr[10], sum = 0, mean, stddev = 0;
    cout << "Enter 10 double-precision floating-point numbers: " << endl;
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    mean = sum / 10;
    for(int i = 0; i < 10; i++){
        stddev += pow(arr[i] - mean, 2);
    }
    stddev = sqrt(stddev / 10);
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << stddev << endl;
    return 0;
}

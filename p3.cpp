//Reference and Pointer in C++

#include <iostream>
using namespace std;

int main(){
int a = 10;
int* ptr = &a;

cout << "ptr = " << ptr <<endl;
cout << "&ptr = " << &ptr <<endl;
cout << "&a = " << &a <<endl;
cout << "a = " << a <<endl;
cout << "*ptr = " << *ptr <<endl;

*ptr = 20;
cout << "a = " << a <<endl;
}

// ptr = 0x16bae6c5c
// &ptr = 0x16bae6c50
// &a = 0x16bae6c5c
// a = 10
// *ptr = 10
// a = 20
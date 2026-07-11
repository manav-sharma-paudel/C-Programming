// Implement a class called Student, shown in the class diagram below:
// Data members:
// Name of the student
// Array of the ID of the books the student has borrowed
// Member functions:
// getName() returns the name of the student
// setName(string) sets the name of the student
// issueBook(long) adds the ID of the book borrowed by the student to the
// array of borrowed books’ ID
// getIssuedBooks() returns the IDs of the borrowed books

#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    long issuedBooks[10];
    int bookCount;

public:
   void setName(string studentName){
    name = studentName;
    bookCount = 0;
   }
   string getName(){
    return name;
   }

    void issueBook(long bookID){
            issuedBooks[bookCount] = bookID;
            bookCount++;
    }
    void getIssuedBooks(){
        cout << "Issued Book IDs: ";
        for(int i = 0; i < bookCount; i++){
            cout << issuedBooks[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Student student;
    string name;
    long bookID;

    cout << "Enter the name of the student: ";
    cin>>name;
    student.setName(name);

    cout << "Enter the IDs of the 10 books borrowed by the student" << endl;

    for(int i=0;i<10;i++){
        cin >> bookID;
        student.issueBook(bookID);
    }

    cout << "Student Name: " << student.getName() << endl;
    student.getIssuedBooks();

    return 0;
}
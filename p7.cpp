// Define an enum called Grade, with the following values: A, A-, B, B-, C, C+,C, C-, D and F.
// Modify Student class (defined in previous question) to store the grade of the student
// by adding a data member of type Grade and its getter and setter.

#include <iostream>
#include <string>
using namespace std;

enum Grade { A, A_minus, B, B_minus, C_plus, C, C_minus, D, F };

class Student {
string name;
Grade grade;

    public:

    void setName(string studentName) {
    name = studentName;
        }

    string getName() {
    return name;
        }

    void setGrade(Grade g) {
    grade = g;
        }

    Grade getGrade() {
    return grade;
        }
};

// Converts a numeric score (0-100) into the matching Grade.
Grade scoreToGrade(int score) {
    if (score >= 90) return A;
    if (score >= 80) return A_minus;
    if (score >= 70) return B;
    if (score >= 60) return B_minus;
    if (score >= 50) return C_plus;
    if (score >= 40) return C;
    if (score >= 30) return C_minus;
    if (score >= 20) return D;
    return F; 
}

// Converts a Grade into its readable letter form.
string gradeToString(Grade g) {
    switch (g) {
        case A: return "A";
        case A_minus: return "A-";
        case B: return "B";
        case B_minus: return "B-";
        case C_plus: return "C+";
        case C: return "C";
        case C_minus: return "C-";
        case D: return "D";
        case F: return "F";
        default: return "Unknown";
    }
}

int main(){
    Student s1;
    string name;
    int grade;

    cout << "Enter the name of the student: ";
    cin >> name;
    s1.setName(name);

    cout << "Enter the grade of the student (90+ for A, 89-80 for A-, 79-70 for B, 69-60 for B-, 59-50 for C+, 49-40 for C, 39-30 for C-, 29-20 for D, 19-0 for F): ";
    cin >> grade;
    s1.setGrade(scoreToGrade(grade));
    
    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student Grade: " << gradeToString(s1.getGrade()) << endl;
    return 0;
}
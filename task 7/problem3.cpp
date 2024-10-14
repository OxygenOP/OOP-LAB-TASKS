#include <iostream>

using namespace std;

class Student {
    protected:
        int rollNo;
        int marks1, marks2;

    public:
        void get() {
            cout << "Enter rollnumber: ";
            cin >> rollNo;
            cout << "Enter marks of subject 1: ";
            cin >> marks1;
            cout << "Enter marks of subject 2: ";
            cin >> marks2;
        }
};

class Sports {
    protected:
        int sportsMark;

    public:
        void getsm() {
            cout << "Enter marks in sports: ";
            cin >> sportsMark;
        }
};

class Statement : public Student, public Sports {
    public:
        void display() {
            int total = marks1 + marks2 + sportsMark;
            float average = total / 3.0;
            cout << "Roll Number: " << rollNo << endl;
            cout << "Total Marks: " << total << endl;
            cout << "Average Marks: " << average << endl;
        }
};

int main() {
    Statement student;

    student.get();
    student.getsm();  
    student.display();

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display() {
        cout << "Roll No: " << rollNo
             << "\nName: " << name
             << "\nMarks: " << marks << "\n";
    }
};

class StudentManagement {
private:
    vector<Student> students;

public:
    void addStudent() {
        int roll;
        string name;
        float marks;

        cout << "Enter Roll Number: ";
        cin >> roll;

        for (auto &s : students) {
            if (s.rollNo == roll) {
                cout << "Roll number already exists!\n";
                return;
            }
        }

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;

        if (marks < 0 || marks > 100) {
            cout << "Invalid marks!\n";
            return;
        }

        students.emplace_back(roll, name, marks);
        cout << "Student added successfully!\n";
    }

    void displayAll() {
        if (students.empty()) {
            cout << "No student records found.\n";
            return;
        }

        for (auto &s : students) {
            s.display();
            cout << "-------------------\n";
        }
    }

    void searchStudent() {
        int roll;
        cout << "Enter Roll Number to Search: ";
        cin >> roll;

        for (auto &s : students) {
            if (s.rollNo == roll) {
                s.display();
                return;
            }
        }

        cout << "Student not found!\n";
    }

    void updateStudent() {
        int roll;
        cout << "Enter Roll Number to Update: ";
        cin >> roll;

        for (auto &s : students) {
            if (s.rollNo == roll) {
                cin.ignore();
                cout << "Enter New Name: ";
                getline(cin, s.name);

                cout << "Enter New Marks: ";
                cin >> s.marks;

                if (s.marks < 0 || s.marks > 100) {
                    cout << "Invalid marks!\n";
                    return;
                }

                cout << "Student updated successfully!\n";
                return;
            }
        }

        cout << "Student not found!\n";
    }

    void deleteStudent() {
        int roll;
        cout << "Enter Roll Number to Delete: ";
        cin >> roll;

        for (int i = 0; i < students.size(); i++) {
            if (students[i].rollNo == roll) {
                students.erase(students.begin() + i);
                cout << "Student deleted successfully!\n";
                return;
            }
        }

        cout << "Student not found!\n";
    }
};

int main() {
    StudentManagement sm;
    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "0. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sm.addStudent();
                break;
            case 2:
                sm.displayAll();
                break;
            case 3:
                sm.searchStudent();
                break;
            case 4:
                sm.updateStudent();
                break;
            case 5:
                sm.deleteStudent();
                break;
            case 0:
                cout << "Program terminated.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
} 
 /* Output :
===== STUDENT MANAGEMENT SYSTEM =====
1. Add Student
2. Display All Students
3. Search Student
4. Update Student
5. Delete Student
0. Exit
Enter Your Choice:
Enter Your Choice: 1

Enter Roll Number: 101
Enter Name: Rahul Patil
Enter Marks: 85

Student added successfully!
Enter Your Choice: 1

Enter Roll Number: 102
Enter Name: Amit Sharma
Enter Marks: 90

Student added successfully!
Enter Your Choice: 2

Roll No: 101
Name: Rahul Patil
Marks: 85
-------------------
Roll No: 102
Name: Amit Sharma
Marks: 90
-------------------
Enter Your Choice: 3

Enter Roll Number to Search: 101

Roll No: 101
Name: Rahul Patil
Marks: 85
Enter Roll Number to Search: 105
Student not found!
Enter Your Choice: 4

Enter Roll Number to Update: 101
Enter New Name: Rahul Kumar
Enter New Marks: 95

Student updated successfully!
Enter Your Choice: 5

Enter Roll Number to Delete: 102
Student deleted successfully!
Enter Your Choice: 2

Roll No: 101
Name: Rahul Kumar
Marks: 95
-------------------
Enter Your Choice: 0

Program terminated.
*/

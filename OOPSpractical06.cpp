
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Student
{
    string name;
    int age, rollNo;
public:
    void getData()
    {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
    void writeFile()
    {
        ofstream fout("student.txt");
        fout << "Student Details" << endl;
        fout << "Name: " << name << endl;
        fout << "Age: " << age << endl;
        fout << "Roll Number: " << rollNo << endl;
        fout.close();
        cout << "\nData written successfully.\n";
    }
    void readFile()
    {
        ifstream fin("student.txt");
        string line;
        cout << "\nStudent Details from File:\n";
        while (getline(fin, line))
        {
            cout << line << endl;
        }
        fin.close();
    }
};
int main()
{
    Student s;
    s.getData();
    s.writeFile();
    s.readFile();
    return 0;
}
 

/* Output:
PS C:\Users\student\Desktop\Trupti Kare> cd 'c:\Users\student\Desktop\Trupti Kare\output'
PS C:\Users\student\Desktop\Trupti Kare\output> & .\'Filehandling78.exe'
Enter student name: somning mali
Enter age: 21
Enter roll number: 546 

Data written successfully.

Student Details from File:
Student Details
Name: somning mali
Age: 21
Roll Number: 546
PS C:\Users\student\Desktop\Trupti Kare\output> ^C
PS C:\Users\student\Desktop\Trupti Kare\output> ^C
PS C:\Users\student\Desktop\Trupti Kare\output> */

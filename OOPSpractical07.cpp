
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    float income;
    string city, vehicle;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Monthly Income: ";
    cin >> income;

    cout << "Enter City: ";
    cin >> city;

    cout << "Do you have a 4-wheeler? (Yes/No): ";
    cin >> vehicle;
    try
    {
        if (age < 18 || age > 55)
            throw "Age must be between 18 and 55";

        if (income < 50000 || income > 100000)
            throw "Income must be between 50000 and 100000";

        if (city != "Pune" && city != "Mumbai" &&
            city != "Bangalore" && city != "Chennai")
            throw "City must be Pune, Mumbai, Bangalore or Chennai";

        if (vehicle != "Yes" && vehicle != "yes")
            throw "User must have a 4-wheeler";

        cout << "\nAll conditions are satisfied!" << endl;
    }
    catch (const char* msg)
    {
        cout << "\nException: " << msg << endl;
    }
    return 0;
}

/*Output : 

PS C:\Users\student\Desktop\Helllo> cd "c:\Users\student\Desktop\Helllo\" ; if ($?) { g++ UDEHS78.cpp -o UDEHS78 } ; if ($?) { .\UDEHS78 }
Enter Age: 21
Enter Monthly Income: 26986.23
Enter City: Pune MH
Do you have a 4-wheeler? (Yes/No): 
Exception: Income must be between 50000 and 100000
PS C:\Users\student\Desktop\Helllo> */

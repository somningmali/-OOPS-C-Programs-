
#include <iostream>
using namespace std;
template <typename T>
void sortArray(T arr[], int n)
{
    T temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[] = {5, 2, 8, 1, 3};
    float b[] = {4.5, 2.3, 8.1, 1.2, 3.6};
    int n1 = 5;
    int n2 = 5;
    cout << "Integer Array:\n";
    sortArray(a, n1);
    cout << "Float Array:\n";
    sortArray(b, n2);
    return 0;
}

/*Output : 
PS C:\Users\student\Desktop\Helllo> cd "c:\Users\student\Desktop\Helllo\" ; if ($?) { g++ Template78.cpp -o Template78 } ; if ($?) { .\Template78 }
Integer Array:
Sorted array: 1 2 3 5 8 
Float Array:
Sorted array: 1.2 2.3 3.6 4.5 8.1 
PS C:\Users\student\Desktop\Helllo> */

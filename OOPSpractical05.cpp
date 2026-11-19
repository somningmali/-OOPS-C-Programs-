#include<iostream>
using namespace std;
class Complex {
    int real,imag;

public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    Complex operator+(Complex c)
    {
        Complex t;
        t.real=real+c.real;
        t.imag=imag+c.imag;
        return t;
    }
    Complex operator*(Complex c)
    {
        Complex t;
        t.real=real*c.real-imag*c.imag;
        t.imag=real*c.imag+imag*c.real;
        return t;
    }
    friend istream& operator>>(istream&in,Complex&c)
    {
        in>>c.real>>c.imag;
        return in;
    }
    friend ostream& operator<<(ostream&out,const Complex&c)
    {
        out<<c.real<<" + "<<c.imag<<"i";
        return out;
    }
};
int main()
{
    Complex c1,c2,c3,c4;
    cout<<"Enter first complex number: ";
    cin>>c1;
    cout<<"Enter second complex number: ";
    cin>>c2;
    c3=c1+c2;
    c4=c1*c2;
    cout<<"First = "<<c1<<endl;
    cout<<"Second = "<<c2<<endl;
    cout<<"Addition = "<<c3<<endl;
    cout<<"Multiplication = "<<c4<<endl;
    return 0;
}

/*OUT PUT : 
PS C:\Users\admin> & "c:\Users\admin\.vscode\extensions\utsav-56.crun-1.5.0\binaries\win32\crun.exe" "c:\Users\admin\Desktop\somning78.cpp"
Enter first complex number: 4 
5
Enter second complex number: 4
1
First = 4 + 5i
Second = 4 + 1i
Addition = 8 + 6i
Multiplication = 11 + 24i
PS C:\Users\admin> & "c:\Users\admin\.vscode\extensions\utsav-56.crun-1.5.0\binaries\win32\crun.exe" "c:\Users\admin\Desktop\somning78.cpp"
Enter first complex number: */

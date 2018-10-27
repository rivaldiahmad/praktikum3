#include<iostream>
using namespace std;

int main()
{
    int A,B,C;
    cout<<"DATA KE-1: ";
    cin>> A;
    cout<<"DATA KE-2: ";
    cin>> B;
    cout<<"DATA KE-3: ";
    cin>> C;
    if (A==B)
    {
        if (A==C)
            cout << "Segitiga Sama Sisi";
        else
            cout << "Segitiga Sama Kaki";
    }else{
    if (A==C)
        cout << "Segitiga Sama Kaki";
    else
    {
        if (B==C)
            cout << "Segitiga Sama Kaki";
        else
            cout << "Segitiga Sembarang";
    }
    }
}

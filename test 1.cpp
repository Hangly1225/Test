#include<iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "\nb = ";
    cin >> b;
    cout << "\nc = ";
    cin >> c;
    if (a >= b + c || b >= a + c || c >= a + b)
        cout << "This is not triangle!";
    else 
        cout << a + b + c << endl;
    return 0;
}
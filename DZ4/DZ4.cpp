// DZ4.cpp 
//

#include <iostream>

using namespace std;

const string TRUE_STR = "True";
const string FALSE_STR = "False";

//Exercise 4.1
void e1() {
    int a, b;
    cout << "Exercise 4.1: Enter two numbers: " << endl;
    cin >> a >> b;
    if (a + b >= 10 && a + b <= 20)
    {
        cout << TRUE_STR << endl;
    }
    else
    {
        cout << FALSE_STR << endl;
    }
}

//Exercise 4.2
void e2() {
    const int A = 5, B = 10;
    cout << "Exercise 4.2: ";
    if (( A == 10 && B == 10 ) || A + B == 10)
    {
        cout << TRUE_STR << endl;
    }
    else
    {
        cout << FALSE_STR << endl;
    }
}

//Exercise 4.3
void e3() {
    cout << "Exercise 4.3: Your numbers ";
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

//Exercise 4.4
bool isPrime(int a) {
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

void e4() {
    int a;
    cout << "Exercise 4.4: Enter number ";
    cin >> a;
    if (isPrime(a))
    {
        cout << a << " is prime number.";
    }
    else
    {
        cout << a << " is not prime number.";
    }
    cout << endl;
}

//Exercise 4.5
void e5() {
    int a = 0;
    do
    {
        cout << "Exercise 4.5: Enter year (1 - 3000) ";
        cin >> a;
    } while (a < 1 || a > 3000);
    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
    {
        cout << a << " is leap yaer.";
    }
    else
    {
        cout << a << " is not leap yaer.";
    }
    cout << endl;
}
int main()
{
    e1();
    e2();
    e3();
    e4();
    e5();
    return 0;
}

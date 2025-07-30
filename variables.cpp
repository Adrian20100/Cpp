#include <iostream>
#include <math.h>
#include <stdlib.h>

int main()
{
    using namespace std;

    cout << "dimensione in byte di int:" << sizeof(int) << endl;
    cout << "dimensione in byte di short int:" << sizeof(short) << endl;
    cout << "dimensione in byte di long int:" << sizeof(long) << endl;
    cout << "dimensione in byte di float:" << sizeof(float) << endl;
    cout << "dimensione in byte di double:" << sizeof(double) << endl;
    cout << "dimensione in byte di char:" << sizeof(char) << endl;
    cout << "dimensione in byte di bool:" << sizeof(bool) << endl;

    int a;
    cout << "a = " << a << endl;

    int x = 123;
    cout << "x = " << x << endl;

    x = 124;
    cout << "x = " << x << endl;

    double y = 123.5;
    cout << "y = " << y << endl;

    y = 124.5;
    cout << "y = " << y << endl;

    cout << "} = " << '}' << endl;

    char carattere = 'a';
    cout << "carattere = " << carattere << endl;

    carattere = '\212';
    cout << "carattere = " << carattere << endl;

    cout << '5' << endl;
    cout << "5" << endl;
    cout << 5 << endl;
    cout << 5. << endl;

    int hour, minute;
    char colon;
    hour = 11;
    minute = 59;
    colon = ':';

    cout << "The current time is " << hour << colon << minute << endl;

    cout << "2*3-1 vale " << 2 * 3 - 1 << " mentre 2*(3-1) vale " << 2 * (3 - 1) << endl;
    cout << "A causa degli arrotondamenti (59*100)/60 vale" << endl
         << (59 * 100) / 60 << endl;
    cout << "Invece 59*(100/60) vale" << endl
         << 59 * (100 / 60) << endl;

    char letter;
    letter = 'a' + 1;
    cout << letter << endl;

    cout << "numero del carattere = " << (int)letter << endl;

    return 0;
}

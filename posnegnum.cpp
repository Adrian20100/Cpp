#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int myNum = 10;
    if (myNum > 0)
    {
        cout << "The value is a positive number. \n";
    }
    else if (myNum < 0)
    {
        cout << "The value is a negative number. \n";
    }
    else
    {
        cout << "The value is zero";
    }
    return 0;
}

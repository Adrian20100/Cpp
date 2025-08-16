#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int numbers = 123456;

    int revNumbers = 0;

    while (numbers)
    {

        revNumbers = revNumbers * 10 + numbers % 10;

        numbers /= 10;
    }

    cout << "Reversed numbers: " << revNumbers << "\n";
    return 0;
}

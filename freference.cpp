#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void changeValue(int &num)
{
    num = 50;
}

int main()
{
    int value = 10;
    changeValue(value);
    cout << value;
    return 0;
}

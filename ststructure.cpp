#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    struct student
    {
        string name;
        int age;
        char grade;
    };

    student student1;
    student1.name = "Liam";
    student1.age = 35;
    student1.grade = 'A';

    student student2;
    student2.name = "Adrian";
    student2.age = 24;
    student2.grade = 'C';

    cout << "Name: " << student1.name << "\n";
    cout << "Age: " << student1.age << "\n";
    cout << "Grade: " << student1.grade << "\n\n";

    cout << "Name: " << student2.name << "\n";
    cout << "Age: " << student2.age << "\n";
    cout << "Grade: " << student2.grade << "\n";

    return 0;

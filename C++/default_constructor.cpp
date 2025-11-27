#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    float gpa;

    Student()
    {
        // default constructor
    }

    Student(string s, int r, float g) // Parameterised constructor
    {
        name = s;
        rno = r;
        gpa = g;
    }

    
};
int main()
{
    Student s1("Anshul", 76, 8.9);

    cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;

    Student s2;

    s2.name = "Prince";
    s2.rno = 45;
    s2.gpa = 7.9;
    cout << s2.name << " " << s2.rno << " " << s2.gpa << endl;

    return 0;
}
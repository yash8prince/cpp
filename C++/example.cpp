#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    float gpa;

    Student(string s, int r) // Parameterised constructor
    {
        name = s;
        rno = r;
    }
    // dosen't need default constructor in this situation
};
int main()
{
    Student s1("Yash", 74);

    s1.gpa = 8.8; // we can also  initialize like this
    s1.rno = 76;   // we can also override 74 to 76

    cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;
    // if u don't give values but print it shows garbage values

    return 0;
}
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

    Student(string s, int r)
    {
        name = s;
        rno = r;
    }

    Student(string s, int r, float g)
    {
        name = s;
        rno = r;
        gpa = g;
    }

    
};
int main()
{
    Student s1("Yash", 74); //uses 2 parameterised constructor
    s1.gpa = 8.8;

    Student s2; // uses default constructor
    s2.name = "Anshul";
    s2.rno = 45;
    s2.gpa = 7.8;

    Student s3("Tarun", 54, 7.9); // uses 3 parameterised constructor

    cout << s1.name << " " << s1.rno << " " << endl;
    cout << s2.name << " " << s2.rno << " " << s2.gpa << endl;
    cout << s3.name << " " << s3.rno << " " << s3.gpa << endl;

    return 0;
}

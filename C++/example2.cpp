#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    float gpa;

    Student(string s, int r, float g)
    {
        name = s;
        rno = r;
        gpa = g;
    }

    Student( int r,float g, string s)  // looks same but pattern is diffrent
    {
        name = s;
        rno = r;
        gpa = g;
    }
};
int main()
{
    Student s1("Yash", 74, 5.6);

    Student s2(34,9.7,"Rahul");



    cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;
    cout << s2.name << " " << s2.rno << " " << s2.gpa << endl;

    return 0;
}

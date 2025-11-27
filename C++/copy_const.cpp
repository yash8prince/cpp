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

};
int main()
{
    Student s1("Yash", 74, 5.6);

    Student s2 = s1;
    s2.name = "nefef"; //deep copy

    Student s3(s1); // this is copy constructor
    s3.name = "Vijay";  //deep copy. it dosen't change the value of s1

    cout << s1.name << " " << s1.rno << " " << s1.gpa << endl;
    cout << s2.name << " " << s2.rno << " " << s2.gpa << endl;
    cout << s3.name << " " << s3.rno << " " << s3.gpa << endl;

    return 0;
}

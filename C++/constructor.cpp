#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    float gpa;
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
    
    return 0;
}
// if you don't make any constructor default constructor is formed by default

// Student(){
//  }              default constructor is always empty
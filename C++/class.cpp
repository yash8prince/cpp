#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int age;
        int rno;
        float gpa;
};

int main() {
    
    Student s1;
    s1.name = "Yash Prince";
    cout << "Enter age for " << s1.name << ": ";
    cin >> s1.age;
    s1.rno = 76;
    s1.gpa = 8.5;

    Student s2;
    s2.name = "Anshul";
    cout << "Enter age for " << s2.name << ": ";
    cin >> s2.age;
    s2.rno = 45;
    s2.gpa = 7.8;

    cout << s1.name << " " << s1.age << " years old" << endl;
    cout << s2.name << " " << s2.age << " years old" << endl;

    return 0;
}

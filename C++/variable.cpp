#include <iostream>
using namespace std;
int global_a = 10; // global variable

int main()
{
    int local_a = 15; // local variable

    cout << "local a: " << local_a << " global a: " << global_a << endl; // use endl  and \n for next line

    return 0;
}
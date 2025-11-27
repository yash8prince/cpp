#include <iostream>
using namespace std;

int main()
{
    int num1 = 0, num2 = 1, d;

    cout << num1 << " " << num2; // Print 0 and 1 with a space in between on the same line

    for (int i = 0; i < 10; i++)
    {
        d = num1 + num2; // Calculate the next Fibonacci number
        num1 = num2;     // Update num1
        num2 = d;        // Update num2

        cout << " " << d; // Print the next Fibonacci term with a space
    }

    return 0;
}
#include <iostream>
#include <conio.h>

int main()
{
   // clrscr(); Clear screen, may not work on all compilers
    int length;
    length = 10;
    std::cout << "The length is ";
    std::cout << length;
    getch(); // Wait for a key press
    return 0;
} // << insertion
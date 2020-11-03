// PointersV2_20201103.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    int a = 1025;
    int* p = &a;
    printf("The address is %p and the value is %d.\n", p, *p);
    *p = 7;
    printf("The address is %p and the value is %d.\n", p, *p);
    int** q = &p;
    printf("The value for *q is %p.\n",  *q); //address of a
    printf("The value for *(*q) is %d.\n", *(*q)); // - 7
    int*** r = &q;
    printf("The value for *(*r)) is %p.\n", *(*r)); // address of a
    printf("The value for *(*(*r))) is %d.\n", *(*(*r))); // - 7
    ***r = 10;  //dereferencing
    printf("The value for a is %d.\n", a); // - 10
    **q = *p + 2;
    printf("The value for *(*q) is %d.\n", *(*q)); // - 12

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

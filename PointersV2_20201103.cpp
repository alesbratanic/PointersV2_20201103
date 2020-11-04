// PointersV2_20201103.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
int SumOfAllElements(int* A) {
    int i, sum = 0;
    
    int sizeOfArray = sizeof(A) / sizeof(A[0]);
    for (i = 0;i < sizeOfArray;i++) {
        sum = sum + A[i];
    }
    printf("Size of array is: %d.\n Size of A is %d.\n Size of A[0] is %d\n", sizeOfArray, sizeof(A) , sizeof(A[0]));
    printf("Sum of all elements in array is %d\n", sum);
    return sum;
}

int main()
{
    int A[] = { 22,13,43,24,6 };
    int total = SumOfAllElements(A);
    printf("Sum of all elements in array is %d\n", total);
    //int i, sum=0;
    //int A[] = { 22,13,43,24,6 };
    //int sizeOfArray = sizeof(A)/sizeof(A[0]);
    //for (i = 0;i < sizeOfArray;i++) {
    //    sum = sum + A[i];
    //}
    //printf("Sum of all elements in array is %d\n", sum); //107

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

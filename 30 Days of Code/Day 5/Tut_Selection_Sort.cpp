/* Selection Sort Algorithm */

#include <iostream>
    using namespace std;

void swap(int *x, int *y) // This function is used for swapping the elements of the array.
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

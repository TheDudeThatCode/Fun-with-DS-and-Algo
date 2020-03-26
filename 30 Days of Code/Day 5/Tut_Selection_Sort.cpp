/* Selection Sort Algorithm */

#include <iostream>
    using namespace std;

void swap(int *x, int *y) // This function is used for swapping the elements of the array.
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Selection_Sort(int size, int arr[]) // Function for applying Selection Sort for a given array.
{
    int i, j, k;
    for (i = 0; i < size - 1; i++)
    {
        for (j = k = i ; j < size ; j++)
        {
            if (arr[j] < arr[k])
              {
                   k = j;
              }
        }
        swap(&arr[i], &arr[k]);
    }

} // End Selection_Sort function

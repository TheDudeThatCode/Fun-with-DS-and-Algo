/* This program is also available in the sorting section of this repository */

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



int main() // Main Section
{

    int arr_size;

    cout << "Enter the size of the array : ";
    cin >> arr_size; // Enter size of the array.
    int array[arr_size], i;

    cout << "\nEnter the array elements : ";
    for (i = 0; i < arr_size; i++)
    {
        cin >> array[i]; // Inserting elements into the array.
    }

    cout << "\nThe array before applying Selection Sort Algorithm : ";
    for (i = 0; i < arr_size; i++)
    {
        cout << " " << array[i]; // Printing elements of the array.
    }

    Selection_Sort(arr_size, array); // Selection_Sort function.

    cout << "\n\nThe array after applying Selection Sort Algorithm : ";
    for (i = 0; i < arr_size; i++)
    {
        cout << " " << array[i]; // Printing elements of the array.
    }

    return 0;
} // End of program

/*
**  SAMPLE INPUT OUTPUT

    Enter the size of the array : 10

Enter the array elements : 22
45
33
12
1
4
9
2
6
8

The array before applying Selection Sort Algorithm :  22 45 33 12 1 4 6 2 9 8

The array after applying Selection Sort Algorithm :  1 2 4 6 8 9 12 22 33 45




** Time Complexity of Selection Sort:-

    1. Best Case complexity : O(n) 
    2. Average Case complexity : O(n^2)
    3. Worst Case complexity : O(n^2)



** Selection Sort is neither an adaptive nor a stable algorithm.

*/

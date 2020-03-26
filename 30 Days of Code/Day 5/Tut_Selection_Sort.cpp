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

/* Optimized Bubble Sort Algorithm */

#include <iostream>
using namespace std;

/* Please note that we use optimized bubble sort to reduce the time wasted when the 
   simple bubble sort algorithm runs unnecessarily even when the array is already sorted  */

void swap(int *x, int *y) // This function is used for swapping the elements of the array.
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Optimized_Bubble_Sort(int size, int arr[]) // Function for applying Bubble Sort for a given array.
{
    int flag; /* Here we are using a flag variable just to keep track if there is any swapping happening in the the first iteration (or pass),
                  if no it means that the array is already sorted hence exit checking else continue the proccess. */

    for (int i = 0; i < size - 1; i++)
    {
        flag = 0;

        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1; // If swapping happens flag is changed to 1.
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

} // End Optimized_Bubble_Sort function

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

    cout << "\nThe array before applying Optimized Bubble Sort Algorithm : ";
    for (i = 0; i < arr_size; i++)
    {
        cout << " " << array[i]; // Printing elements of the array.
    }

    Optimized_Bubble_Sort(arr_size, array); // Optimized_Bubble_Sort function.

    cout << "\n\nThe array after applying Optimized Bubble Sort Algorithm : ";
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
6
2
6
8

The array before applying Optimized Bubble Sort Algorithm :  22 45 33 12 1 4 6 2 6 8

The array after applying Optimized Bubble Sort Algorithm :  1 2 4 6 6 8 12 22 33 45




** Time Complexity of Bubble Sort:-

    1. Best Case complexity : O(n^2) 
    2. Average Case complexity : O(n^2)
    3. Worst Case complexity : O(n^2)
   
** Time Complexity of Optimized Bubble Sort:-

    1. Best Case complexity : O(n) 
    2. Average Case complexity : O(n^2)
    3. Worst Case complexity : O(n^2)
*/

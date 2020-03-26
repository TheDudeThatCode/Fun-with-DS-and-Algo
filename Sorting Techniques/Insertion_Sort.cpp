/* This program is also available in the day 4 folder of 30 days of code section of this repository */


/* Insertion Sort Algorithm */

#include <iostream>
using namespace std;


void Insertion_Sort(int size, int arr[]) // Function for applying Insertion Sort for a given array.
{   
    int j, x;
    for (int i = 1; i < size; i++)
    {
        j = i - 1;
        x = arr[i];
        while( j > -1 && arr[j] > x )
          {
              arr[j+1] = arr[j];
              j--;
          }
        arr[j+1] = x;  
    }

} // End Insertion_Sort function

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

    cout << "\nThe array before applying Insertion Sort Algorithm : ";
    for (i = 0; i < arr_size; i++)
    {
        cout << " " << array[i]; // Printing elements of the array.
    }

    Insertion_Sort(arr_size, array); // Insertion_Sort function.

    cout << "\n\nThe array after applying Insertion Sort Algorithm : ";
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
The array before applying Insertion Sort Algorithm :  22 45 33 12 1 4 6 2 6 8
The array after applying Insertion Sort Algorithm :  1 2 4 6 6 8 12 22 33 45
** Time Complexity of Insertion Sort:-
    1. Best Case complexity : O(n)
    2. Average Case complexity : O(n^2)
    3. Worst Case complexity : O(n^2)
*/

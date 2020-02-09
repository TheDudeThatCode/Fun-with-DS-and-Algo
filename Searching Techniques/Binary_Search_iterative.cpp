/* Binary Search Algorithm by Iterative Method */

#include<iostream>
using namespace std;

/* Please note that for applying Binary Search on a given array,We need to sort the array first. */

int Binary_Search(int key, int size, int arr[]) // Function for applying Binary Search where key is the element to be searched.
{
    int low = 0, high = size-1, mid;
    while(low <= high)
    {   
        mid = (low + high) / 2;
        if ( key == arr[mid] ) // If they are equal therefore the given key value is found in the middle of the array.
          {
            return mid; // The function will return the index value of the searched element present in the array.
          }
        else if ( key < arr[mid] )   
          {
              high = mid - 1;    
          }
        else
          {
              low = mid + 1;
          }
          
    }

    return -1; // If the entered key element is not found.

} // End Binary_Search function

int main() // Main Section
{

    int key_val, arr_size;

    cout << "Enter the size of the array : ";
    cin >> arr_size; // Enter size of the array.
    int array[arr_size], i;

    cout << "\nEnter the array elements : ";
    for (i = 0; i < arr_size; i++)
    {
        cin >> array[i]; // Inserting elements into the array.
    }

    cout << "\nEnter the key value to be searched : ";
    cin >> key_val; // Insert the key value to be searched in  the array.

    int result = Binary_Search(key_val, arr_size, array); // Calling Binary_Search function and assigning its value to result.

    if (result == -1)
    {
        cout << "The given key value is not found !!";
    }

    else
    {
        cout << "The given key value is found at the index value : " << result;
    }

    return 0;
}  // End of program




/*
**  SAMPLE INPUT OUTPUT

    Enter the size of the array : 10

Enter the array elements : 2
3
4
5
6
9
10
12
13
20

Enter the key value to be searched : 13
The given key value is found at the index value : 8




** Time Complexity of Binary Search:-

    1. Best Case complexity : O(1) 
    2. Average Case complexity : O(log n)
    3. Worst Case complexity : O(log n)
*/

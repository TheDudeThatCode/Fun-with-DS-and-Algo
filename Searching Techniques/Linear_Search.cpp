/* Binary Search Algorithm by Iterative Method */

#include <iostream>
using namespace std;

int Linear_Search(int key, int size, int arr[]) // Function for applying Linear Search where key is the element to be searched.
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (key == arr[i]) // If they are equal therefore the given key value is found in the array.
        {
            return i; // The function will return the index value of the searched element present in the array.
            break;
        }
        
    }
    
    return -1; // If the entered key element is not found.

} // End Linear_Search function

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
    cin >> key_val;                                       // Insert the key value to be searched in  the array.

    int result = Linear_Search(key_val, arr_size, array); // Calling Linear_Search function and assigning its value to result.

    if (result == -1)
    {
        cout << "The given key value is not found !!";
    }

    else
    {
        cout << "The given key value is found at the index value : " << result;
    }
    
    return 0;
} // End of program



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
16

Enter the key value to be searched : 13
The given key value is found at the index value : 8


** Time Complexity of Linear Search:-

    1. Best Case complexity : O(1) 
    2. Average Case complexity : O(n)
    3. Worst Case complexity : O(n)
*/

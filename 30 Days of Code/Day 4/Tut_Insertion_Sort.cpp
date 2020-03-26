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

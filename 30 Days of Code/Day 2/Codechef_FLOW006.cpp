#include<iostream>
using namespace std;

int digit_sum( int n )  // Function for sum of digits of a number
{
    int r, sum = 0;
    while(n != 0)
      {   
          r = n % 10;
          sum = sum + r;
          n = n / 10;
      }
    return sum;  
}

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
int main()
{
    int t, num;
    cin>>t;
    while(t--)
    {
       cin>>num;
       cout<<digit_sum(num)<<endl;
    }
    return 0;
}



/*

Problem Statement :-
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input :-
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output :-
Calculate the sum of digits of N.

Constraints :-
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Example :-

Input :-
3 
12345
31203
2123

Output :-
15
9
8

*/

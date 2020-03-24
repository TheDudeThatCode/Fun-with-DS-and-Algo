#include<iostream>
using namespace std;

int remainder( int a, int b )  // Function for finding the remainder of two numbers
{
    int rem = a % b;
    return rem;  
}
int main()
{
    int t, a, b;
    cin>>t;
    while(t--)
    {
       cin>> a >> b;
       cout << remainder(a, b) << endl;
    }
    return 0;
}

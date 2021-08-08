// ******Fibonacci******

#include <iostream>
using namespace std;

int main()
{

    int n, x, y, r;

    cout << "Enter the range of Fibonacci series: " << endl;
    cin >> n;

    // LOGIC:
    /* 
    x + y = r
    0   1   1
    1   0   1
    1   1   2
    2   1   3
    3   2   5
    5   3   8
    */
    /*  We take 2 values x & y and initialize them to 0 & 1 respectively.
        x + y will give result (r).
        x will become the result (r).
        y will become x.
    */

    x = 0;
    y = 1;

    // initializing result (r) as 0 for storing sum of x & y
    r = 0;

    cout << "The Fibonacci Series of range " << n << " is: " << endl;

    // Printing zero as default for the first value cause we are starting form 0 & 1
    cout << 0 << " ";

    for (int i = 1; i < n; i++)
    {
        r = x + y;
        cout << r << " ";
        // applying logic
        y = x;
        x = r;
    }

    return 0;
}
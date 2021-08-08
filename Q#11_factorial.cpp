// ******Factorial******

#include <iostream>
using namespace std;

int main()
{

    int num, cnt;
    cout << "Enter the number: " << endl;
    cin >> num;

    // initializing 1 (For Multiplication)
    cnt = 1;

    for (int i = num; i > 0; i--)
    {
        cnt *= i;
    }

    cout << cnt << endl;
    return 0;
}
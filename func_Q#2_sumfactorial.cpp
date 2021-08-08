// ******Sum of Factorial Series******

#include <iostream>
using namespace std;

// function for factortrial of any number
int fac(int a)
{

    int cnt;

    cnt = 1;

    for (int i = a; i > 0; i--)
    {
        cnt *= i;
    }

    return (cnt);
}

int sumfac(int num)
{

    int count;
    count = 0;

    for (int i = 1; i < num + 1; i++)
    {
        // calling function and adding to count
        count += (fac(i)) / i;
    }

    return (count);
}

int main()
{
    cout << fac(5) << endl;
    cout << sumfac(5) << endl;

    return 0;
}
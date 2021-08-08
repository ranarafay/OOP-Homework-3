// ******Perfect Numbers Series******

#include <iostream>
using namespace std;

void prf_chk(int num)
{

    int cnt;

    // initializing 0 so we will store sum
    cnt = 0;

    for (int i = 1; i < num; i++)
    {

        int dev;
        // checking for perfect divisor
        dev = num % i;

        // condition for adding sum into cnt
        if (dev == 0)
        {
            cnt += i;
        }
    }

    // conditions for perfect number
    if (cnt == num)
    {
        cout << num << " " << endl;
    }
}

void prf_ser(int num)
{
    cout << "The perfect squares between 1 and " << num << " is/are: " << endl;

    for (int i = 1; i < num + 1; i++)
    {
        prf_chk(i);
    }
}

int main()
{

    prf_ser(10000);

    return 0;
}
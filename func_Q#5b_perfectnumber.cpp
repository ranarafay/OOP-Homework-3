// ******Perfect Number Check******

#include <iostream>
using namespace std;

void perf_chk(int num)
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

    // giving output of sum
    cout << "The sum of devisors of " << num << " is: " << cnt << endl;

    // conditions for perfect number
    if (cnt == num)
    {
        cout << "The number " << num << " is Perfect Number!" << endl;
    }

    else if (cnt != num)
    {
        cout << "The number " << num << " is not Perfect Number!" << endl;
    }

}


int main()
{
    perf_chk(33550336);
    return 0;
}
// ******Checking Prime Number******

#include <iostream>
using namespace std;

void chkprm(int x)
{

    // condition for prime numbers
    if (x % x == 0 && x % 1 == 0 && x % 2 != 0)
    {

        cout << "Prime!" << endl;
    }

    else
    {

        cout << "Not Prime!" << endl;
    }
}

int main()
{

    chkprm(1);

    return 0;
}
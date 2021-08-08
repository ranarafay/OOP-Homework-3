// ******Cube Root(range)******

#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number of terms: " << endl;
    cin >> num;

    for (int i = 1; i < num + 1; i++)
    {
        cout << "Number is: " << i << " and the cube of " << i << " is: " << i * i * i << endl;
    }

    return 0;
}

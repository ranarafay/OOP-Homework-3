// ******Arm Strong Number******

#include <iostream>
#include <sstream>
using namespace std;

// function for armstrong
void ast_chk(int n)
{

    int len, cnt,num;

    // for the conversion of int to string
    stringstream ss;
    string str;

    ss << n;
    ss >> str;

    // len of string for loop iteration use;
    len = str.length();

    // string to integer conversion
    num = stoi(str);

    int x = 1;
    cnt = 0;

    for (int i = 0; i < len; i++)
    {
        int di;

        // seperating the digits form integer: https://stackoverflow.com/questions/4261589/how-do-i-split-an-int-into-its-digits
        di = (num / x) % 10;
        x *= 10;

        // Cubing every digit and storing in cnt.
        cnt += (di * di * di);
    }

    cout << "The sum of cubes of every digit is: " << cnt << endl;

    // conditions for armstrong
    if (cnt == num)
    {
        cout << "The number is ArmStrong!" << endl;
    }

    else if (cnt != num)
    {
        cout << "The number is Not ArmStrong!" << endl;
    }


}

int main()
{
    ast_chk(153);
    return 0;
}
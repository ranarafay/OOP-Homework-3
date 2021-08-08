// ******Checking Palindrome Number******

// Note: this code is to be checked
#include <iostream>
#include <sstream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{

    int num;
    cout << "Please enter the number to check whether it is Palindrome or not: " << endl;
    cin >> num;

    stringstream ss,ss1;
    string str;
    string str1;

    ss << num;
    ss >> str;

    string rev;
    for (int i = str.length(); i >= 0; i--)
    {
        rev += str[i];
    }
    
    ss1 << rev;
    ss1 >> str1;


    if (rev == str1)
    {
        cout << "Yes! this number is Palindrome.";
    }
    
    


    return 0;
}
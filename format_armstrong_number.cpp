#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    //First take input as string to know the number of digits in number.
    string n;
    int rem, sum = 0, temp;
    cin >> n;

    //store length of string i.e. no of digits
    int no_of_digits = n.length();

    //type cast it to interger.
    int num = stoi(n);
    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        sum = sum + pow(rem, no_of_digits);
        num = num / 10;
    }

    if (temp == sum)
    {
        cout << "The number is a armstrong number" << endl;
    }
    else
    {
        cout << "The number is not a armstrong number" << endl;
    }

    return 0;
}

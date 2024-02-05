#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long input;
    unsigned int output = 0;
    cin >> input;
    do
    {
        output += (input % 10);
        input /= 10;
    } while (input != 0);
    cout << output;
}
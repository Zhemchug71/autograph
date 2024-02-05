#include <iostream>
#include <cmath>

int main()
{
    int input;
    double output=0;
    std::cin >> input;
    for (int i = 1; i <= input; i++)
        output += pow((-1), i + 1) / i;
    std::cout << output;
}
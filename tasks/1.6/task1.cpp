#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    bool len = false;
    bool checkSymbols = false;
    bool checkUpper = false;
    bool checkLower = false;
    bool checkNumbers = false;
    bool checkSpecSymbols = false;
    bool checkULSS = false;//checkUpperLowerSpecSymbols
    bool checkULN = false;//checkUpperLowerNumbers
    bool checkUNSS = false;//checkUpperNumbersSpecSymbols
    bool checkLNSS = false;//checkLowerNumbersSpecSymbols
    if (str.length() >= 8 && str.length() <= 14)
        len = true;
    /*
    * 33-47
    * 58-64
    * 91-96
    * 123-126
    */
    for (size_t i = 0; i < str.length(); i++)
    {
        if (char(str[i]) >= 33 && char(str[i]) <= 126)
            checkSymbols = true;//проверка на диапазон принятого символа
         if (isupper(str[i]))
            checkUpper = true;//проверка врехнего регистра
         if (islower(str[i]))
            checkLower = true;//проверка нижнего регистра
         if (char(str[i]) >= 48 && char(str[i]) <= 56)
            checkNumbers = true;//проверка на цифры
         if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
             checkSpecSymbols = true;//проверка на специальные символы
     }
    if (checkUpper && checkLower && checkSpecSymbols)
        checkULSS = true;
    if (checkUpper && checkLower && checkNumbers)
        checkULN = true;
    if (checkUpper && checkNumbers && checkSpecSymbols)
        checkUNSS = true;
    if (checkLower && checkNumbers && checkSpecSymbols)
        checkLNSS = true;
    if (len && checkSymbols && (checkULSS || checkULN || checkUNSS || checkLNSS)) cout << "YES";
        else cout << "NO";
}
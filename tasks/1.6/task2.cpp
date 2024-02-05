#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

bool passage(char, const char*);

int main()
{
	const char* symbols = "aehiouwy";
	const char* one = "bfpv";
	const char* two = "cgjkqsxz";
	const char* three = "dt";
	const char* four = "l";
	const char* five = "mn";
	const char* six = "r";
	string str1, str2, str3;
	cin >> str1;
	str2 = str1[0];
	for (size_t i = 1; i < str1.length(); i++)
		if (!passage(str1[i], symbols))
			str2 += str1[i];

	for (size_t i = 1; i < str2.length(); i++)
	{
		if (passage(str2[i], one))
			str2[i] = '1';
		if (passage(str2[i], two))
			str2[i] = '2';
		if (passage(str2[i], three))
			str2[i] = '3';
		if (passage(str2[i], four))
			str2[i] = '4';
		if (passage(str2[i], five))
			str2[i] = '5';
		if (passage(str2[i], six))
			str2[i] = '6';
	}
	for (size_t i = 0; i <= str2.length() - 1; i++)
	{
		while(str2[i] == str2[i + 1])
			i++;
		str3 += str2[i];
	}

	if (str3.length() < 4)
		for (size_t i = str3.length(); i <= 4; i++)
			str3 += '0';

	cout << endl << str3[0] << str3[1] << str3[2] << str3[3];
}

bool passage(char ch, const char* str)
{
	for (size_t i = 0; i < strlen(str); i++)
		if (toupper(ch) == toupper(str[i]))
			return true;
	return false;
}
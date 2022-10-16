/*
	11. (Anagram)

	Write a program to check whether two given strings are an anagram

		Input the first String : spare
		Input the second String : pears

		Output : spare and pears are Anagram
*/

#include<iostream>
#include <algorithm>
using namespace std;

int main() {
	string str1, str2;

	cout << "Input the first String : ";
	cin >> str1;

	cout << "Input the second String : ";
	cin >> str2;

	sort(str1.begin(), str1.end());

	sort(str2.begin(), str2.end());

	for (int i = 0; i < str1.length(); i++)
	{

		if (str1[i] != str2[i]) {

			cout << "This Two Words is not Anagram ";
			return 0;
		}
	}

	cout << str1 << " " << str2 << " are Anagram" << endl;

	return 0;
}
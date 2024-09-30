//Nickholas Gherman
//Objective: Make a program that compares 2 strings to each other and I forgot

using namespace std;
#include <string>
#include <iostream>
#include <cctype>


int strcmp_case_insensitive(string& string1, string& string2);

int main() {
	string string1 = "";
	string string2 = "";

	cout << "Input a string: ";
	cin >> string1;
	cout << endl;
	cout << "Enter another string: ";
	cin >> string2;
	cout << endl;

	cout << "The comparison of " << string1 << " and " << string2 << ":" << strcmp_case_insensitive(string1, string2) << endl;

return 0;
}


int strcmp_case_insensitive(string& string1, string& string2) {
	for (int i = 0; i < string1.length() && i < string2.length(); i++) {
		char char1 = tolower(string1[i]);
		char char2 = tolower(string2[i]);
		if (char1 != char2) {
			return char1 - char2;
		}
	}
	if(string1.length() != string2.length()) {
		return string1.length() - string2.length();
	}
	return 0;
}

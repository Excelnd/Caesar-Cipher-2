// Caesar Cipher 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string getEncrypted(string &str, int k) {
	k %= 26;
	for (int i = 0; i < str.size(); i++) {
		if (isalpha(str[i])) {
			if (isupper(str[i])) {
				if (str[i] + k > 'Z') str[i] -= 26;
			}
			else {
				if (str[i] + k > 'z') str[i] -= 26;
			}
			str[i] += k;
		}
	}
	return str;
}

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int k;
	cin >> k;
	cout << getEncrypted(s, k);
    return 0;
}


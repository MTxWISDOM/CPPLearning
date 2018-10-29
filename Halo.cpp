#include"stdafx.h"
#include<iostream>
#include<set>
#include<sstream>
#include<string>

using namespace std;

set<string> dict;
int main() {
	string s, buf;
	while (cin >> s) {
		for (int i = 0; i < s.length(); i++) {
			if (isalpha(s[i])) {
				s[i] = tolower(s[i]);
			}
			else {
				s[i] = ' ';
			}
			stringstream ss(s);
			while (ss >> buf) {
				dict.insert(buf);
			}
			}
		}
	set<string>:: iterator it = dict.begin();
	for (; it != dict.end(); ++it) {
		cout << *it << endl;
		return 0;
	}
}
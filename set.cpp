#include<iostream>
#include<set>
#include<Windows.h>
#include<string>
#include<sstream>

using namespace std;

set<int> num; //set里的元素是唯一的
set<string> words;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		num.insert(i);
	}
	cout << "size = " << num.size() << endl;
	for (set<int>::iterator it = num.begin(); it != num.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
	cout << endl;
	
	string s;
	while (cin >> s) {
		if (s == "#") {
			break;
		}
		if()
		
	}
	for (set<string>::iterator w = words.begin(); w != words.end(); ++w) {
		cout << *w << endl;
	}

	system("pause");
	return 0;
}

#include"stdafx.h"
#include<iostream>
#include<Windows.h>
#include<vector>
using namespace std;

vector<int> num; //�൱��int a[]����������
vector<int> pile[101]; //ÿ��pile[i]����һ��vector

int main() {
	int n;
	cin >> n;
	cout << num.size() << endl; //���0��һ��ʼ����Ϊ0
	num.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
	num.clear();
	num.resize(10);
	cout << num.size() << endl;
	for (int i = 0; i < 10; i++) {
		num[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
	num.pop_back();
	cout << num[num.size() - 1] << endl;
	num.push_back(99);
	cout << num[num.size() - 1] << endl;

	int m;
	cin >> m;
	pile->resize(5);
	for (int i = 0; i < 5; i++) {
		pile[i].resize(m);
		for (int j = 0; j < m; j++) {
			cin >> pile[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << i +1 <<  " :" << endl;
		for (int j = 0; j < m; j++) {
			cout << pile[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
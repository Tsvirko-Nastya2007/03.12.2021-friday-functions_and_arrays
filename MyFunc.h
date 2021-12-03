#pragma once
#include<iostream>
#include<ctime>
using namespace std;
void fill_array(int* mas, const int size, int left, int right) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % (right - left + 1) + left;
	}
}
void print_array(int* mas, const int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
	}
	cout << endl;
}
int sum_array(int* mas, const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += mas[i];
	}
	return sum;
}
int pro_array(int* mas, const int size) {
	int pro = 1;
	for (int i = 0; i < size; i++) {
		pro *= mas[i];
	}
	return pro;
}
double srar_array(int* mas, const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += mas[i];
	}
	return double(sum) / size;
}
int chet_array(int* mas, const int size) {
	int chet = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] % 2 == 0) {
			chet++;
		}
	}
	return chet;
}
bool search_array(int* mas, const int size, int x) {
	for (int i = 0; i < size; i++) {
		if (mas[i] == x) {
			return true;
		}
	}
	return false;
}
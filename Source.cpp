#include"MyFunc.h"
int main() {
	int a = 7;
	const int n = 10;
	int arr[n];
	fill_array(arr, n, 0, 10);
	print_array(arr, n);
	cout << sum_array(arr, n)<<endl;
	cout << pro_array(arr, n) << endl;
	cout << srar_array(arr, n) << endl;
	cout << chet_array(arr, n) << endl;
	cout << boolalpha << search_array(arr, n, a) << endl;
}
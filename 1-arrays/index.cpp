#include <iostream>
using namespace std;

void update_array(int arr[], int i, int updated_val) {
	arr[i] = updated_val;
}

void print_arr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
}

int main() {

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr) / sizeof(int);

	update_array(arr, 1, 20);
	print_arr(arr, n);

	return 0;
}
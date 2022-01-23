#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

void bubble_sort(vector<int> &a, int number) {
    for (int time = 1; time < number - 1; time++) {
        for (int j = 0; j <= number - time - 1; j++) {
            if (compare(a[j], a[j + 1])) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main () {
    int number; cin >> number;
    vector<int> arr(number, 0);

    for (int i = 0; i < number; i++) {
        arr[i] = number - i;
    }

    auto start_time = clock();
    // sort(arr.begin(), arr.end());
    bubble_sort(arr, number);
    auto end_time = clock();

    cout << end_time - start_time << endl;

    return 0;
}
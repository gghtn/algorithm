#include <iostream>
using namespace std;

void bubble_sort(int arr[], int arrSize) {
	for (int i = arrSize - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j + 1] < arr[j]) swap(arr[j], arr[j + 1]);
		}
	}
}

int main() {
	int arr[10] = { 2,3,5,7,9,8,6,1,4,10 };

	bubble_sort(arr, 10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
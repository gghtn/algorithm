#include <iostream>
using namespace std;

void insert_sort(int arr[], int arrSize) {
	int i, j;
	for (i = 1; i < arrSize; i++) {
		int tmp = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (tmp < arr[j]) arr[j + 1] = arr[j];
			else break;
		}
		arr[j + 1] = tmp;
	}
}

int main() {
	int arr[10] = { 2,3,5,7,9,8,6,1,4,10 };

	insert_sort(arr, 10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
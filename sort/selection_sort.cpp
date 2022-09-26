#include <iostream>
using namespace std;

//위치를 지정하고 정렬
void selection_sort(int arr[], int arrSize) {
	for (int i = 0; i < arrSize - 1; i++) {
		for (int j = i + 1; j < arrSize; j++) {
			if (arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
	}
}

int main() {
	int arr[10] = { 2,3,5,7,9,8,6,1,4,10 };

	selection_sort(arr, 10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
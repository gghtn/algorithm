#include <iostream>
using namespace std;

//퀵 정렬은 이미 정렬된 리스트의 경우 최악의 경우 n^2이다. 시간 제한이 있는 경우 시간 초과의 가능성 있음
void quick_sort(int arr[], int left, int right) {
	int l = left, r = right, pivot = arr[(left + right) / 2];
	while (l <= r) {
		while (pivot > arr[l]) l++;
		while (pivot < arr[r]) r--;
		if (l <= r) {
			swap(arr[l], arr[r]);
			l++, r--;
		}
	}
	if (left < r) quick_sort(arr, left, r);
	if (l < right) quick_sort(arr, l, right);
}

int main() {
	int arr[10] = { 2,3,5,7,9,8,6,1,4,10 };

	quick_sort(arr, 0, 9);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
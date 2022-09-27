#include <iostream>
using namespace std;

//�� ������ �̹� ���ĵ� ����Ʈ�� ��� �־��� ��� n^2�̴�. �ð� ������ �ִ� ��� �ð� �ʰ��� ���ɼ� ����
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
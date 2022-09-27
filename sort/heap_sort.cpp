#include <iostream>
#include <vector>
using namespace std;
//�� ������ ��� �ð����⵵�� �׻� NlogN�̶�� ������ ������ �������� ������ �� ����.
//�ִ� �� Ʈ���� ������ ������ �����Ѵ�.

void heap_sort(vector<int>& arr, int arrSize) {

	int root, child, size = arrSize - 1;

	//������ �ִ� �� Ʈ��
	for (int i = 1; i < arrSize; i++) {
		int child = i;
		while (child > 0) {
			root = (child - 1) / 2;
			if (arr[root] < arr[child]) {
				swap(arr[root], arr[child]);
				child = root;
			}
			else break;
		}
	}
	swap(arr[0], arr[arrSize - 1]);

	//����
	while (size > 1) {
		root = 0;
		while (root * 2 + 1 < size) {										//ù ��° �ڽĳ�尡 size���� �۾ƾ� ��Ʈ��忡 �ڽĳ�尡 �ִ�
			child = root * 2 + 1;
			if (child + 1 < size && arr[child] < arr[child + 1]) child++;	//�ڽĳ�� 2���� ū ���� ����

			if (arr[root] < arr[child]) {
				swap(arr[root], arr[child]);
				root = child;
			}
			else break;
		}
		swap(arr[0], arr[size - 1]);
		size--;
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	heap_sort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
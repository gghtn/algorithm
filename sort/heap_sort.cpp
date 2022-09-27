#include <iostream>
#include <vector>
using namespace std;
//힙 정렬의 경우 시간복잡도가 항상 NlogN이라는 장점이 있지만 안정성은 보장할 수 없다.
//최대 힙 트리를 만든후 정렬을 시작한다.

void heap_sort(vector<int>& arr, int arrSize) {

	int root, child, size = arrSize - 1;

	//최초의 최대 힙 트리
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

	//정렬
	while (size > 1) {
		root = 0;
		while (root * 2 + 1 < size) {										//첫 번째 자식노드가 size보다 작아야 루트노드에 자식노드가 있다
			child = root * 2 + 1;
			if (child + 1 < size && arr[child] < arr[child + 1]) child++;	//자식노드 2개중 큰 값을 선택

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
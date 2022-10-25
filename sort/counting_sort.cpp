//BOJ 10989
#include <stdio.h>
using namespace std;

#define MAX 10001
int arr[MAX];

int main() {
	int n, num;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &num);
		arr[num]++;
	}

	for (int i = 1; i < MAX; i++) {
		while (arr[i]) {
			printf("%d\n", i);
			arr[i]--;
		}
	}

	return 0;
}
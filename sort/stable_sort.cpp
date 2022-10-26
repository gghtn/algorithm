#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}

//bool compare(pair<int, string> a, pair<int, string> b) {
//	return a.first < b.first;
//}

int main() {
	int n, age;
	string name;
	cin >> n;
	vector<string> vStr(n);
	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		v[i].first = age;
		v[i].second = i;
		vStr[i] = name;
	}

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << vStr[v[i].second] << '\n';
	}

	/* stable_sort
	vector<pair<int, string>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		v[i].first = age;
		v[i].second = name;
	}
	stable_sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
	*/

	return 0;
}
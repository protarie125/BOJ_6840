#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto v3 = vector<int>(3);
	for (auto i = 0; i < 3; ++i) {
		cin >> v3[i];
	}

	sort(v3.begin(), v3.end());
	cout << v3[1];

	return 0;
}
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	if (b < a) {
		auto temp = int{ a };
		a = b;
		b = temp;
	}

	if (c < b) {
		auto temp = int{ b };
		b = c;
		c = temp;
	}

	if (b < a) {
		auto temp = int{ a };
		a = b;
		b = temp;
	}

	cout << b;

	return 0;
}
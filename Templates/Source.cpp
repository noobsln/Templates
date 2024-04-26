#include <iostream>
using namespace std;

template<typename T> T half(T num) { return num / 2; }
template<> int half<int>(int num) { return static_cast<int>(num)/2; }

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << '\n' << half(b) << '\n' << half(c) << '\n';
	return 0;
}
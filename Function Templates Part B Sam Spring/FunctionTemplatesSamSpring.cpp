#include <iostream>
#include <cmath>
using namespace std;

template <class div>
div half(div x) {
	return x / 2;
}
int half(int x) {
	return ceil(x / 2);
}


int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}


#include <iostream>
#include <string>
using namespace std;

int main() {

	int num_problems;
	cin >> num_problems;

	int total_probs = 0;
	for(int i = 0; i < num_problems; i++) {
		int a, b, c;
		cin >> a;
		cin >> b;
		cin >> c;
		if(a + b + c >= 2) {
			total_probs++;
		}
	}

	cout << total_probs << "\n";
	return 0;

}
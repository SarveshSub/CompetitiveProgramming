#include <iostream>
using namespace std;

int main() {
	
	int num_watermelons;
	cin >> num_watermelons;

	if(num_watermelons % 2 == 0 && num_watermelons > 2) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;

}
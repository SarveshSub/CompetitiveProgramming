// Even Odds

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {

	long double max_num;
	cin >> max_num;

	long double position;
	cin >> position;

	long double result = 0;
	long double midway_point = ceil(((double)max_num) / 2.0);
	if(position <= midway_point) {
		result = 1 + (2 * (position-1));
	} else {
		result += (2 * (position - midway_point));
	}

	cout << fixed;
	cout.precision(0);
	cout << result << "\n";

	return 0;

}
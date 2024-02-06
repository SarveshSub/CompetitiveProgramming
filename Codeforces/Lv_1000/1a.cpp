// Theatre Square

#include <iostream>
#include <math.h>

using namespace std;

int main() {

	long long n, m, a;
	cin >> n;
	cin >> m;
	cin >> a;

	long long res = (long long)(ceil((double)n/(double)a)*ceil((double)m/(double)a));
	cout << res << "\n";

	return 0;

}
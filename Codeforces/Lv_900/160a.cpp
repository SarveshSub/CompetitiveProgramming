// Twins

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int num_coins;
	cin >> num_coins;

	vector<int> coins;
	int total_sum = 0;
	for(int i = 0; i < num_coins; i++) {
		int curr_coin;
		cin >> curr_coin;
		total_sum += curr_coin;
		coins.push_back(curr_coin);
	}

	sort(coins.rbegin(), coins.rend());

	int coin_count = 0;
	int my_sum = 0;
	for(int n : coins) {
		coin_count++;
		total_sum -= n;
		my_sum += n;
		if(my_sum > total_sum) {
			break;
		}
	}

	cout << coin_count << "\n";
	return 0;

}
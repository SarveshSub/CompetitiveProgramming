#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n, k;
	cin >> n;
	cin >> k;

	vector<int> scores;
	for(int i = 0; i < n; i++) {
		int curr_score;
		cin >> curr_score;
		scores.push_back(curr_score);
	}

	int cutoff = scores[k - 1];
	int advancing_players = 0;
	for(int s : scores) {
		if(s >= cutoff && s > 0) {
			advancing_players++;
		}
	}

	cout << advancing_players << "\n";

	return 0;

}
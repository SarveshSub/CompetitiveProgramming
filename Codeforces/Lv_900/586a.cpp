// Alena's Schedule

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int lessons;
	cin >> lessons;

	vector<int> schedule;
	int at_uni = 0;
	int latest_one = 0;
	for(int i = 0; i < lessons; i++) {
		int curr_time;
		cin >> curr_time;
		if(curr_time == 1) {
			at_uni++;
			latest_one = i;
		}
		schedule.push_back(curr_time);
	}

	int index = 0;
	while(index < latest_one) {

		if(index > 0 && schedule[index] == 0 && schedule[index - 1] != 0 && index < lessons - 1 && schedule[index + 1] != 0) {
			at_uni++;
		} 
		index++;

	}

	cout << at_uni << "\n";
	return 0;

}
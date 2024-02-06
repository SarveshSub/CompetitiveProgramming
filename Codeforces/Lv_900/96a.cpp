// Football

#include <iostream>
#include <string>

using namespace std;

int main() {

	string positions;
	cin >> positions;

	int index = 0;
	while(index < positions.length()) {

		int adj_players = 2;
		while(index < positions.length() && positions[index+1] == positions[index]) {
			if(adj_players == 7) {
				cout << "YES";
				return 0;
			}
			adj_players++;
			index++;
		}

		index++;

	}

	cout << "NO";
	return 0;

}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	int num_words;
	cin >> num_words;

	vector<string> words;
	for(int i = 0; i < num_words; i++) {
		string curr;
		cin >> curr;
		words.push_back(curr);
	}

	for(string s : words) {

		if(s.length() <= 10) {

			cout << s << "\n";
			continue;

		} else {

			int midCount = s.length() - 2;
			string newStr = s[0] + to_string(midCount) + s[s.length() - 1];
			cout << newStr << "\n";

		}

	}

	return 0;

}
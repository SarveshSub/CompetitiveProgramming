// String Task

#include <iostream>
#include <string.h>

using namespace std;

int main() {

	string s;
	cin >> s;

	int consonant_count = 0;

	for(int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
		if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')) {
			consonant_count++;
		}
	}

	string new_str(consonant_count * 2, '.');
	int old_ptr = 0;
	for(int i = 0; i < new_str.length(); i += 2) {
		while(s[old_ptr] == 'a' || s[old_ptr] == 'e' || s[old_ptr] == 'i' || s[old_ptr] == 'o' || s[old_ptr] == 'u' || s[old_ptr] == 'y') {
			old_ptr++;
		}
		new_str[i] = '.';
		new_str[i+1] = s[old_ptr];
		if(old_ptr < s.length()) {
			old_ptr++;
		}
	}

	cout << new_str;
	return 0;

}
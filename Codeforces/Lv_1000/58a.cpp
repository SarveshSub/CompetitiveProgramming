// Chat Room

#include <iostream>
#include <stack>

using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    stack<char> hello;
    hello.push('o');
    hello.push('l');
    hello.push('l');
    hello.push('e');
    hello.push('h');

    string s;
    cin >> s;

    for(char c : s) {
    	if(hello.empty()) break;
    	if(c == hello.top()) hello.pop();
    }

    if(hello.empty()) {
    	cout << "YES\n";
    } else {
    	cout << "NO\n";
    }

    return 0;

}

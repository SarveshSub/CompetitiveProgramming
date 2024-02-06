// Repetitions

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int global_max = 1, local_max = 1;
    for(int i = 1; i < s.size(); i++) {
        if(s[i-1] == s[i]) local_max++;
        else local_max = 1;
        global_max = max(global_max, local_max);
    }

    cout << global_max;
    return 0;

}

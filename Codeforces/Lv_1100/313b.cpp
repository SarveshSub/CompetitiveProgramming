// Ilya and Queries

#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    vector<int> dp(s.length(), 0);
    for(int i = 0; i < s.length() - 1; i++) {
        if(i == 0) {
            dp[0] = (s[0] == s[1]) ? 1 : 0;
        } else {
            dp[i] = (s[i] == s[i+1]) ? 1 + dp[i - 1] : dp[i - 1];
        }
    } 
    dp[s.length() - 1] = dp[s.length() - 2];

    int num_queries;
    cin >> num_queries;
    while(num_queries-- > 0) {
        int l = 0, r = 0;
        cin >> l >> r;
        cout << dp[r - 2] - ((l >= 2) ? dp[l - 2] : 0) << "\n";
    }

    return 0;

}

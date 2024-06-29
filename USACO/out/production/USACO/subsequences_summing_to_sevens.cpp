// Subsequences Summing to Sevens 

#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);

    vector<int> sevens(7, -1);
    sevens[0] = 0;
    long long sum = 0;
    int max_dist = 0;

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int id;
        cin >> id;
        sum = (id + sum) % 7;
        if(sevens[sum] == -1) sevens[sum] = i;
        else max_dist = max(max_dist, i - sevens[sum]);
    }

    cout << max_dist << "\n";

    return 0;

}

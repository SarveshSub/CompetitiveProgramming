// The Bovine Shuffle

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <climits>

using namespace std;

int main() {
    freopen("shuffle.in", "r", stdin);

    int n;
    cin >> n;

    vector<int> cows(n, 0);
    vector<int> shuffles(n, 0);

    for(int i = 0; i < n; i++) {
        cin >> shuffles[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> cows[i];
    }

    for(int i = 0; i < n; i++) {
        for(int shuffle = 0; shuffle < 3; shuffle++) {
            
        }
    }

    freopen("shuffle", "w", stdout);
    for(int cow : cows) {
        cout << cow << "\n";
    }
}

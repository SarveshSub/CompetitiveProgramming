// Sereja and Suffixes

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int nums;
    cin >> nums;
    int queries;
    cin >> queries;

    vector<int> elements;
    vector<int> dp(nums, 0);
    unordered_set<int> set;

    while(nums-->0) {
        int n;
        cin >> n;
        elements.push_back(n);
    }

    dp[elements.size() - 1] = 1;
    set.insert(elements[elements.size() - 1]);
    for(int i = elements.size() - 2; i >= 0; i--) {
        if(set.find(elements[i]) != set.end()) {
            dp[i] = dp[i + 1];
        } else {
            dp[i] = 1 + dp[i + 1];
        }
        set.insert(elements[i]);
    }

    while(queries-->0) {
        
    }

    return 0;

}

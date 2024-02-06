// Interesting Drink

#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int shops;
    cin >> shops;

    vector<int> prices;
    for(int i = 0; i < shops; i++) {
        int price;
        cin >> price;
        prices.push_back(price);
    }

    int days;
    cin >> days;

    sort(prices.begin(), prices.end());

    for(int i = 0; i < days; i++) {
        int money;
        cin >> money;
        
        int l = 0, r = prices.size()-1;

        if(money < prices[l]) {
            cout << "0" << "\n";
            continue;
        }
        if(money >= prices[r]) {
            cout << shops << "\n";
            continue;
        }

        while(l < r) {
            int mid = l + (r-l)/2;
            if(prices[mid] <= money) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        cout << l << "\n";
    }

    return 0;

}

// Laptops

#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector< pair<int,int> > laptops;
    for(int i = 0; i < n; i++) {
        int price, quality;
        cin >> price >> quality;
        pair<int,int> p;
        p.first = price;
        p.second = quality;
        laptops.push_back(p);
    }

    sort(laptops.begin(), laptops.end());

    for(int i = 0; i < laptops.size() - 1; i++) {
        if(laptops[i].second > laptops[i+1].second && laptops[i].first < laptops[i+1].first) {
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";
    return 0;

}

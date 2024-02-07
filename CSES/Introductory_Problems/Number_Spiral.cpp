// Number Spiral

#include <iostream>

using namespace std;

typedef long long ll;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    while(n-->0) {
        ll y, x;
        cin >> y;
        cin >> x;

        ll max_val = max(y,x);
        ll last_square = (max_val - 1) * (max_val - 1);
        
        if(max_val % 2 == 0) {
            if(y > x) cout << (max_val * max_val) - x + 1 << "\n";
            else cout << last_square + y << "\n";
        } else {
            if(y > x) cout << last_square + x << "\n";
            else cout << (max_val * max_val) - y + 1 << "\n";
        }
    }

    return 0;

}

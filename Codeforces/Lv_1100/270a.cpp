// Fancy Fence

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while(n--) {
        int angle;
        cin >> angle;
        if((360 % (180 - angle)) == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;

}

// Permutations

#include <iostream>

using namespace std;

typedef long long ll;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if(n == 2 || n == 3) {
        cout << "NO SOLUTION";
    } else {
        // print evens
        for(int i = 2; i < n; i += 2) {
            cout << i << " ";
        }
        if(n % 2 == 0) cout << n << " ";
        // print odds
        for(int i = 1; i < n; i += 2) {
            cout << i << " ";
        }
        if(n % 2 != 0) cout << n;
    }

    return 0;

}

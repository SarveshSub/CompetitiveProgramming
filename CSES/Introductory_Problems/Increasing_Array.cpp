// Increasing Array

#include <iostream>

using namespace std;

typedef long long ll;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    ll res = 0;
    ll old_num;
    cin >> old_num;
    n--;
    while(n-->0) {
        ll new_num;
        cin >> new_num;
        if(new_num < old_num) res += (old_num - new_num);
        else old_num = new_num;
    }

    cout << res;
    return 0;

}

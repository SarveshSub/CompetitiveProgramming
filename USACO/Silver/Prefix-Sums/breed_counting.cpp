// Breed Counting

#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);

    int n, q;
    vector<tuple<int,int,int>> sums;
    sums.push_back({0,0,0});
    cin >> n >> q;

    while(n-->0) {
        int cow;
        cin >> cow;
        tuple<int,int,int> curr;
        if(sums.size() == 0) {
            if(cow == 1) curr = {1, 0, 0};
            else if(cow == 2) curr = {0, 1, 0};
            else curr = {0, 0, 1};
        } else {
            tuple<int,int,int> prev = sums.back();
            int cow1 = get<0>(prev);
            int cow2 = get<1>(prev);
            int cow3 = get<2>(prev);
            if(cow == 1) curr = {1 + cow1, cow2, cow3};
            else if(cow == 2) curr = {cow1, 1 + cow2, cow3};
            else curr = {cow1, cow2, 1 + cow3};
        }
        sums.push_back(curr);
    }

    while(q-->0) {
        int a, b;
        cin >> a >> b;
        tuple<int,int,int> r = sums[b];
        tuple<int,int,int> l = sums[a-1];
        cout << get<0>(r) - get<0>(l) << " " << get<1>(r) - get<1>(l) << " " << get<2>(r) - get<2>(l) << "\n";
    }

    return 0;

}

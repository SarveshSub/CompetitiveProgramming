// Fence

#include <iostream>
#include <limits.h>
#include <math.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long planks, width;
    cin >> planks >> width;
    long long heights[planks], sum[planks];
    for(int i = 0; i < planks; i++) {
        cin >> heights[i];
        if(i == 0) sum[0] = heights[0];
        else sum[i] = sum[i-1] + heights[i];
    }

    long long curr_sum = 0, min_val = LLONG_MAX;
    int ans = 0;
    for(int i = 0; i < planks - width + 1; i++) {
        if(i == 0) curr_sum = sum[i + width - 1];
        else curr_sum = abs(sum[i + width - 1] - sum[i - 1]);
        if(curr_sum < min_val) {
            min_val = curr_sum;
            ans = i;
        }
    }

    cout << ans+1;

    return 0;

}

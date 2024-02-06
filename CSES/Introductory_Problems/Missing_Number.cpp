#include <iostream>

using namespace std;

int main() {
    
    long long int n;
    cin >> n;
    long long int expected = ((n+1) * (n)) / 2;
    n--;

    long long int sum = 0;
    while(n-->0) {
        int curr;
        cin >> curr;
        sum += curr;
    }

    cout << expected - sum;
    return 0;

}
// Taxi

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int max_taxis;
    cin >> max_taxis;

    int one = 0, two = 0, three = 0, four = 0;
    for(int i = 0; i < max_taxis; i++) {
        int s;
        cin >> s;
        if(s == 1) {
            one++;
        } 
        else if(s == 2) {
            two++;
        } 
        else if(s == 3) {
            three++;
        }
        else {
            four++;
        }
    }

    //Fours
    int taxis = 0;
    taxis += four;

    //Threes
    taxis += three;
    one -= three;
    if(one < 0) one = 0;

    //Two
    if(two % 2 == 0) {
        two /= 2;
        taxis += two;
    } else {
        two = (two / 2) + 1;
        taxis += two;

        one -= 2;
        if(one < 0) one = 0;
    }

    //One
    one = (int)ceil(one / 4.0);
    taxis += one;

    cout << taxis;

    return 0;

}

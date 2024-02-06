// Young Physicist

#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);	

    int rows;
    cin >> rows;

    int x, y ,z;
    int xsum, ysum, zsum;
    for(int i = 0; i < rows; i++) {
    	cin >> x >> y >> z;
    	xsum += x;
    	ysum += y;
    	zsum += z;
    }

    if(xsum == 0 && ysum == 0 && zsum == 0) cout << "YES\n";
    else cout << "NO\n";

    return 0;

}
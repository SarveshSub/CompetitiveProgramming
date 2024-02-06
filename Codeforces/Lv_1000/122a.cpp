// Lucky Division

#include <iostream>

using namespace std;

int main() { 

	ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    // Brute force for lucky numbers between 1-1000
   	int lucky_nums[] = {4, 44, 47, 444, 474, 447, 477, 7, 74, 77, 744, 747, 774, 777};

   	int input;
   	cin >> input;
   	for(int n : lucky_nums) {
   		if(input % n == 0) {
   			cout << "YES\n";
   			return 0;
   		}
   	}

   	cout << "NO\n";

    return 0;

}
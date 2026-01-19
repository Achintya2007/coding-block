#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;

    int num = 0;
    while (n != 0) {
        num = n % 10;
        sum += num;
        n = n / 10;
    }

    cout << sum << endl;
    return 0;
}

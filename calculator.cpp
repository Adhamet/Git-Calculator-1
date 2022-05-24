#include <iostream>

using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    cout << "Enter your query?\n";
    
    int x, y, ans = 0;
    char ch;

    cin >> x >> ch >> y;

    if (ch == '+') {
        ans = add(x, y);
    }

    cout << ans << endl;

    return 0;
}
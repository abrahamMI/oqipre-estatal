#include <iostream>

using namespace std;

void solve() {
    int A,B;

    cin >> A >> B;

    int C = (B+A)/2;

    cout << (C - A) + (B - C) << endl;
}

int main () {
    
    solve();

    return 0;
}
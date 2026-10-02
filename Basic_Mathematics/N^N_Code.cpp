#include <iostream>
using namespace std;

void generate(int n, int pos) {
    if (pos == n) {
        return;
    }

    for (int i = 0; i < n; i++) {
        generate(n, pos + 1);
    }
}

int main() {
    int n;
    cin >> n;
    generate(n, 0);
    return 0;
}
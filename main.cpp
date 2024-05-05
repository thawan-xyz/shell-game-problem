#include <iostream>
#include <array>

using namespace std;

struct {
    array<bool, 3> pebble = {};
    int sum = 0;
} first, second, third;

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int s, a, b, g;
    first.pebble[0] = true;
    second.pebble[1] = true;
    third.pebble[2] = true;

    cin >> s;

    for (int i = 0; i < s; ++i) {
        cin >> a >> b >> g;

        swap(first.pebble[a - 1], first.pebble[b - 1]);
        swap(second.pebble[a - 1], second.pebble[b - 1]);
        swap(third.pebble[a - 1], third.pebble[b - 1]);

        if (first.pebble[g - 1]) {
            first.sum += 1;
        }
        if (second.pebble[g - 1]) {
            second.sum += 1;
        }
        if (third.pebble[g - 1]) {
            third.sum += 1;
        }
    }

    if (first.sum > second.sum && first.sum > third.sum) {
        cout << first.sum << endl;
    }
    else if (second.sum > third.sum) {
        cout << second.sum << endl;
    }
    else {
        cout << third.sum << endl;
    }

    return 0;
}

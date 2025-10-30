#include <bits/stdc++.h>

using namespace std;

int main() {

    // INPUT & OUTPUT

    int a, b;
    string s;
    cin >> a >> b >> s;
    cout << a << ' ' << b << ' ' << s << '\n';

    // MAKING I/O EFFICIENT

    ios::sync_with_stdio(0);
    cin.tie(0);

    // READ A LINE INCLUDING SPACES

    string s;
    getline(cin, s);

    // READING UNKNOWN AMOUNT OF DATA

    int x;
    while (cin >> x) {
        ;
    }

    // I/O FROM/TO A FILE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    /************************************************************************************************************************************************************************************************************************************************/

    // RANGE OF 'int' -----------> -2.10^9  to 2.10^9 ------> -10^9  to 10^9
    // RANGE OF 'long long' -----> -9.10^18 to 9.10^18 -----> -10^18 to 10^18
    // RANGE OF '__int128_t' ----> -10^38   to 10^38

    long long x = 123456789123456789LL;

    int a = 123456789;
    long long b = (long long)a * a;

    /************************************************************************************************************************************************************************************************************************************************/

    // MODULAR ARITHMETIC

    (a + b) mod m = (a mod m + b mod m) mod m
    (a - b) mod m = (a mod m - b mod m) mod m
    (a . b) mod m = (a mod m . b mod m) mod m

    // PROGRAM TO CALCULATE n!

    long long x = 1;
    int m = 1e9 + 7, n;
    for (int i = 2; i <= n; i++) {
        x = (x * i) % m;
    }
    x = x % m;
    if (x < 0) x += m;
    cout << x << '\n';

    /************************************************************************************************************************************************************************************************************************************************/

    // PRINT WITH CERTAIN PRECISION

    double x;
    printf("%.20f", x);

    // COMPARE FLOATING POINT NUMBERS

    float a, b;
    if (abs(a - b) < 1e-9) {
        // equal
    }

    // NUMBER OF DIGITS OF 'n' IN BASE 'b'

    floor(logb(n) + 1)

    // MAXIMUM SUBARRAY - KADANE'S

    vector<int> a(n) = {...};
    int best = 0, sum = 0; // best = INT_MIN
    for (int i = 0; i < n; i++) {
        sum = max(a[i], a[i] + sum);
        best = max(best, sum);
    }
    cout << best << '\n';


}

/*
    g++ -std=c++23 -O2 - wall main.cpp -o main
*/
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

    // MAXIMUM SUBARRAY - KADANE'S - O(n)

    vector<int> a(n) = {...};
    int best = 0, sum = 0; // best = INT_MIN
    for (int i = 0; i < n; i++) {
        sum = max(a[i], a[i] + sum);
        best = max(best, sum);
    }
    cout << best << '\n';

    /************************************************************************************************************************************************************************************************************************************************/

    // BUBBLE SORT - O(n^2)

    for (int i = 0; i < n; i++) {
        for (int j = 0; i < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    // COUNTING SORT - O(n)

    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) { // All input belongs to [0, n - 1]
        int index;
        cin >> index;
        a[index]++;
    }
    for (int i = 0; i < n; i++) {
        if (a[i]) {
            while (a[i]--) {
                cout << i << ' ';
            }
        }
    }
    cout << '\n';

    /************************************************************************************************************************************************************************************************************************************************/

    // SORTING IN C++ USING STL

    vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    sort(v.begin(), v.end());

    int a[n] = {1, 9, 7, 2, 0, -7};
    sort(a, a + n);

    string s = "monkey";
    sort(s.begin(), s.end());

    vector<pair<int, int>> v;
    v.push_back({1, 5});
    v.push_back({2, 3});
    v.push_back({1, 2});
    sort(v.begin(), v.end());

    vector<tuple<int, int, int>> v;
    v.push_back({2, 1, 4});
    v.push_back({1, 5, 3});
    v.push_back({2, 1, 3});
    sort(v.begin(), v.end());

    // REVERSE SORTING IN C++ USING STL

    vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    sort(v.rbegin(), v.rend());

    /************************************************************************************************************************************************************************************************************************************************/

    // COMPARISON OPERATOR FOR USER-DEFINED STRUCT

    struct P {
        int x, y;
        bool operator<(const P &p) {
            if (x != p.x) return x < p.x; // return true for the sorting you want
            return y < p.y;
        }
    };

    /************************************************************************************************************************************************************************************************************************************************/

    // SORT USING USER DEFINED COMPARATOR FUNCTION

    bool comp(string a, string b) {
        if (a.size() != b.size()) return a.size() < b.size(); // sort by length
        return a < b; // sort by alphabet
    }

    sort(s.begin(), s.end(), comp);

    /************************************************************************************************************************************************************************************************************************************************/

    // SEARCH AN ELEMENT IN ARRAY - O(n)

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            // x found at index i
        }
    }

    // BINARY SEARCH - SEARCH IN SORTED ARRAY - O(log n)

    // METHOD 1

    int a = 0, b = n - 1;
    while (a <= b) {
        int k = (a + b) / 2;
        if (a[k] == x) {
            // x found at index k
        }
        if (a[k] > x) b = k - 1;
        else a = k + 1;
    }

    // METHOD 2 - EFFICIENT

    int k = 0;
    for (int i = n / 2; i >= 1; i /= 2) {
        while (k + b < n && a[k + b] <= x) k += b;
    }
    if (a[k] == x) {
        //x found at index k
    }
}

/*
    g++ -std=c++23 -O2 - wall main.cpp -o main
*/
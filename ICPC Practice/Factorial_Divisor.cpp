#include<bits/stdc++.h>
using namespace std;

map<int, int> prime_factors(int d) {
    map<int, int> factors;
    for (int divisor = 2; divisor * divisor <= d; ++divisor) {
        while (d % divisor == 0) {
            factors[divisor]++;
            d /= divisor;
        }
    }
    if (d > 1) factors[d] = 1;
    return factors;
}

int count_factor_in_factorial(int n, int factor) {
    int count = 0;
    long long power = factor;
    while (power <= n) {
        count += n / power;
        power *= factor;
    }
    return count;
}

string is_divisible_by_factorial(int n, int d) {
    map<int, int> factors = prime_factors(d);
    for (auto &p : factors) {
        int prime = p.first;
        int required_power = p.second;
        if (count_factor_in_factorial(n, prime) < required_power) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        cout << is_divisible_by_factorial(n, d) << endl;
    }
    return 0;
}

#include <bits/stdc++.h> 
using namespace std;

typedef unsigned long long int ull;


int simpleModularPower(ull a, ull b, ull p) {
    if (a > p)
        a = a % p;
    ull m = 1;
    int n = (int)(log2(b)) + 1;
    for (int i = n-1; i >= 0; i--) {
        m = (m*m) % p;
        bool bit = (b >> i) & 1;
        if (bit) 
            m = (m*a)%p;
    }
    return m;
}


void diffieHellman(ull p, ull g, ull a, ull b)
{
   ull ra = simpleModularPower(g, a, p);
   ull rb = simpleModularPower(g, b, p);
   ull key = simpleModularPower(ra, b, p);
   cout << ra << " " << rb << " " << key << endl;
}



int main() {
    ull p, g, a, b;
    cin >> p >> g >> a >> b;
    diffieHellman(p, g, a, b);
}

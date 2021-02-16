#include <bits/stdc++.h>

using namespace std;

template<typename T>
void pretty_print(const T& c, int combo)
{
    int n = c.size();
    for (int i = 0; i < n; ++i) {
        if ((combo >> i) & 1)
            cout << c[i] << ' ';
    }
    cout << endl;
}

template<typename T>
void combo(const T& c, int k)
{
    int n = c.size();
    int combo = (1 << k) - 1;       // k bit sets
    while (combo < 1<<n) {

        pretty_print(c, combo);

        int x = combo & -combo;
        int y = combo + x;
        int z = (combo & ~y);
        combo = z / x;
        combo >>= 1;
        combo |= y;
    }
}

int main()
{
    vector<int>c0;
   // = {'1', '2', '3', '4', '5'};
   c0.push_back(1);
   c0.push_back(3);
   c0.push_back(5);
   c0.push_back(18);
   c0.push_back(9);
   c0.push_back(11);
   c0.push_back(13);

    combo(c0, 3);

    vector<int> c1;
    c1.push_back(23);
    c1.push_back(33);
    c1.push_back(43);
    c1.push_back(53);
    c1.push_back(63);
    c1.push_back(73);
    c1.push_back(83);
    // = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    combo(c1, 4);
    return 0;
}

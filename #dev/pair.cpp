#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;

int main()
{
    pair<string, int> p1 = make_pair("Abhi", 205);
    cout << p1.first << " " << p1.second;

    p1.first = "It is possible to edit pairs after declaring them";
    cout << p1.first << " " << p1.second << endl;

    pair<string, string> pair2{"Testing", "curly braces"};
    cout << pair2.first << " " << pair2.second << endl;
}

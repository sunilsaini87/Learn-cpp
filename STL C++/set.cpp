#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(0);
    s.insert(7);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.erase(s.begin());
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << s.count(3) << endl;
    cout << s.count(5) << endl;
}
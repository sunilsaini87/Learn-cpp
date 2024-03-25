#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12;
    int b = 22;

    auto sum = a + b;
    cout << sum << endl;
    cout<<typeid(sum).name();
    return 0;
}
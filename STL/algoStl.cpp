#include <iostream>
using namespace std;
// #include <bits/stdc++.h> 
#include <algorithm>
#include <vector>

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout<<binary_search(v.begin(), v.end(), 4);
}
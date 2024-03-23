#include <iostream>
using namespace std;
#include <vector>

int main(int argc, char const *argv[])
{
    vector<int> vec;

    vec.push_back(3);
    // cout << vec.capacity() << endl;
    vec.push_back(4);
    // cout << vec.capacity() << endl;
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(9);
    // cout << vec.capacity() << endl;
    // cout << vec.size() << endl;

    // cout << vec.at(3);
    // vector<int> a(1, 2, 3, 4);
    for (int i : vec)
    {
        // cout << i;
    }


    vector<int> a(5,2);
    for (int i : a)
    {
        cout<<i;
    }
    
}